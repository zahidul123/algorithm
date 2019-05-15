#include<stdio.h>
#include<string.h>
void print_lcs(int i,int j);
int dj[200][200],c=0;
char sh[200],hs[200],b[200];
int main()
{
    int pl,lcs[200][200],il,tc,pn;
    scanf("%d",&pn);
    for(tc=1;tc<=pn; tc++)
    {
        gets(sh);
        gets(hs);
        for(il=0; il<=strlen(sh); il++)
        {
            lcs[0][il]=0;
        }
        for(il=0; il<=strlen(hs); il++)
        {
            lcs[il][0]=0;
        }
        for(il=1; il<=strlen(sh); il++)
        {
            for(pl=1; pl<=strlen(sh); pl++)
            {
                if(sh[il-1]==hs[pl-1])
                {
                    lcs[il][pl]=lcs[il-1][pl-1]+1;
                    dj[il][pl]=3;
                }
                else
                {
                    if(lcs[il-1][pl]>=lcs[il][pl-1])
                    {
                        lcs[il][pl]=lcs[il-1][pl];
                        dj[il][pl]=6;
                    }
                    else
                    {
                        lcs[il][pl]=lcs[il][pl-1];
                        dj[il][pl]=9;
                    }
                }
            }
        }
        printf("Case %d: ",tc);
        print_lcs(strlen(sh),strlen(hs));
        printf("%d",c);
        printf("\n");
        c=0;
    }
}
void print_lcs(int i,int j)
{

    if(i==0 || j==0)
        return;
    if(dj[i][j]==3)
    {
          c++;
        print_lcs(i-1,j-1);
        //b[c]=
        //sh[i-1];

    }
    else if(dj[i][j]==6)
        print_lcs(i-1,j);
    else
        print_lcs(i,j-1);


}
