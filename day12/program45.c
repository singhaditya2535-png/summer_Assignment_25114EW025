#include <stdio.h>
int palindrome(int n){
    int original=n,reverse=0,remainder;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(original==reverse){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(palindrome(n)){
        printf("%d is a palindrome number.\n",n);
    }
    else{
        printf("%d is not a palindrome number.\n",n);
    }
    return 0;
}