#include <stdio.h>

int main() {
    int h,t,res=0,grade;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    if(h>50 && h<=500){
        res+=1;
    }
    if(c>=0.0 && c<0.7){
        res+=2;
    }
    if(t>5600 && t<=50000){
        res+=4;
    }
    if(res==7){
        grade=10;
        printf("The grade of the steel is: %d\n",grade);
        printf("All of the conditions met.");
    }
    else if(res==3){
        grade=9;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.");
    }
    else if(res==6){
        grade=8;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.");
    }
    else if(res==5){
        grade=7;
        printf("The grade of the steel is: %d\n",grade);
        printf("Two conditions met.");
    }
    else if(res==1 || res==2 || res==4){
        grade=6;
        printf("The grade of the steel is: %d\n",grade);
        printf("Only one condition met.");
    }
    else{
        grade=5;
        printf("The grade of the steel is: %d\n",grade);
        printf("None of the conditions met.");
    }
    return 0;
}