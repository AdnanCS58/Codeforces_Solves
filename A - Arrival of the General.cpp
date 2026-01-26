#include <stdio.h>
int main()
{
    int arr[101],f=0,l=101,n,i,a=0,b=0,t=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(f<arr[i])
        {
            f=arr[i];
            a=i;
        }
        if(l>=arr[i])
        {
            l=arr[i];
            b=i;
        }
    }

    if(a>b)
    {
        t=(a-1)+(n-b)-1;
        printf("%d\n",t);
    }
    else
    {
        t=(a-1)+(n-b);
        printf("%d\n",t);
    }

    return 0;
}
