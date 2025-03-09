#include <stdio.h>

int main() {

    int n,i,res;
    scanf("%d %d",&n,&i);
    res=(n>>i)&1;
    printf("%d",res);
    return 0;
}