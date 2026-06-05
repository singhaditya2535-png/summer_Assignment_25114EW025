#include <stdio.h>
int main(){
    int n,i,j,sum;
    printf("enter the upper limit:");
    scanf("%d",&n);
    printf("prefect numbers between 1 and %d are:\n ",n);
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0)
        sum=sum+j;    }
        if(sum==i)
        printf("%d",i);
    }
    return 0;
}