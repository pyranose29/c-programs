#include <stdio.h>

int main() {
  int int1, int2;
  float float_num;
  
  
  printf("Enter first integer: ");
  scanf("%d", &int1);
  printf("Enter second integer: ");
  scanf("%d", &int2);
  printf("Enter a floating-point number: ");
  scanf("%f", &float_num);
  
  int bitwise_result = (int1 & int2) | (int1 ^ int2);
  printf("Bitwise Result: %d\n", bitwise_result);


  float arithmetic_result = (int1 * float_num + int2 / float_num);
  printf("Arithmetic Result: %.3f\n", arithmetic_result);

  return 0;
}