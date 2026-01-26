#include <stdio.h>
int main()
{
    int n,i,x,y,a=0,b=0,c=0,d=0,t=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x==1)a++;
        if(x==0)b++;
        if(y==1)c++;
        if(y==0)d++;
    }
    if(a<=b)
    {
        if(c<=d)t=c+a;
        else if(d<c)t=d+a;
    }
    else if(b<a)
    {
        if(c<=d)t=c+b;
        else if(d<c)t=d+b;
    }
    printf("%d\n",t);

    return 0;
}
