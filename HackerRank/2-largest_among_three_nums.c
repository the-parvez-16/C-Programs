#include <stdio.h>

int main() {
int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) d=a;
    else if(b>c && b>a) d=b;
    else if(c>a && c>b) d=c;
    printf("The largest number is : %d",d);    
    return 0;
}