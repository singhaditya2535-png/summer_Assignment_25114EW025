#include <stdio.h>
int main(){
    int arr[100],i,n,temp,j=0;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;        }
    }
    printf("arry after moving zeroes to the end:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}