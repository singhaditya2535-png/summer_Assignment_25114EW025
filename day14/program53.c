#include <stdio.h>
int main(){
    int n,i,j,arr[100],key,found=0;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(arr[i]==key){
            found=1;
            printf("element found at position %d.\n",i+1);
            break;
        }
    }
    if(!found){
        printf("element not found.\n");
    }
    return 0;
}