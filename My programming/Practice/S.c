#include <stdio.h>
int main()
{
    int n=3,rows,i,space,star;
    for(i=1; i<n; i++)
    {
        scanf("%d", &rows);
        for(i=1; i<=rows; i++)
        {
            for(space=rows-i; space>=1; space--)
            {
                printf(" ");
            }
            for(star=1; star<=(i*2)-1; star++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(i=rows-1; i>=1; i--)
        {
            for(space=1; space<=rows-i; space++)
            {
                printf(" ");
            }
            for(star=1; star<=(i*2)-1; star++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
