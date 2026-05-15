#include <stdio.h>

void greetME() 
{
    printf("hello ");
}

int main()
{
    //for (int i=0; i<6; i++) {
        
        //printf("%d \n", i);
        
   // }

   int i= 5;
   
   while (i >= 0) {
    
    printf("%d \n", i);
    
    i--;
    greetME();
    }
    return 0;
}