#include <stdio.h>
int main(){
    int arr1[50],arr2[50],merged[100],n1,n2,i;

    printf("enter the number of the array: ");
    scanf("%d",&n1);
    printf("enter %d element: ",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the number of the array: ");
    scanf("%d",&n2);
    printf("enter %d element: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        merged[n2+i]=arr2[i];
    }
    printf("merged array: ");
    for(i=0;i<n1+n2;i++){
        printf("%d",merged[i]);
    }
     return 0;
}