#include <stdio.h>

int main() {

    float unit,bill=0;
    scanf("%f",&unit);
    
    if(unit>=0 && unit<=100){
        bill=unit*5;
        if(bill<=1200)
            bill*=0.1;
        bill=(unit*5)-bill;
    }else if(unit>100 && unit<=300){
        bill=500+(unit-100)*7;
        if(unit<=200){
            if(bill<=1200)
                bill*=0.1;
            bill=500+((unit-100)*7)-bill;
        }
    }else if(unit>300)
        bill=1900+(unit-300)*10;
    else{
        printf("Invalid Input!");
        return 0;
    }
    printf("The electricity bill is: %.2f.",bill);
    return 0;
}