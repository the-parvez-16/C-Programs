#include <stdio.h>

int main(){

    int a,b,res;
    scanf("%d %d",&a,&b);
    res=a^b;
    if(res!=0 && (res&(res-1))==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}