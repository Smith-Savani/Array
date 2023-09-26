#include<stdio.h>
#define N 5


int main(){

// initializing array

// int arr[4] = {3,4,2,5};
// printf("%d",arr[0]);

// int a[] = {34,34,2,4,2}

int arr[N];

for(int i = 0;i<N;i++){
    printf("Enter elements:");
    scanf("%d",&arr[i]);
}
for(int i = 0;i<N;i++){
    printf("the element is %d\n",arr[i]);
}

return 0;
}
