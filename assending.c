#include<stdio.h>

int main(){
    int array[5] = {67,34,64,23,45};
    for(int i = 0;i<5;i++){
    for(int i = 0;i<5;i++){
        if(array[i]>array[i+1]){
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
    }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",array[i]);
    }
    
    return 0;
}