#include <cstdio>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n==0)
        {
            break;
        }
        int score[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &score[i]);
        }
        int give_score;
        int count = 0;
        scanf("%d", &give_score);
        for (int i = 0; i < n; i++)
        {
            if (give_score == score[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}