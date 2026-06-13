#include <stdio.h>
int main(){
    int arr[100],n,i,larg,small;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element: ",n);
    for(i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    larg=small=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>larg)
        larg=arr[i];
        if(arr[i]<small)
        small=arr[i];
    }
    printf("largest element=%d\n",larg);
    printf("smallest element:%d\n",small);
    return 0;
}