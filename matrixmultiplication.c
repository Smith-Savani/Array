#include<stdio.h>
#define MAX 50

int main(){
    int arows,acolumns,brows,bcolumns;
    int a[MAX][MAX],b[MAX][MAX],product[MAX][MAX];
    int sum=0;
    printf("Enter rows and columns of matrix a :- ");
    scanf("%d %d",&arows,&acolumns);

    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {

            printf("Enter %d row and %d column element",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        
    }
    
    printf("\nEnter rows and columns of matrix b:");
    scanf("%d %d",&brows,&bcolumns);
    
    for (int i = 0; i < brows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf("Enter %d row and %d column element",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        
    }
if(acolumns==brows){
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            for (int k = 0; k < brows; k++)  // can also use k<brows  because of condition acolumns = brows
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
    printf("The resultant matrix is \n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            printf(" %d",product[i][j]);
        }
        printf("\n");
    }
}   
else{
    printf("The matrix multiplication is not possible for given matrix since column of a matrix is not equal to row of b matrix");
} 

    return 0;
}