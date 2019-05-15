#include<stdio.h>
int main()
{
    int AF,MA,N,X,total,total1,total2;
    scanf("%d",&N);
    MA=N;
    AF=2*N;
    total1=MA+AF;
    scanf("%d",&X);
    if(1<N&&N<=100000000000)
        if(X<2*N)
        {
            MA=2*N;
            AF=(2*N-X)*2;
        }
        total2=MA+AF;
        total=total1+total2;
        printf("%d",total);
    return 0;

}
