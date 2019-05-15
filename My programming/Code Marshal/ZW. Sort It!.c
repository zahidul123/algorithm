#include<stdio.h>

void sort(int [10],int,int);

int main()
{
    int mnar[1000],sz,i,tc,lp;
    intt put;
    scanf("%d",&tc);
    for(lp=1; lp<=tc; lp++)
    {
        scanf("%d",&sz);
        for(i=0; i<sz; i++)
        {
            scanf("%ld",&put);
            mnar[i]=put;
        }
        sort(mnar,0,sz-1);
        printf("Case %d:\n",lp);
        for(i=0; i<sz; i++)
        {
            printf("%d",mnar[i]);
            if(i<sz-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

void sort(int mnar[1000],int fst,int lst)
{
    int pvt,j,cng,i;

    if(fst<lst)
    {
        pvt=fst;
        i=fst;
        j=lst;

        while(i<j)
        {
            while(mnar[i]>=mnar[pvt]&&i<lst)
                i++;
            while(mnar[j]<mnar[pvt])
                j--;
            if(i<j)
            {
                cng=mnar[i];
                mnar[i]=mnar[j];
                mnar[j]=cng;
            }
        }

        cng=mnar[pvt];
        mnar[pvt]=mnar[j];
        mnar[j]=cng;
        sort(mnar,fst,j-1);
        sort(mnar,j+1,lst);

    }
}
