#include<stdio.h>

int main()
{
    int i,n,max=0;

    printf("Enter a  number ");
    scanf("%d", &n);
    int a[n];


    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>max)
            max=a[i];
    }
    printf("Maximum number is %d", max);

}
