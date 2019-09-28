/*
输入两个非负 10 进制整数 A 和 B (≤2
​30
​​ −1)，输出 A+B 的 D (1<D≤10)进制数。

输入格式：
输入在一行中依次给出 3 个整数 A、B 和 D。

输出格式：
输出 A+B 的 D 进制数。

输入样例：
123 456 8
输出样例：
1103
*/

/*
一个 P 进制数转换为 Q 进制，分为两步：
1）P 进制数转换为10进制数 y
2）10进制数转换为 Q 进制数 z
算法笔记 P93
*/

#include <cstdio>

int main(){
    int a,b,d;
    int z[40];
    scanf("%d%d%d", &a,&b,&d);
    int sum = a+b;
    int num=0;
    do
    {
        z[num++] = sum % d;
        sum = sum/d;
    } while (sum != 0);
    for (int i = num-1; i >=0; i--)
    {
        printf("%d", z[i]);
    }
    return 0;
}