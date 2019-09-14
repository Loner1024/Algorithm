/*
题目描述
输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。

输入
测试数据有多组，输入n(1<=n<=200)，接着输入n个数，然后输入x。

输出
对于每组输入,请输出结果。

样例输入
4
1 2 3 4
3
样例输出
2
*/

#include <cstdio>

int main(){
    int a[201];
    int n, x;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        } 
        scanf("%d", &x);
        int k;
        for (k = 0; k < n; k++)
        {
            if (a[k] == x)
            {
                printf("%d\n", k);
                break;
            }
        }
        if (k == n)
        {
            printf("-1\n");
        } 
    }
    return 0;
}