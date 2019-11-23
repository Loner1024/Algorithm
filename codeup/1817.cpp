/*
题目描述
给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。
现在请计算A+B的结果，并以正常形式输出。

输入
输入包含多组数据数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。

输出
请计算A+B的结果，并以正常形式输出，每组数据占一行。

样例输入
-234,567,890 123,456,789
1,234 2,345,678
样例输出
-111111101
2346912

*/

#include <cstdio>
#include <cstring>

int main(){
    char a[12],b[12];
    while (scanf("%s %s", a,b) != EOF)
    {
        int ans1=0;
        int mult1=1;
        for (int i = strlen(a)-1; i >= 0; i--)
        {
            if (a[i] == ',')
            {
                continue;
            }
            else if (a[i] == '-')
            {
                ans1*=-1;
                break;
            }
            ans1+=(a[i]-'0')*mult1;
            mult1*=10;
        }
        int ans2=0;
        int mult2=1;
        for (int i = strlen(b)-1; i >= 0; i--)
        {
            if (b[i] == ',')
            {
                continue;
            }
            else if (b[i] == '-')
            {
                ans2*=-1;
                break;
            }
            ans2+=(b[i]-'0')*mult2;
            mult2*=10;
        }
        printf("%d\n", ans1+ans2);
    }
}
