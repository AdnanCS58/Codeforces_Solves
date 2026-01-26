#include <stdio.h>
#include<string.h>
int main()
{
    char n[101],m[101];
    int a,b,i=0;
    scanf("%s %s",n,m);
    while(i<strlen(n))
    {
        if(n[i]==m[i])printf("0");
        else printf("1");
        i++;
    }
    printf("\n");
    return 0;
}
