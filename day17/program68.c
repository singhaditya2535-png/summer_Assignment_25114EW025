#include <stdio.h>
int main(){
    int arr1[50],arr2[50];
    int n1,n2,i,j;

    printf("enter the number of the first array: ");
    scanf("%d",&n1);
    printf("enter %d element: ",n1);
    for(i=0;i<n1;i++){
      scanf("%d",&arr1[i]);
    }

    printf("enter the number of the second array: ");
    scanf("%d",&n2);
    printf("enter %d element: ",n2);
    for(i=0;i<n2;i++){
     scanf("%d",&arr2[i]);
    }
     printf("common element are: ");
     for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d",arr1[i]);
                break;
            }
        }
     }
     return 0;
}