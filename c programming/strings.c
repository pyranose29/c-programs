#include<stdio.h>
#include<string.h>

int main()
{

    char a[40] = "Hello Everyone, Im a student";

    char b[40] = "Hello everyone, im a footballer";

    char c[40] = "";

    strcpy(c, b);

    printf("%s \n", c);

    //printf("%s \n", a);
    //printf("%c \n", a[17]);
    
    //a[13] = 'y';
    //printf("%s \n", a);

    //char newWord[15] = "footballer";

    //strncpy(&a[20], newWord, strlen(newWord));

    //a[20 + strlen(newWord)] ='\0';

    //printf("%s \n", a);

    //for (int i=0; i<35; i++)
    //{
      //  printf("%s \n", a[i]);
      

    return 0;
}