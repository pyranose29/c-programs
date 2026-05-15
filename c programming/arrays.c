#include <stdio.h>

int main() 
{
    int number[10]= {1,2,3,5,6,11,16,18,90,100};

    printf("%d \n", number [6]);
    number[10]=1000;

    printf("%d \n", number[10]);

    for (int i = 0; i < 11; ++i) {
        printf ("%d \n", number[i]);
    }

    return 0;
}