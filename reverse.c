#include <stdio.h>
#define N 5

int main(){

    int arr[N] = {34,23,54,15,16};
    //original 
    for(int i = 0;i<N;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i= N-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
   return 0; 

}