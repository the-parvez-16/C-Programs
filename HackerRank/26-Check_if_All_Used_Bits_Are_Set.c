#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    if(num==0){
        printf("No");
        return 0;
    }
    num=num&(num+1);
    if(num==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}