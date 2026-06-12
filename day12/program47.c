#include <stdio.h>
void fibonacci(int n){
    int a=0,b=1,c,i;

for(i=1;i<=n;i++){
    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
   }
}
int main(){
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    printf("fibonacci series:\n");
    fibonacci(n);
    return 0;
}