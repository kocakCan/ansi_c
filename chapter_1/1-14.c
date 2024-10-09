/**
* Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include <stdio.h>
#include <ctype.h>

#define MAXCHAR 128

int main() {
  int charFreq[MAXCHAR] = {0};
  int c;

  while ((c = getchar()) != EOF) {
    if (c < MAXCHAR) {
      ++charFreq[c];
    }
  }

  for (int i = 0; i < MAXCHAR; ++i) {
    if (charFreq[i] != 0 && isprint(i)) {
      printf(" %c : ", i);
      for (int j = 0; j < charFreq[i]; ++j) {
        putchar('*');
      }
      putchar('\n');
    } else if (charFreq[i] != 0) {
      printf("---: ");
      for (int j = 0; j < charFreq[i]; ++j) {
        putchar('*');
      }
      putchar('\n');
    }
  }

  return 0;
}
