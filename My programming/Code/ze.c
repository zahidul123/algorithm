#include <stdio.h>
int main()
{
    int a,i,j, total, word;
    char string[40],c;
    scanf("%d",&a);
    for (i=0; i<=a; i++){
            j = total= 0;
        scanf("%[^\n]",string);
        while((c = tolower (string [j++])) !='\0'){
            if(c> 'a' && c<'z')
            ++total;
            else
                (c == ' ');
            word++

        }
    }
    printf("total: %d", total);
}
