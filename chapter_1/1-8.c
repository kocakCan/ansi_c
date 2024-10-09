#include <stdio.h>

/* count blanks, tabs, and newlines in input. */
int main() {
  int c, nb, nt, nn;

  nb = nt = nn = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nn;
  }

  printf("There are %d blanks, %d tabs, and %d newlines in the input.\n", nb,
         nt, nn);

  return 0;
}
