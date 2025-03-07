#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        int diff=abs(b-a);
        printf("%d\n",diff/5+(diff%5)/2+(diff%5)%2);
    }
}