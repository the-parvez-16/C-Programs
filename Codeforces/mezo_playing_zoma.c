#include<stdio.h>
#include<math.h>
int main(){
    int n,cr=0,cl=0;
    scanf("%d",&n);
    while(n--){
        char s;
        scanf("%c ",&s);
        if(s=='L') cl++;
        else cr++;
    }
    printf("%d\n",cr+cl+1);
}