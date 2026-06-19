#include <stdio.h>
int main(){
    int rows,cols,i,j;
    printf("enter the number of the rows and columns: ");
    scanf("%d %d",&rows,&cols);

    int a[100][100],b[100][100],diff[100][100];
    printf("enter the element of first matrix: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter the element of second matrix: ");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            diff[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("differencr of the matrices: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}