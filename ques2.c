#include <stdio.h>

int main(void) {
  double base, height, area;

  printf("Enter the base of the triangle: ");
  scanf("%lf", &base);

  printf("Enter the height of the triangle: ");
  scanf("%lf", &height);

  area = (base * height) / 2;
  printf("The area of the triangle is: %.2lf\n", area);

  return 0;
}
