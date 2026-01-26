#include <stdio.h>
int main()
{
    int n,i,count=0,arr[1001],j,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    j=arr[0];
    k=arr[0];
    for(i=1; i<n; i++)
    {
        if(j<arr[i])
        {
            j=arr[i];
            count++;
        }
        if(k>arr[i])
        {
            k=arr[i];
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
