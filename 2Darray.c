#include<stdio.h>

int main(){
    int arra[3][2] = {{1,2},{3,4},{5,6}};
    // array with 3 rows and 2 columns (used escape sequence to show this)

    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            printf("%d\t",arra[i][j]);
        }
       printf("\n"); 
    }

    return 0;
}