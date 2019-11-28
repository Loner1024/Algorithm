#include <cstdio>

int main()
{
    int n;
    int fail_a = 0, fail_b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a1, a2, b1, b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        int ans = a1 + b1;
        if (a2 == ans && b2 == ans)
        {
            continue;
        }
        else if (a2 == ans)
        {
            fail_b++;
        }
        else if (b2 == ans)
        {

            fail_a++;
        }
    }
    printf("%d %d\n",fail_a,fail_b);
}