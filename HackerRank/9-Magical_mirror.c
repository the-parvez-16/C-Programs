#include <stdio.h>

int main() {

    int m,res=0;
    scanf("%d",&m);
    if(m%2==0 && m>10){
        res+=1;
    }
    if(m>15 && m%3==0){
        res+=2;
    }
    if(m%7==0){
        res+=4;
    }
    if(m>0){
        if(res==7){
            printf("The verdict for the number %d is: SUPERNATURAL",m);
        }
        else if(res==3 || res==6 ||res==5){
            printf("The verdict for the number %d is: MIRACULOUS",m);
        }
        else if(res==1 || res==2 || res==4){
            printf("The verdict for the number %d is: MAGICAL",m);
        }
        else{
            printf("The verdict for the number %d is: NORMAL",m);
        }
    }
    else{
        printf("The verdict for the number %d is: INVALID",m);
    }
    return 0;
}