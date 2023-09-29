#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array:",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("original array is :\n"); 
    for (int i = 0; i< n   ; i++)
    {
        printf(" %d",array[i]);
    }
    //for reversing
    printf("\nreversed array is :\n"); 
    for (int i = n-1; i >= 0  ; i--)
    {
        printf(" %d",array[i]);
    }
    

    return 0;
}