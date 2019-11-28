#include <cstdio>

int main(){
    int n,m;
    int local;
    int a[101];
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    if (m<n)
    {
        local = n-m;
    }
    else if(n==m)
    {
        local = n;
    }
    else
    {
        m = m%n;
        local = n-m;
    }
    for (int i = local; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    for (int i = 0; i < local; i++)
    {
        if (local == i+1)
        {
            printf("%d",a[i]);
            break;
        }
        printf("%d ",a[i]);
    } 
}