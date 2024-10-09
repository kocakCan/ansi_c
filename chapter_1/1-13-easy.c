#include <stdio.h>

/* print a horizontal histogram of the frequencies of different characters in input. */
#define IN  1
#define OUT 0

int main() {
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
    } else {
      putchar('-');
      state = IN;
    }
  }

  return 0;
}
