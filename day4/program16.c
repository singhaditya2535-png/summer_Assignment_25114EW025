#include <stdio.h>
#include <math.h>
int main(){
    int n,original,result,rem,digit;
    printf("armstrong number between 1&500 are: ");
    for(n=0;n<=500;n++){
        n=original;
        digit=0;
        result=0;
    }
    int temp=original;
    while(n!=0){
        digit++;
        temp=temp/10;
    }
    temp=original;
    while(n!=0){
        rem=temp%10;
        result=result+pow(rem,digit);
        temp=temp/10;

    }
    if(result==original){
        printf("%d",original);
    }
    return 0;
}