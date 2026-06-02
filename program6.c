#include <stdio.h>
int main(){
    int n,result=0,remender;

    printf("enter the digits: ");
    scanf("%d",&n);

    while(n!=0){
        remender = n % 10;
        result = result * 10 + remender;
        n = n / 10;
    }
     printf("the reverse of the digits is %d",result);
     return 0;
}