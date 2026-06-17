#include <stdio.h>
int main(){
    int arr1[50],arr2[50],unionarr[100];
    int n1,n2,i,j,k=0,found;
    printf("enter the number of first array: ");
    scanf("%d",&n1);
    printf("enter %d element: ",n1);
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
        unionarr[k++]=arr1[i];
    }
    printf("enter the number of second arrays: ");
    scanf("%d",&n2);
    printf("enter %d element: ",n2);
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
        found=0;
        for(j=0;j<k;j++){
            if(arr2[i]==unionarr[j]){
                found=1;
                break;
            }
        }
        if(!found){
            unionarr[k++]=arr2[i];
        }
    }
    printf("union of the array: ");
    for(i=0;i<k;i++){
        printf("%d",unionarr[i]);
    }
    return 0;
}