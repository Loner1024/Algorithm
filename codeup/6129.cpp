#include <cstdio>
// 牛客能过，codeup 不过， PAT 最后一条测试过不了
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a[n];
        int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
        int a2_ctrl = 1; // 用于控制 a2 的交错求和
        int a4_ctrl = 0; // 用于 a4 求平均
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 5 == 0 && a[i] % 2 == 0)
            {
                a1 += a[i];
            }
            if (a[i] % 5 == 1)
            {
                a2 += a2_ctrl * a[i];
                a2_ctrl *= -1;
            }
            if (a[i] % 5 == 2)
            {
                a3 += 1;
            }
            if (a[i] % 5 == 3)
            {
                a4 += a[i]; // 先求和，输出再平均
                a4_ctrl += 1;
            }
            if (a[i] % 5 == 4)
            {
                if (a[i] > a5)
                {
                    a5 = a[i];
                }
            }
        }
        if (a1 == 0)
        {
            printf("%s ", "N");
        }
        else
        {
            printf("%d ", a1);
        }
        if (a2 == 0)
        {
            printf("%s ", "N");
        }
        else
        {
            printf("%d ", a2);
        }
        if (a3 == 0)
        {
            printf("%s ", "N");
        }
        else
        {
            printf("%d ", a3);
        }
        if (a4 == 0)
        {
            printf("%s ", "N");
        }
        else
        {
            printf("%.1f ", (float)a4 / a4_ctrl);
        }
        if (a5 == 0)
        {
            printf("%s\n", "N");
        }
        else
        {
            printf("%d\n", a5);
        }
    }
}