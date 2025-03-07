#include <stdio.h>

int main(){int t;scanf("%d",&t);for(int i=1;i<=t;i++){int a,flag=1;scanf("%d",&a);for(int i=3;i<=a;i+=2){if(a%i==0){printf("Yes\n");flag=0;break;}}if(flag)printf("No\n");}}


// #2
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long a;
        scanf("%lld",&a);
        if((a&(a-1))==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}