#include <stdio.h>

int main() {
    int age , pa ,risk ;
    scanf("%d %d %d",&age ,&pa,&risk);
    if((age>50 && pa<75000 && risk!=3) || (age>50 && pa<=30000 && risk!=3) || (age>50 && risk!=3 && pa>75000)){
      printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if((age>=30 && age<=50 && pa<=75000 && risk==2) || (age>=30 && age<=50 && pa>75000 && risk!=3)){
      printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if((age<=30) || (age>=30 && age<=50 && pa>75000 && risk ==3) || (age>50 && risk==3 && pa>75000)){
      printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
  return 0;
}