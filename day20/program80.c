#include <stdio.h>
int main(){
    int row,col,i,j,sum;
    printf("enter the row and column of matrix: ");
    scanf("%d %d",&row ,&col);

    int a[row][col];
    printf("enter the matrix element:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\ncolumns-wise sum:\n");
    for(j=0;j<col;j++){
        sum=0;
        for(i=0;i<row;i++){
            sum+=a[i][j];
        }
        printf("sum of column %d=%d\n",j+1,sum);
    }
    return 0;
}