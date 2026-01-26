#include <stdio.h>
int main()
{
    int n,i,arr,prr,k=0,j=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&arr,&prr);
        k=prr-arr+k;
        if(k>j)j=k;
    }

    printf("%d\n",j);

    return 0;
}
