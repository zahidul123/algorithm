#include<stdio.h>

int main()
{
    system("color f0");
    int a[100],i,n,first,mid,last,num;
    printf("Enter a  of number of student:");
    printf("\n");
    scanf("%d", &n);
    printf("ID number of these students");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("ID number of these students");
    for(i=0; i<n; i++)
    {
        printf("%7d", a[i]);
    }
    printf("\nEnter a ID number of a student that you want to search:");
    scanf("%d", &num);

    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last)
    {
        if(a[mid]==num)
        {
            printf("%d Student is present", num);
            break;
        }
        else if(a[mid]<num)
        {
            first=mid+1;
        }
        else
            last=mid-1;
        mid=(first+last)/2;
    }
    if(first>last)
        printf("%d student is nt present");

}
