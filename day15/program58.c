#include <stdio.h>
int main(){
    int arr[100],n,i,temp;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    printf("Array after left rotation:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}