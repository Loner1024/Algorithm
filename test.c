#include <stdio.h>
int main()
{
    int a, b;         //用来读取两个数
    int sum = 0;      //用来存储乘法结果
    int *p = &sum;    //用来读取“特殊乘法”得到的结果
    int A[20], B[20]; //用来将数拆分存储
    while (scanf("%d %d", &a, &b) != EOF)
    { //持续输入
        for (int i = 0; i < 10; i++)
        { //该循环用来拆分存储第一个数
            A[i] = a % 10;
            a = a / 10;
        }
        for (int i = 0; i < 10; i++)
        { //该循环用来拆分存储第二个数
            B[i] = b % 10;
            b = b / 10;
        }
        for (int i = 0; i < 10; i++)
        { //该循环用来计算特殊乘法结果
            for (int j = 0; j < 10; j++)
            {
                *p = *p + (A[i] * B[j]);
            }
        }
        printf("%d\n", sum); //输出答案
        *p = 0;              //将存储清零
    }
    return 0;
}