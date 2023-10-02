#include <math.h>
#include <stdio.h>

int ucln(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int bcnn(int a, int b) { return (a * b) / ucln(a, b); }

int main(void) {
  int a, b;

  printf("Moi ban nhap so a : ");
  scanf("%d", &a);
  printf("Moi ban nhap so b : ");
  scanf("%d", &b);

  if (a <= 0 || b <= 0) {
    printf("So a va b phai la so duong ");
  } else {
    int uc = ucln(a, b);
    int bc = bcnn(a, b);
    printf("UCLN la : %d \n", uc);
    printf("BCNN la : %d ", bc);
  }
}