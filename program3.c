#include <stdio.h>
int main(){
    int n,i;
    long long fac=1;
    printf("enter a number: ");
    scanf("%d",& n);
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("factorial of %d = %lld",n,fac);
    return 0;
}