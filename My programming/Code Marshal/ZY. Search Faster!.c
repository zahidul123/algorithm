
#include<stdio.h>

void quicksort(int [10],int,int);

int main()
{
    int x[20],size,i,pl,gm;

    printf("Enter size of the array: ");
    scanf("%d",&size);

    printf("Enter %d elements: ",size);
    for(i=0; i<size; i++)
        scanf("%d",&x[i]);

    quicksort(x,0,size-1);

    printf("Sorted elements: ");
    for(i=0; i<size; i++)
        printf(" %d",x[i]);

    printf("\nenter the number that you want to search\n");
    scanf("%d",&pl);
    int f=0,l=size,mid,p=0;
    while(f<l){
        mid=(f+l)/2;
        if(x[mid]==pl){
            p=1;
            break;
        }else if(x[mid]>pl){
            l=mid-1;
        }else{
            f=mid+1;
        }
    }
    if(p==1){
        printf("the number is found\n");
    }
    else{
        printf("the  number is not  found\n");
    }
    return 0;
}

void quicksort(int x[20],int first,int last)
{
    int pivot,j,temp,i;

    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(x[i]<=x[pivot]&&i<last)
                i++;
            while(x[j]>x[pivot])
                j--;
            if(i<j)
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }

        temp=x[pivot];
        x[pivot]=x[j];
        x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);

    }
}
