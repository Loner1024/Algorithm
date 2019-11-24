#include <cstdio>
#include <cstring>

int main(){
    int da,db;
    char a[12],b[12];
    while (scanf("%s %d %s %d",a,&da,b,&db) != EOF)
    {
        scanf("%s %d %s %d",a,&da,b,&db);
        int cout1=1,cout2=1;
        int pa=0,pb=0;
        for (int i = 0; i < strlen(a); i++)
        {
            int temp = a[i]-'0';
            if (temp==da)
            {
                pa+=da*cout1;
                cout1*=10;
            }
        }
        for (int i = 0; i < strlen(b); i++)
        {
            if (b[i]-'0'==db)
            {
                pb+=db*cout2;
                cout2*=10;
            }
        }
        printf("%d\n",pa+pb);
    }
    return 0;
}