#include <cstdio>

struct stuInfo
{
    char id[10];
    char name[100];
    char gender[10];
    int age;
} stu[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %s %d", stu[i].id, stu[i].name, stu[i].gender, &stu[3].age);
    }
    int m;
    scanf("%d",&m);
    //printf("m:%d\n",m);
    // for (int i = 0; i < m; i++)
    // {
    //     printf("i:%d\n",i);
    //     char temp[30];
    //     scanf("%s",temp);
    //     printf("temp:%s\n",temp);

    // }
    for (int k=0; k < m; k++)
    {
        char temp[30];
        scanf("%s",temp);
        for (int j = 0; j < n; j++)
        {
            printf("%d:%c\n",j,*stu[j].id);
            if (*temp == *stu[j].id)
            {
                printf("%s\n",stu[j].id);
                break;
            }
            else
            {
                printf("%s","No Answer!");
            }
        }
    }
}