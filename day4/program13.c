#include <stdio.h>
int main(){
    int term1=0,term2=1,nextterm,n,i;
    printf("enter the number of terms: ");
    scanf("%d",&n);
     printf("fibonacci series: ");
     for(i=0;i<n;i++){
        printf("%d",term1);
        nextterm=term1+term2;
        term1=term2;
        term2=nextterm;
     }
     return 0;
}
