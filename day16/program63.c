#include <stdio.h>
int main(){
    int arr[100],n,i,j,sum;
    printf("enter the numner of the array: ");
    scanf("%d",&n);
    printf("enter %d element:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the required sum: ");
    scanf("%d",&sum);
    printf("pairs with sum %d are:\n",sum);
    for(i=0;i<n-1;i++){
        for(j=i+j;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}