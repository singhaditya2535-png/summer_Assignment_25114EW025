#include <stdio.h>
int main(){
    int n,rem,ans=0,contri=1;

    printf("Enter the binary number: ");
    scanf("%d",& n);

    while(n>0){
        rem=n%10;
        if(rem==1)
            ans=ans+contri;
            n=n/10;
            contri=contri*2;
    }
    printf("the binary number into decimal form in:%d ",ans);
    return 0;
}