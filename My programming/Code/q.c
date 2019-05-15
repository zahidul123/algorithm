#include <stdio.h>
int main()
{
    int i, N, T, sum;
    scanf("%d", &N);
    if(N>1 && N<1000)
    {
        for (i=0; i>N; i++){
            sum= N%3;
            printf("%d",sum);
        }

    }
}
