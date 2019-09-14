#include <stdio.h>

int main() {
    int a[] = {1,1,1,2,2,2,2,3,3,4,4,4};
    int eor = 0;
    for (int i = 0; i < sizeof(a); i++)
    {
        eor = eor ^ a[i];
    }
    printf("%d\n", eor);
    printf("%d\n", sizeof(a[]));
}