#include<stdio.h>
#define R 3
#define C 3


int main(){
    int matrix1[R][C] = {{1,2,3},{1,2,1},{3,1,2}};
    int matrix2[R][C] = {{1,2,3},{1,2,1},{3,1,2}};
    int resultant[R][C];
    int sum = 0,k=-1;
    int r1=0,c1=-1,r2=-1,c2=0,r3=0,c3=0;

    for (int i = 0; i < 3; i++)
    c2=0;
    {   for(int m = 0;m<3;m++){
        c1=-1,r2=-1;
            for (int j = 0; j < 3; j++)
        {
            
            c1++;
            r2++;
            int a = matrix1[r1][c1] * matrix2[r2][c2];
            sum = sum+a;
            
        }
        c2++;
        resultant[r3][c3] = sum;
        c3++;
    }
    r1++;
    r3++;
    }
    for(int i =0;i<3;i++){
        for (int j = 0; j < 3; j++)
        {
        printf(" %d",resultant[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}