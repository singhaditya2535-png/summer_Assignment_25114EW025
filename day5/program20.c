#include <stdio.h>
int main(){
    int n,largestprimefactor=1;

    printf("enter a number: ");
    scanf("%d",&n);

    while(n%2==0){
        largestprimefactor=2;
        n/=2;
    }
    for(int i=3;i*i<=n;i*=2){
        while(n%i==0){
            largestprimefactor=i;
            n/=i;
        }
    }
    if(n>2){
        largestprimefactor=n;
    }
    printf("larest primr factor=%d\n",largestprimefactor);
    return 0;
}