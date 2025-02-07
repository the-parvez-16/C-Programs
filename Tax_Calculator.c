#include <stdio.h>

int main() {
 
    float income,res=0;
    scanf("%f",&income);

    if(income>=0 && income<=250000){
        printf("%.2f",res);
    }
    else if(income>250000 && income<=500000){
        res=(income-250000)*0.05;
    }
    else if(income>500000 && income<=1000000){
        res = 250000 * 0.05;
        res+= ( income - 500000 ) * 0.20;
    }
    else if(income>1000000){
        res = 250000 * 0.05;
        res+= 500000 * 0.20;
        res+=(income-1000000) * 0.30;
    }
    else{
        printf("INVALID");
        return 0;
    }
    printf("%.2f",res);

}