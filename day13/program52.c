#include <stdio.h>
int main(){
    int arr[100],n,i;
    int even=0,odd=0;
    printf("enter the number of the array: ");
    scanf("%d",&n);
    printf("enter %d element:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("number of even element=%d\n",even);
    printf("number of odd elemerts=%d\n",odd);
    return 0;
}