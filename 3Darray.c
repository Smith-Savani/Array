#include<stdio.h>

int main(){
    int arr3d[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
    // 2 2d array which have 2 rows and 3 columns (used escape sequence to show this)
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d\t",arr3d[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}