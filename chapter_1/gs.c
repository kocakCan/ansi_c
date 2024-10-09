#include <stdio.h>
#define MAXLINE 1000

int my_getline(char buff[], int lim);
void copy(char to[], char from[]);

int main() {
  int len, max;
  char curr[MAXLINE], longest[MAXLINE];

  max = 0;
  while ((len = my_getline(curr, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, curr);
    }
  }

  if (max > 0)
    printf("%s", longest);

  return 0;
}

int my_getline(char buff[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    buff[i] = c;

  if (c == '\n') {
    buff[i] = c;
    ++i;
  }

  buff[i] = '\0';

  return i;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
