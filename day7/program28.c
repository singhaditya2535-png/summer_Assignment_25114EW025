#include <stdio.h>

int reverse=0;
int reversenumber(int n){
    if(n==0)
    return reverse;
    else
    reverse=reverse*10+(n%10);
    return reversenumber(n/10);
}
int main(){
    int n;

printf("enter a number: ");
scanf("%d",&n);

printf("reveraed number=%d",reversenumber(n));
return 0;
}