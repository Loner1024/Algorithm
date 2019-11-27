#include <cstdio>

int main()
{
    int n, m;
    int a[101];
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        int b;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &b);
            for (int j = 0; j <= n; j++)
            {
                if (b == a[j])
                {
                    printf("YES\n");
                    break;
                }
                else if (j == n)
                {
                    printf("NO\n");
                }
            }
        }
    }
}