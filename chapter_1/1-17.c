#include <string.h>
#include <stdio.h>
#define MAXLINE   1000
#define MAXINPUT  100
#define LIMIT     10
/* Write a program to print all input lines that are longer than 80 characters.
 * */

int _getline(char curr[], int lim);
int main() {
  int len;
  int i = 0;
  char curr[MAXLINE];
  char results[MAXINPUT][MAXLINE];

  while ((len = _getline(curr, MAXLINE)) > 0) {
    if (len > LIMIT && i < MAXINPUT) {
      strcpy(results[i], curr);
      ++i;
    }
  }

  if (i > 0) {
    for (int j = 0; j < i; ++j) 
      printf("%s", results[j]);
  }

  return 0;
}

int _getline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}
