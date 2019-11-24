/*
题目描述
The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest distance between any pair of exits.
输入
Each input file contains one test case. For each case, the first line contains an integer N (in [3, 105]), followed by N integer distances D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN is between the N-th and the 1st exits. All the numbers in a line are separated by a space. The second line gives a positive integer M (<=104), with M lines follow, each contains a pair of exit numbers, provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 107.
输出
For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.
样例输入
5 1 2 4 14 9
3
1 3
2 5
4 1
样例输出
3
10
7

*/

#include <cstdio>

int main()
{
    int n;
    int i = 1;
    int sum = 0;
    while (scanf("%d", &n) != EOF)
    {
        int d[n + 1];
        d[0] = 0;
        for (int k = 1; k <= n; k++)
        {
            int point;
            scanf("%d", &point);
            sum += point;
            d[k] = sum;
        }
        int j;
        scanf("%d", &j);
        for (int k = 0; k < j; k++)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            if (start > end)
            {
                int temp = start;
                start = end;
                end = temp;
            }
            int distant = d[end - 1] - d[start - 1];
            if (distant > sum - distant)
            {
                printf("%d\n", sum - distant);
            }
            else
            {
                printf("%d\n", distant);
            }
        }
        return 0;
    }
}