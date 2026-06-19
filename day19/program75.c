#include <stdio.h>
int main(){
    int rows,cols,i,j;
    int a[100][100],t[100][100];
    printf("enter the number of the rows and columns: ");
    scanf("%d %d",&rows,&cols);
    printf("enter the element of the matrix: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            t[j][i]=a[i][j];
        }
    }
    printf("transpose of the matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}