#include <stdio.h>
int main(){
   int n,i,arr[100],key,count=0;

   printf("enter the element of the array: ");
   scanf("%d",&n);

   printf("enter %d element: ",n);
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   printf("enter the element to find the frequency: ");
   scanf("%d",& key);
   for(i=0;i<n;i++){
    if(arr[i]==key){
        count++;
    }
   }
   printf("frequency of %d=%d\n",key,count);
   return 0;
}