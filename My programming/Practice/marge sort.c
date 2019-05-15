#include<stdio.h>

void mergesort(int a[],int k)
{
    int n,mid,i;
    for(i=0; i<k; i++)
    {
        printf("\n");
    }
    n=k;
    if(n<2)
        return 0;

    mid=n/2;
    int left[mid];
    int right[n-mid];
    for(i=0; i<=mid-1; i++)
    {
        left[i]=a[i];
    }
    for(i=mid; i<=n-1; i++)
    {
        right[i-mid]=a[i];
    }
    mergesort(left,mid);
    mergesort(right,n-mid);
    merge(a,mid,n-mid,left,right);
}
void merge(int a[],int mid,int n,int left[],int right[])
{
    int nL,rL,i,j,k,p;
    for(p=0; p<mid; p++)
    {
        printf("%3d", right[p]);
    }
    for(p=mid; p<n; p++)
    {
        printf("%3d", right[p]);
    }
    nL=mid;
    rL=n;
    i=j=k=0;
    printf("\nMembers are serially in younger to elder ");
    while(i<nL && j<rL)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else{
            a[k]=right[j];
            j++;
        }
        printf("\n%3d", a[k]);
        k++;
    }

while(i<nL)
{
    a[k]=left[i];
    printf("\n%3d", a[k]);
    i++;
    k++;
}
while(j<rL)
{
    a[k]=right[j];
    printf("\n%3d", a[k]);
    j++;
    k++;
}

}

int main()
{
    int a[100],i,k;
    printf("Length of the family ");
    scanf("%d", &k);
    printf("\n");
    printf("Ages of the family members");
    for(i=0; i<k; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("\nfamily members age inserted as user");
    mergesort(a,k);
}
