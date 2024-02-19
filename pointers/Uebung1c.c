#include <stdio.h>

int add(int num1, int num2) {
  return num1 + num2;
}

int apply_operation(int num1, int num2, int (*func)(int, int)) {
  return (*func)(num1, num2);
}

int main() {
  int result;
  int (*add_ptr)(int, int) = add;

  result = apply_operation(2, 3, add_ptr);
  printf("Ergebnis = %d\n", result);

  return 0;
}
