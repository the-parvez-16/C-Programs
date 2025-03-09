#include<stdio.h>

int main(){
    int t,count=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        char ch,a=a;
        scanf(" %c",&ch);
        if(ch==a)
            count++;
        else if(ch!=a)
            a=ch;
    }
    printf("%d",count);
}