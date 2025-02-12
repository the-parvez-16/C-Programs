#include <stdio.h>

int main() {

    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;
    int w1,w2,w3,w4,w5,w6;
    scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n0);
    scanf("%d %d %d %d %d %d",&w1,&w2,&w3,&w4,&w5,&w6);
    if(w1==0){
        n1+=w2;
        n1%=10;

    }
    else if(w1==1){
        n2+=w2;
        n2%=10;
    }
    else if(w1==2){
        n3+=w2;
        n3%=10;
    }
    else if(w1==3){
        n4+=w2;
        n4%=10;
    }
    else if(w1==4){
        n5+=w2;
        n5%=10;
    }
    else if(w1==5){
        n6+=w2;
        n6%=10;
    }
    else if(w1==6){
        n7+=w2;
        n7%=10;
    }
    else if(w1==7){
        n8+=w2;
        n8%=10;
    }
    else if(w1==8){
        n9+=w2;
        n9%=10;
    }
    else if(w1==9){
        n0+=w2;
        n0%=10;
    }
    
    if(w3==0){
        n1+=w4;
        n1%=10;
    }
    else if(w3==1){
        n2+=w4;
        n2%=10;
    }
    else if(w3==2){
        n3+=w4;
        n3%=10;
    }
    else if(w3==3){
        n4+=w4;
        n4%=10;
    }
    else if(w3==4){
        n5+=w4;
        n5%=10;
    }
    else if(w3==5){
        n6+=w4;
        n6%=10;
    }
    else if(w3==6){
        n7+=w4;
        n7%=10;
    }
    else if(w3==7){
        n8+=w4;
        n8%=10;
    }
    else if(w3==8){
        n9+=w4;
        n9%=10;
    }
    else if(w3==9){
        n0+=w4;
        n0%=10;
    }
    
    if(w5==0){
        n1+=w6;
        n1%=10;
    }
    else if(w5==1){
        n2+=w6;
        n2%=10;
    }
    else if(w5==2){
        n3+=w6;
        n3%=10;
    }
    else if(w5==3){
        n4+=w6;
        n4%=10;
    }
    else if(w5==4){
        n5+=w6;
        n5%=10;
    }
    else if(w5==5){
        n6+=w6;
        n6%=10;
    }
    else if(w5==6){
        n7+=w6;
        n7%=10;
    }
    else if(w5==7){
        n8+=w6;
        n8%=10;
    }
    else if(w5==8){
        n9+=w6;
        n9%=10;
    }
    else if(w5==9){
        n0+=w6;
        n0%=10;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9,n0);
    return 0;
}