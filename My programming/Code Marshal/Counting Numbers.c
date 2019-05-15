/*#include<stdio.h>
int main()
{
    int a[100000],i,j,l,max=0,count=0,t,k,n,p,u=0,flag=0;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        max=0;
        u=0;
        for(i=0; i<n; i++)
        {
           // max=0;
            count=0;

            for(j=i; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
            if(max<count)
            {
                max=count;
                l=i;

            }else if(max==count){
                  p=a[0];
            for(i=1; i<n; i++)
            {
                if(a[i]>=p)
                {
                    p=a[i];
                    l=i;
                }
            }
            }

        }
        if(max==u)
        {
            p=a[0];
            for(i=1; i<n; i++)
            {
                if(a[i]>=p)
                {
                    p=a[i];
                }
            }

            printf("Case %d: %d %d\n",k,p,max);
        }

        else
        {
            printf("Case %d: %d %d\n",k,a[l],max);
        }

    }
    getch();
    return 0;
}

/*int main(){

  int T,t,i;
  scanf("%d",&T);
  for(t = 1; t <= T; t++){
    int n,cnt[101] = {0},tmp;
    scanf("%d",&n);
    for( i = 0; i < n; i++){
      scanf("%d",&tmp);
      cnt[tmp]++;
    }
    int high = 0,marks;
    for(i = 0; i <= 100; i++){
      if(cnt[i] >= high){
        high = cnt[i];
        marks = i;
      }
    }
    printf("Case %d: %d %d\n",t,marks,high);
  }
  return 0;
}*/

#include<stdio.h>

int main(){

  int T,i,t;
  scanf("%d",&T);
  for( t = 1; t <= T; t++){
    int n,cnt[101] = {0},tmp;
    scanf("%d",&n);
    for( i = 0; i < n; i++){
      scanf("%d",&tmp);
      cnt[tmp]++;
    }
    int high = 0,marks;
    for(i = 0; i <= 100; i++){
      if(cnt[i] >= high){
        high = cnt[i];
        marks = i;
      }
    }
    printf("Case %d: %d %d\n",t,marks,high);
  }
  return 0;
}
