#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct stu
{
    char id[20];
    int score;
    int location_number;
    int local_rank;
} stuinfo[30010];

bool cmp(stu student1, stu student2)
{
    if (student1.score != student2.score)
    {
        return student1.score > student2.score;
    }
    else
    {
        return strcmp(student1.id,student2.id) <0;
    }
}

int main()
{
    int n, m;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%s %d", stuinfo[count].id, &stuinfo[count].score);
            stuinfo[count].location_number = i + 1;
            count++;
        }
        sort(stuinfo + count - m, stuinfo + count, cmp); // 组内排名     
        int localRank = 1;
        int localLastRank;
        for (int k = count - m; k < count; k++)
        {
            if (k > 0 && stuinfo[k].score == stuinfo[k - 1].score)
            {
                stuinfo[k].local_rank = localLastRank;
            }
            else
            {
                stuinfo[k].local_rank = localRank;
                localLastRank = localRank;
            }
            localRank++;
        }
    }
    sort(stuinfo, stuinfo + count, cmp);
    printf("%d\n",count);
    int r =1;
    for (int i = 0; i < count; i++)
    {
        if (i>0 && stuinfo[i].score != stuinfo[i-1].score)
        {
            r = i+1;
        }
        printf("%s %d %d %d\n", stuinfo[i].id, r, stuinfo[i].location_number, stuinfo[i].local_rank);
    }
}