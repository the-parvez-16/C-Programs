#include<stdio.h>

int main(){
    int t,sx=0,sy=0,sz=0;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++){
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        sx+=x;sy+=y;sz+=z;
    }
    
    if(sx==0 && sy==0 && sz==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}