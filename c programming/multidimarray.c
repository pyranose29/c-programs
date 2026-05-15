#include<stdio.h>

void printArray(int arr[2][2])
{
    printf("%d \n", arr[1][0]);
}

int main() 
{

    int multi_array[2][2] = {{1,2},{3,4}};


    multi_array[1][1]= 400;
    printf("%d \n", multi_array[1][1]);
    
    printArray(multi_array);
    

    return 0;
}