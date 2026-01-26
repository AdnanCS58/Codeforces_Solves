#include<stdio.h>
#include<math.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    for(int l=0; l<t; l++)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n],sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        long long int x=sqrt(sum);
        if(x*x==sum)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

