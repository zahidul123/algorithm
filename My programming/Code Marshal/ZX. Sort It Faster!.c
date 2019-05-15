#include<stdio.h>

void sort(intt [100000],intt,intt);
void quicksort(intt [100000],intt,long  int);
int main()
{
    int i,tc,lp,p;
    intt put,sz;
    scanf("%d",&tc);
    for(lp=1; lp<=tc; lp++)
    {
        scanf("%d",&sz);
        intt mnar[sz];
        for(i=0; i<sz; i++)
        {
            scanf("%d",&put);
            mnar[i]=put;
        }
        scanf("%d",&p);
        if(p==2){
        sort(mnar,0,sz-1);
        }
        else{
          quicksort(mnar,0,sz-1);
        }
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

void sort(intt mnar[100000],long  int fst,intt lst)
{
   intt pvt,j,cng,i;

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

void quicksort(intt x[100000],intt first,intt last){
    intt pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

