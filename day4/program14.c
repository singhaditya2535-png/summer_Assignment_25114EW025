#include <stdio.h>
int main(){
    int n,i;
    long long term1=0,term2=1,nextterm;

    printf("enter the value of n: ");
    scanf("%d",&n);
    
    if (n==0){
        printf("the 0th fibnoacci term is %lld", term1);
    }
    else if(n==1){
        printf("the 1st fibnoacci term is %lld", term2);
    }
    else{
        for(i=2;i<=n;i++){
            nextterm=term1+term2;
            term1=term2;
            term2=nextterm;
        }
        printf("the %dth fibonacci term is %lld",n,term2);
    }
    return 0;
}
