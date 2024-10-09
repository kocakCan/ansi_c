#include <stdio.h>

/* demonstrate one can't pass by value using arrays. */

void change(int a[]);
int main() {
  int my_array[] = {1, 2, 3};

  for (int i = 0; i < 3; ++i)
    printf("%d ", my_array[i]);

  change(my_array);
  printf("\n");

  for (int i = 0; i < 3; ++i)
    printf("%d ", my_array[i]);

  return 0;
}

void change(int a[]) {
  a[0] = 19;
}
