#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int arrary[101];
    while (scanf("%d",&n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arrary[i]);
        }
        sort(&arrary[0],&arrary[n]);
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arrary[i]);
        }
        printf("\n");
    }
}
