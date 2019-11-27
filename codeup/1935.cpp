#include <cstdio>
#include <cstring>
// 牛客能过，codeup过不了


struct stuinfo
{
    char id[10];
    char name[20];
    char gender[10];
    int age;
} stu[1001];

int main()
{
    int n, m;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%s %s %s %d", stu[i].id, stu[i].name, stu[i].gender, &stu[i].age);
        }
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            char temp[10];
            scanf("%s", temp);
            for (int k = 0; k <= n; k++)
            {
                // 使用 strcmp，若字符串相同，则返回 0
                // 无法 == 直接比较
                if (strcmp(stu[k].id, temp) == 0)
                {
                    printf("%s %s %s %d\n", stu[k].id, stu[k].name, stu[k].gender, stu[k].age);
                    break;
                }
                else if (k == n)
                {
                    printf("No Answer!\n");
                }
            }
        }
    }
}
