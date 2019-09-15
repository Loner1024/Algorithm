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
int month[13][2] = {
	{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
};

bool isLeap(int year){
    return (year%4==0 && year%100!=0) || (year%400==0);
}

int main(){
    int begin, year1, month1, day1;
    int end, year2, month2, day2;
    while (scanf("%d%d", &begin, &end) != EOF)
    {
        if (begin>end)
        {
            int temp=begin;
            begin = end;
            end = temp;
        }
        year1=begin/10000, month1 = begin%10000/100, day1 = begin%100;
        year2=end/10000, month2 = end%10000/100, day2 = end%100;
        int ans=1;
    while (year1<year2 || month1<month2 || day1<day2)
    {
        day1++;
        if (day1==month[month1][isLeap(year1)]+1)
        {
            month1++;
            day1 = 1;
        }
        if (month1==13)
        {
            year1++;
            month1 = 1;
        }
        ans++;
    }
    printf("%d\n", ans);
    }
    return 0;
}