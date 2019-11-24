#include <cstdio>

int main(){
    int n;
    int odd=0,even=0;
    while (scanf("%d",&n) != EOF)
    {
        int odd=0,even=0;
        for (int i = 0; i < n; i++)
        {
            int num;
            scanf("%d",&num);
            if (num%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even>odd)
        {
            printf("%s\n","NO");
        }
        else
        {
            printf("%s\n", "YES");
        }
    }
    return 0;
}