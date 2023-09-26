#include<stdio.h>
#define R 5
#define C 5


int main(){

    int array[R][C] = {
    {1,1,1,1,1},
    {2,2,2,2,2},
    {3,3,3,3,3},
    {4,4,4,4,4},
    {5,5,5,5,5}};
    // for(int i = 0;i<5;i++){
    //     for (int j = 0; j < 5; j++)         
    //      {
    //         printf("Enter %d of row and %d of column:-",i+1,1);
    //         scanf("%d",&array[i][0]);
    //      }
    // }
    int i,j;
    int sum = 0;
    printf("Row Sum :-");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum = sum + array[i][j];
        }
        printf(" %d",sum);
        sum = 0;
    }
    printf("\nColumn Sum:-");
    for ( j = 0; j < 5; j++)
    {
        for ( i = 0; i < 5; i++)
        {
            sum = sum + array[i][j];
        }
        printf(" %d",sum);
        sum = 0;
    }
    
    

    
    return 0;
}