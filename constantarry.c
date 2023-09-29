#include <stdio.h>

int main(){

    const int array[3] = {1,2,3};

    array[1] = 5;
//will produce error
    return 0;
}