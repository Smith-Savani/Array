#include <stdio.h>
#include<math.h>
#define N 10

int main(){
    int num[N];
    for (int  i = 0; i < N; i++)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&num[i]);
    }
    
    int sum = 0;
    for (int  i = 0; i < N; i++)
    {
        sum = sum + num[i];
    }
    // printf("%d",sum);
    float mean = (float)sum/N;
    printf("The mean is %f\n",mean);  

    float sum2 = 0;
    for (int i = 0; i < N; i++)
    {
        float diff = num[i] - mean;
        float square = diff*diff;
        sum2 = sum2 + square;
    }
    // printf("%f",sum2);
    float variance  = (float)sum2/N;
    printf("The vairance is %f\n",variance);

    printf("The standard deviation is %f",sqrt(variance));


    return 0;
}