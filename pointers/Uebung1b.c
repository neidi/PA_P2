#include <stdio.h>

int multiply(int num1, int num2) {
  return num1 * num2;
}

int apply(int num1, int num2, int (*func)(int, int)) {
  return (*func)(num1, num2);
}

int main() {
  int result;
  int (*multiply_ptr)(int, int) = multiply;

  result = apply(2, 3, multiply_ptr);
  printf("Ergebnis = %d\n", result);

  return 0;
}
