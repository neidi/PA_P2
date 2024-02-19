#include <stdio.h>

int main() {
  int num1, num2, sum, product;
  int *ptr1, *ptr2;

  printf("Gib zwei Ganzzahlen ein: ");
  scanf("%d %d", &num1, &num2);

  ptr1 = &num1;
  ptr2 = &num2;

  sum = *ptr1 + *ptr2;
  product = *ptr1 * *ptr2;

  printf("Summe = %d\nProdukt = %d\n", sum, product);

  return 0;
}
