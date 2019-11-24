/*
题目描述
写个算法，对2个小于1000000000的输入，求结果。特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
输入
 两个小于1000000000的数

输出
 输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。

样例输入
24 65
42 66666
3 67
样例输出
66
180
39
*/
#include <cstdio>
 
 
void SplitNum(int a,int *p){
    int c=10;
    int temp = 0;
    int i=a;
    do
    {
        //i = i/10;
        *p = a%10;
        a=a/10;
        p++;
        //c*=10;
    } while (a != 0);
}
 
int main(){
    int a,b;
    int mult1[12]={0},mult2[12]={0};
    int ans=0;
    int *p1=mult1;
    int *p2=mult2;
    while (scanf("%d %d", &a,&b) != EOF)
    {
        SplitNum(a,p1);
        SplitNum(b,p2);
        for (int i = 0; i < sizeof(mult1)/sizeof(int); i++)
        {
            for (int k = 0; k < sizeof(mult2)/sizeof(int); k++)
            {
                ans += mult1[i]*mult2[k];
            }
        }
        printf("%d",ans);
    }
}

// 以上代码，牛客可以AC，codeup不行