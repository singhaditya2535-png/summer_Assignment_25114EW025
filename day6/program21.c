#include <stdio.h>
int main(){
    int n,rem,ans=0,contri=1;

    printf("Enterthe decimal number: ");
    scanf("%d",&n);

    while(n>0){
        rem=n%2;
        if(rem==1)
        ans=ans+contri;
        n=n/2;
        contri=contri*10;
    }
    printf("the decimal number into the binary form:%d",ans);
    return 0;
}