#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);
    if((a&(a-1))==0 && a!=0)
        printf("Yes");
    else
        printf("No");
    return 0;
}