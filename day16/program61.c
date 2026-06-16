#include <stdio.h>
int main(){
    int n,i,sum=0,expectedsum,missing;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter %d element: ",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
     expectedsum=n*(n+1)/2;
     missing=expectedsum-sum;
     printf("Missing element=%d\n",missing);
     return 0;
}