#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y,n;
        scanf("%d %d %d",&x,&y,&n);
        int a=(n-y)/x;
        printf("%d\n",x*a+y);
    }
}