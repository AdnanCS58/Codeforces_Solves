#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int flag = 0;
    int counter = 0;

    for (int p = n + 1; p <= m; p++)
    {
        counter = 0;
        for (int i = 2; i <= (p / 2) + 1; i++)
        {
            if (p % i == 0)
            {
                counter++;
            }
        }
        if (counter == 0)
        {
            if (p == m)
            {
                printf("YES\n");
                flag = 1;
                break;
            }
            else
            {
                printf("NO\n");
                flag = 1;
                break;
            }
        }
    }

    if (!flag)
    {
        printf("NO\n");
    }

    return 0;
}
