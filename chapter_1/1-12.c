#include <stdio.h>
#define IN  1
#define OUT 0

/* the program printing its input one word per line. */
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
      putchar(c);
      state = IN;
    }
  }

  return 0;
}
