/* verify that expression getchar() != EOF is 0 or 1. */
#include <stdio.h>

int main() {
  int c;

  while (c = getchar() != EOF)
    printf("The value of the expressions is: %d\n", c);

  printf("The value of the expressions is: %d\n", c);

  return 0;
}
