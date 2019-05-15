#include<stdio.h>
#include<string.h>
int main()
{
    int t,i=1,count;
    char st[104];
    scanf("%d",&t);
    getchar();
    if(t<10000&&t>0)
    {
       while(t>=i){
            gets(st);
           // strupr(st);//this is not executable in c
            printf("Case %d: ",i);
            for (count = 0; st[count] != '\0'; ++count) {
            printf("%c",toupper(st[count]));
        }
          printf("\n");
            i++;
        }
    }

    return 0;
}

