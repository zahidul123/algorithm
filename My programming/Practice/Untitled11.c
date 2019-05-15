#include<stdio.h>

int main()
{
    int i,n;

    printf("Enter a  number ");
    scanf("%d", &n);
    int a[n];
    int max=a[0];

    for(i=1; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>max)
            max=a[i];
    }
    printf("Maximum number is %d", max);

}

