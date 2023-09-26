#include <stdio.h>

int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    
    //array of digit 0 to 9
    int array[10] = {0};
    while(num>0){
       int rem = num%10;
        if(array[rem] == 1)
            break;
        else
            array[rem] = 1;
        num /= 10;    
    }
    if (num>0)
        printf("Yes");
    else
        printf("No");
    return 0;
}