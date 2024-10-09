#include <stdio.h>

#define IN  1
#define OUT 0

/* count words in input. */
int main() {
  int c, nw, state;

  nw = 0;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("There are %d words in the input.\n", nw);
}
