#include <stdio.h>

void printBits(int n) {
  for (int i = 31; i >= 0; i--) {
    printf("%d", (n >> i) & 1);
  }
}

int main() {
  int n;
  printf("Enter a 32-bits integer: ");
  scanf("%d", &n);

  // Print the bits
  printBits(n);

  printf("\n");

  return 0;
}
