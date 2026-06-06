#include <stdio.h>
int main(){
    int x,n,i,result=1;

    printf ("enter the base(x): ");
    scanf("%d",&x);

    printf("enter exponent (n): ");
    scanf("%d", & n);

    for(i=1;i<=n;i++){
        result=result*x;
    }
    printf("%d^%d= %d\n",x,n,result);
    return 0;

}