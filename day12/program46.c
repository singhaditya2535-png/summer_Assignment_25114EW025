#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int temp=n,rem,digits=0;
    int sum=0;
    while(temp!=0){
        digits++;
        temp=temp/10;
}
temp=n;
while(temp!=0){
    rem=temp%10;
    sum+=pow(rem,digits);
    temp/=10;
}
return(sum==n);
}
int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("%d is an armstrong number.\n",num);
    }
    else{
        printf("%d is not an armstrong number.\n",num);
    }
    return 0;
}