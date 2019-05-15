#include<stdio.h>

int main()
{
    int a[100],n,i,l;

    printf("Enter array index number ");
    scanf("%d", &n);
    printf("\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%2d", a[i]);
    }
    printf("Enter the location where you want to delete element ");
    scanf("%d", &l);

    if(l>=n+1)
        printF("Invalid choice \n");
    else
    {
        for(i=l-1; i<n-1; i++)
            a[i]=a[i=1];
''
    }



}
