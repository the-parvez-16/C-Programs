#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x%y==0 && x%z==0){
        printf("X defeats all!");
    }
    else if(x%y==0){
        printf("Y triumphs over X!");
    }
    else if(x%z==0){
        printf("Z outsmarts X!");
    }
    else{
        printf("X remains undefeated!");
    }
    return 0;
}