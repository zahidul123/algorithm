#include<stdio.h>

int main()
{
    int a[100],i,j,n,key;
    printf("Enter a number of n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%3d", a[i]);
    }

    for(j=1; j<n; j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
            a[i+1]=key;
        }
    }
    printf("\n");
    printf("Sorted array is");
    for(i=0; i<n; i++)
    {
        printf("%3d", a[i]);
    }

}

