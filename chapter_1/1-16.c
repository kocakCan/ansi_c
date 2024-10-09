#include <stdio.h>
#define MAXLINE 10
/* Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input lines, and as much as possible of the text */
int _getline(char buff[], int lim);
void copy(char to[], char from[]);

int main() {
  int len, max;
  char curr[MAXLINE], longest[MAXLINE];
  
  max = 0;
  while ((len = _getline(curr, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, curr);
    }
  }

  if (max > 0) {
    printf("%s\n", longest);
    printf("The length of the longest input is: %d\n", max);
  }

  return 0;
}

int _getline(char s[], int lim) {
  int c, i;
  int length = 0;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i, ++length)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
    ++length;
  } else if (i >= lim - 1) {
    while ((c = getchar()) != EOF && c != '\n')
      ++length;
  }

  s[i] = '\0';

  return length;
}

void copy(char to[], char from[]) {
  int i = 0;

  while ((to[i] = from[i]) != '\0')
    ++i;
}
