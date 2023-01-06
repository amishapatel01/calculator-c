#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>


int main(int argc, char * argv[]) {
  float operand1;
  float operand2;
  char operatorValue;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", & operand1, & operatorValue, & operand2);

  switch (operatorValue) {
  case '/':
    answer = operand1 / operand2;
    break;
  case '*':
    answer = operand1 * operand2;
    break;
  case '+':
    answer = operand1 + operand2;
    break;
  case '-':
    answer = operand1 - operand2;
    break;
  case '^':
    answer = pow(operand1, operand2);
    break;
  case ' ':
    answer = sqrt(operand2);
    break;
  default:
    goto fail;
  }
  printf("%.2f%c%.2f =  %.2f\n\n", operand1, operatorValue, operand2, answer);
  goto exit;
  fail:
    printf("Fail.\n");
  exit:
    return 0;
}
