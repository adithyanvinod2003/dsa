#include <stdio.h>
typedef struct{
    int row;int col;int val;}sparseMatrix;
int main(){
    sparseMatrix M[100];int m,n;int rowCount,colCount;
    printf("Enter the no of rows and columns :");scanf("%d %d",&rowCount,&colCount);
    int sparseMatrix[rowCount][colCount];
    printf("Enter the elements of sparse matrix :");
    for(m=0;m<rowCount;m++){
        for(n=0;n<colCount;n++){
            scanf("%d",&sparseMatrix[m][n]);
        }}
    int zeroCheck = 0;
    M[0].row = rowCount;M[0].col = colCount;
    for(int i=0,k=1;i<rowCount;i++){
        for(int j=0;j<colCount;j++){
            if(sparseMatrix[i][j] != 0){
                zeroCheck++;
                M[k].row = rowCount;M[k].val= sparseMatrix[i][j];
                k++;
            }
        }   
    }
    M[0].val = zeroCheck;
    double sparcity = (double)(M[0].row * M[0].col - M[0].val) / (M[0].row * M[0].col);
    printf("Sparcity = %lf",sparcity);}
    
