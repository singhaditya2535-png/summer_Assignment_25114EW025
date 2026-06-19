#include <stdio.h>
int main(){
    int n,i,j;
    int a[100][100];
    int sum=0;
    printf("enter the order of the square matrix: ");
    scanf("%d",&n);
    printf("enter the element of the matrix:\n ");
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<n;i++){
        sum+=a[i][i];
    }
    printf("sum of the principal diagonal= %d\n",sum);
    return 0;
}