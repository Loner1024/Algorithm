#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int arrary[1001];
    while (scanf("%d",&n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arrary[i]);
        }
        sort(&arrary[0],&arrary[n]);
        printf("%d\n",arrary[n-1]);
        if (n == 1)
        {
            printf("%d\n",-1);
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                printf("%d ",arrary[i]);
            }
        }
    }
}
