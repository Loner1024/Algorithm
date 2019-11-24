#include <cstdio>
#include <cstring>

int main(){
    int l,n;
    while (scanf("%d %d", &l,&n) != EOF)
    {
    int Larray[l+1];
    memset(Larray,-1,sizeof(Larray));
    for (int i = 0; i < n; i++)
    {
        int start,end;
        scanf("%d %d",&start,&end);
        for (int j = start; j <= end; j++)
        {
            Larray[j] = 0;
        }
    }
    int count=0;
    for (int i = 0; i <= l; i++)
    {
        if (Larray[i] == -1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    }
    return 0;
}
// 上面的代码也过不了codeup，鬼知道！！！

// 下面的代码牛客网可以AC，codeup不行，且复杂度较高
// #include <cstdio>
// #include <cstring>

// int main(){
//     int l,n;
//     int Larray[10001];
//     while (scanf("%d %d",&l,&n) != EOF)
//     {
//         memset(Larray,-1,sizeof(Larray));
//         for (int i = 0; i <= l; i++)
//         {
//             Larray[i] = i;
//         }
        
//         for (int i = 0; i < n; i++)
//         {
//             int start,end;
//             scanf("%d %d",&start,&end);
//             for (int k = 0; k <= l; k++)
//             {
//                 for (int j = start; j <= end; j++)
//                 {
//                     if (Larray[k] == j)
//                     {
//                         Larray[k] = -1;
//                     }
//                 } 
//             } 
//         }
//         int count=0;
//         for (int i = 0; i <= l; i++)
//         {
//             if (Larray[i] != -1)
//             {
//                 count++;
//             }
//         }
//         printf("%d\n", count);
//     }
// }