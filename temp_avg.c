#include<stdio.h>
#define N 5

int main(){
    float temp_value[N],sum = 0;
    for(int i = 0;i<5;i++){
        printf("Enter %d temperature:",i+1);
        scanf("%f",&temp_value[i]);
        sum = sum + temp_value[i];
    }
    printf("The avg value of temperature is %.2f",sum/5);

    return 0;
}