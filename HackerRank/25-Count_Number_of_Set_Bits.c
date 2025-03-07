#include <stdio.h>

int main() {

    int n,nsb=0;
    scanf("%d",&n);
    nsb+=n&1;
    nsb+=(n>>1)&1;
    nsb+=(n>>2)&1;
    nsb+=(n>>3)&1;
    printf("%d",nsb);
    return 0;
}