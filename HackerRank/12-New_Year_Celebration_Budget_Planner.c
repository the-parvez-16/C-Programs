#include <stdio.h>

int main() {

    int bu,ng,fc,dc,mc,ee;
    scanf("%d %d %d %d %d %d",&bu,&ng,&fc,&dc,&mc,&ee);
    int totalC = (ng*fc) + dc + mc + ee;
    int tfc = ng*fc;
    if(totalC<=bu && ng>5 && ng<=50){
        if(dc<bu*0.3 || tfc<bu*0.5){
            if(ng>25 && mc>0){
              printf("Celebration Approved"); 
            }
            else if(ng<=25){
                printf("Celebration Approved");
            }
            else if(ng>25 && mc<1){
                printf("Celebration Denied");
            }
        }
        else {
            printf("Celebration Denied");
        }
    }
    else{
        printf("Celebration Denied");
    }
    return 0;
}