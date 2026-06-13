#include <stdio.h>
int main(){
    int arr[10],n,i,sum=0;
    float average;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    average=(float)sum/n;
    printf("sum=%d\n",sum);
    printf("average=%.2f\n",average);
    return 0;

}