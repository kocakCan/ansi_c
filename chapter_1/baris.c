#include <stdio.h>
#include <ctype.h>

#define MAXCHAR 128

int main() {
  int char_freq[MAXCHAR] = {0};
  int c;

  while ((c = getchar()) != EOF) {
    if (c < MAXCHAR) {
      ++char_freq[c];
    }
  }

  for (int i = 0; i < MAXCHAR; ++i) {
    if (char_freq[i] != 0 && isprint(i)) {
      printf(" %c : ", i);
      for (int j = 0; j < char_freq[i]; ++j) {
        putchar('*');
      }
      putchar('\n');
    } else if (char_freq[i] != 0) {
      printf("-- : ");
      for (int j = 0; j < char_freq[i]; ++j) {
        putchar('*');
      }
      putchar('\n');
    }
  }

  return 0;
}
