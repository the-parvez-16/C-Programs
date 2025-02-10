#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);
    if(a<90 || (a%360<90 && a%360>0)){
        printf("Acute Angle");
    }
    else if(a==90 || a%360==90){
        printf("Right Angle");
    }
    else if(a<180 || (a%360<180 && a%360>90)){
        printf("Obtuse Angle");
    }
    else if(a==180 || a%360==180){
        printf("Straight Angle");
    }
    else if(a<360 || (a%360<360 && a%360>180)){
        printf("Reflex Angle");
    }
    else{
        printf("Full Rotation");
    }
    return 0;
}
