#include <stdio.h>
int main(){
    int n,sum=0,remender;

    printf("enter a digits: ");
    scanf("%d",& n);
    while(n!=0){
        remender=n%10;
        sum=sum+remender;
        n/=10;
    }
    printf("the sum of the digits is %d",sum);
}