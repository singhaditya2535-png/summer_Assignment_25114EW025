#include <stdio.h>
int main(){
int arr[100],n,i,j;
int maxfreq=0,element;
printf("enter the number of the array: ");
scanf("%d",&n);
printf("enter %d element: ",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    int count=1;
    for(j=1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count>maxfreq){
        maxfreq=count;
        element=arr[i];
    }
}
printf("element with maximum frequency=%d\n",element);
printf("frequency=%d\n",maxfreq);
return 0;
}