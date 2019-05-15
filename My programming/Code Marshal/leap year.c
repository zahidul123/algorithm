#include <stdio.h>

int main()
{
    long long int liar;
    scanf("%lld",&liar);

    if((liar%4==0 && liar%100!=0)|| liar%400==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}

