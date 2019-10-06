// 未考虑末尾为 0 的情况， 2019-10-06

#include <cstdio>

int main(){
    int a=12346789;
    int b[32]={0};
    int num = 0;
    int i=0;
    // scanf("%d",&a);
    while (a != 0)
    {
        b[num++] = a%10;
        a = a/10;
    }
    while (b[i] != 0)
    {
        printf("%d", b[i]);
        i++;
    }
    printf("\n");
}