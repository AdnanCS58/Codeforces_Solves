#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    float s,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    s=sum/n;
    printf("%.4f\n",s);
    return 0;
}
