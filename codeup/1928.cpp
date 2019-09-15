/*
题目描述
有两个日期，求两个日期之间的天数，如果两个日期是连续的我们规定他们之间的天数为两天。

输入
有多组数据，每组数据有两行，分别表示两个日期，形式为YYYYMMDD

输出
每组数据输出一行，即日期差值

样例输入
20130101
20130105
样例输出
5
*/

#include <cstdio>

int begin, end;
int month[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31}, {0,31,29,31,30,31,30,31,31,30,31,30,31}};

bool isLeap(int year){
    if (year%4==0)
    {
        return 1;
    }
    return 0;
}

int diff(){
    int year1=begin/10000, month1 = begin%10000/100, day1 = begin%10000%100;
    int year2=end/10000, month2 = end%10000/100, day2 = end%10000%100;
    int ans=1;
    while (year1<year2 || month1<month2 || day1<day2)
    {
        day1++;
        if (day1==month[isLeap(year1)][month1])
        {
            month1++;
        }
        else if (month1==12)
        {
            year1++;
        }
        ans++;
    }
    return ans;
}

int main(){
    while (scanf("%d%d", &begin, &end) != EOF)
    {
        scanf("%d%d", &begin, &end);
        if (begin>end)
        {
            int temp;
            temp = begin;
            begin = end;
            end = temp;
        }
        printf("%d\n", diff());
    }
    return 0;
}