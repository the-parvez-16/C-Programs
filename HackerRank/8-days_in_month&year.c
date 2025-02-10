#include <stdio.h>
#include <string.h>

int main() {

    int m,y;
    scanf("%d %d",&m,&y);
    if(m>=1 && m<=12 && y>0){
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            printf("31");
        }
        else if(m==2){
            if(y>0 && y%4==0){
                if(y%100==0 && y%400==0){
                    printf("29");
                }
                else if(y%100!=0 && y%400!=0){
                    printf("29");
                }
                else{
                    printf("28");
                }
            }
            else if(y>0){
                printf("28");
            }
        }
        else if(m==4 || m==6 || m==9 || m==11){
            printf("30");
        }
    }
    else if((m<1 || m>12 )&& y>0){
        printf("Invalid Month");
    }
    else if(y<=0 && m>=1 && m<=12){
        printf("Invalid Year");
    }
    else{
        printf("Invalid Month\nInvalid Year");
    }
    return 0;
}