/* program to print a histogram of its lengths of word in its inputs vertically. */
#include <stdio.h>
#define IN          1
#define OUT         0
#define MAX_WIDTH   30
#define MAX_HEIGHT  15

int main() {
  int wordLen[MAX_WIDTH] = {0};
  int wordIndex = 0;

  int c, state;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        ++wordIndex;
        state = OUT;
      }
    } else if (state == OUT) {
      state = IN;
      if (wordIndex < MAX_WIDTH && wordLen[wordIndex] < MAX_HEIGHT) {
        ++wordLen[wordIndex];
      }
    } else {
      if (wordIndex < MAX_WIDTH && wordLen[wordIndex] < MAX_HEIGHT) {
        ++wordLen[wordIndex];
      }
    }
  } 

  int max = 0;
  for (int i = 0; i < MAX_WIDTH && wordLen[i] != 0; i++) {
    if (wordLen[i] > max) {
      max = wordLen[i];
    }
  }

  for (int row = max; row > 0; --row) {
    for (int col = 0; col < MAX_WIDTH && wordLen[col] != 0; col++) {
      if (wordLen[col] >= row) {
        putchar('|');
        putchar(' ');
      } else {
        putchar(' ');
        putchar(' ');
      }
    }
    putchar('\n');
  }


  return 0;
}
