#include <stdio.h>

/* count lines in input */
int main(int argc, char *argv[]) {
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
  }

  printf("There are %d lines in the input.\n", nl);
  return 0;
}
