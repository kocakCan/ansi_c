#include <stdio.h>

/* temperature conversion program; 2nd version */

void convert(const int LOWER, const int STEP, const int UPPER); 
void swaptmp(const int, const int, const int);

int main() {
  convert(0, 20, 300);

  printf("DONE!\n");

  swaptmp(0, 20, 300);

  return 0;
}

/* convert fahrenheit into celsius */
void convert(const int LOWER, const int STEP, const int UPPER) {
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    printf("%3d %6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}

void swaptmp(const int LOWER, const int STEP, const int UPPER) {
  int cels;

  for (cels = LOWER; cels <= UPPER; cels += STEP) 
    printf("%3d %6.2f\n", cels, (9.0 / 5.0) * cels + 32);
}
