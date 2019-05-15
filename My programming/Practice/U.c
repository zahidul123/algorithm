#include <stdio.h>
int main()
{
    int M,N;
    scanf("%d",&M);
    for(N=1; N<=M; N++)
    {
        int arr[500],i,j,N;
        scanf("%d",&N);
        for (i = 0; i<N; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (i=N-1; i>=0; i--)
        {
            printf("%d",arr[i]);
            if(i!=0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
