#include <stdio.h>

void sum(int num1, int num2)
{

    int addition= num1 + num2;
    printf("%d \n", addition);
}

void diff(int num1, int num2)
{

    int difference= num2 - num1; 
    printf("%d \n", difference);
}

int main() 
{

    sum(10,20);
    sum (39,8765);
    diff(10,20);
    diff(39,8765);

    return 0;
}