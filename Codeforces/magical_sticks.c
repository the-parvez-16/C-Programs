#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        if(n&1) n=n/2+1;
        else n/=2;
        printf("%d\n",n);
    }
}