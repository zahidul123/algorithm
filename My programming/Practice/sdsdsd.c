#include<stdio.h>

int main()
{
    int i,j,a;

    printf("Enter a number of a ");
    scanf("%d", &a);

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%2d", i);
        }
        printf("\n");
    }
}
