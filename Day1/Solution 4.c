#include <stdio.h>

float calculate(float num1, char op, float num2) {

  // perform operation
  float result;
  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.\n");
      return 0;
  }

  return result;
}

int main() {

  // declare variables
  float num1, num2, result;
  char op;

  // get input from user
  printf("Enter number1: ");
  scanf("%f", &num1);

  printf("Enter operator: ");
  scanf(" %c", &op);

  printf("Enter number2: ");
  scanf("%f", &num2);

  // perform operation
  result = calculate(num1, op, num2);

  // print result
  printf("Result: %.2f\n", result);

  return 0;
}
