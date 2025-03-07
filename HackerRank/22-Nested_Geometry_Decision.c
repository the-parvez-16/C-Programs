#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int s1,s2,s3,s4,a1,a2,a3,a4;
    
    if(n==0){
        printf("Circle");
    }
    
    else if(n==3){
        scanf("%d %d %d",&s1,&s2,&s3);
        scanf("%d %d %d",&a1,&a2,&a3);
        
        if(a1>=1 && a2>=1 && a3>=1 && s1>=1 && s2>=1 && s3>=1 && a1+a2+a3==180 && s1+s2>s3 && s2+s3>s1 && s3+s1>s2){
            if(s1==s2 && s2==s3 && a1==60 && a2==a1 && a2==a3){
                printf("Equilateral Triangle");
            }
            else if((s1==s2 && s2!=s3 && a1==a2 && a2!=a3) || (s1==s3 && s3!=s2 && a1==a3 && a3!=a2) || (s2==s3 && s3!=s1 && a2==a3 && a3!=a1)){
                printf("Isosceles Triangle");
            }
            else if(s1!=s2 && s2!=s3 && s3!=s1 && a1!=a2 && a2!=a3 && a3!=a1){
                printf("Scalene Triangle");
            }
            else{
               printf("Invalid Figure");
            }
        }
        else{
            printf("Invalid Figure");
        }
    }
    
    else if(n==4){
        scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
        scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
        if(a1>=1 && a2>=1 && a3>=1 && a4>=1 && s1>=1 && s2>=1 && s3>=1 && s4>=1 && a1+a2+a3+a4==360 && s1+s2+s3>s4 && s2+s3+s4>s1 && s3+s4+s1>s2 && s4+s1+s2>s3){
            if(s1==s2 && s2==s3 && s3==s4 && a1==90 && a2==a1 && a3==a2 && a4==a3){
                printf("Square");
            }
            else if(s1==s3 && s2==s4 && a1==90 && a2==a1 && a3==a2 && a4==a3){
                printf("Rectangle");
            }
            else if(s1==s2 && s2==s3 && s3==s4 && a1==a3 && a2==a4){
                printf("Rhombus");
            }
            else if(s1==s3 && s2==s4 && s1!=s2 && s3!=s4 && a1!=a2 && a3!=a4 && a3==a1 && a4==a2){
                printf("Parallelogram");
            }
            else{
                printf("Invalid Figure");
            }
        }
        else{
            printf("Invalid Figure");
        }
    }
    else{
        printf("Invalid Figure");
    }
    return 0;
}