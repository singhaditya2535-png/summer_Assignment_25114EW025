#include <stdio.h>
#include <limits.h>
int main(){
    int arr[100],n,i;
    int largest=INT_MIN,secondlargest=INT_MIN;

    printf("enter the element of the array: ");
    scanf("%d",&n);
    printf("enter %d element:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if (arr[i]>secondlargest && arr[i]!=largest){
        secondlargest=arr[i];
    }
}
if(secondlargest==INT_MIN){
    printf("second largest element does not exist.\n");
}
else{
    printf("second largest element=%d\n",secondlargest);
}
    return 0;
}