#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,k,p;
        scanf("%d %d %d",&n,&k,&p);
        if(k<0) k=-k;
        if(n*p<k){
            printf("-1\n");
            continue;
        }
        else if(k==0){
            printf("0\n");
            continue;
        }
        int a[n],sum=0,count=0;
        for(int i=0;i<n;i++){
            a[i]=p;
            sum+=a[i];
            count++;
            if(sum>=k){
                printf("%d\n",count);
                break;
            }
        }
    }
}