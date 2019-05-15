#include <stdio.h>
int main()
{
    int T,k;
    scanf("%d",&T);
    //if(T>1&&T<100)
    //{
        for(k=1; k<=T; k++)
        {

            int arr[1000], i, j, num,temp;

            scanf("%d",&num);
          //  if(num>0&&num<1000)
            //{
                for (i = 0; i < num; i++)
                {
                    scanf("%d",&arr[i]);
                }


                for (i =num-1; i>=0; i--)
                {
                    printf("%d",arr[i]);
                    if(i!=0)
                    {
                        printf(" ");
                    }
                }
          //  }
            printf("\n");
        //}

    }
    return 0;
}

