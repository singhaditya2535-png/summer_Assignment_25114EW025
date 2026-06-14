#include <stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("dupicate element are:\n");
    for(i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
            break;
        }
    }
    }
return 0;
}