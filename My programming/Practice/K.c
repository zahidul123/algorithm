#include<stdio.h>
int main()
{
    int A;
    double F;
    scanf("%d",&A);
    F=((1.8*A)+32);
    if(F>98.4)
    {
        printf("Fever\n");
    }
    else
    {
        printf("Not fever\n");
    }
    return 0;
}
