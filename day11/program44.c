#include <stdio.h>
int factorial(int n){
int fact=1;
int i;
for(i=1;i<=n;i++){
fact=fact*i;}
return fact;
}
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);

    printf("factorial of %d= %d\n",x,factorial(x));
    return 0;
}