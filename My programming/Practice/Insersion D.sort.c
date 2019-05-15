#include<stdio.h>

int main()
{
    int i,j,A[50],n,key;

    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &A[i]);
    printf("Unsorted array is: ");
    printf("\n");
    for(i=0; i<n; i++)
        printf("%3d", A[i]);

    for(j=1; j<n; j++)
    {
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]<key)
        {
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;

    }
    printf("\n");
    printf("Sorted array is");
    for(i=0; i<n; i++)

    {
        printf("%3d", A[i]);
    }
}

