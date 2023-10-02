#include <math.h>
#include <stdio.h>

int checkNT(int n) {
  if (n <= 1) {
    return 0; // ko phai so nguyen to
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0; // ko phai so nguyen to
    }
  }
  return 1; // la so nguyen to
}

void tinhTich(int n) {
  printf("%d = ", n);// In ra so n nguoi dung nhap
  for (int i = 2; i <= n; i++) {
    if (checkNT(i)) { // Tach thanh cac thua so nguyen to 
      while (n % i == 0) {
        printf("%d ", i);
        n /= i;
        if (n != 1) {
          printf(" x ");
        }
      }
    }
  }
  printf("\n");
}

int main(void) {
  int n;
  printf("Moi ban nhap vao so n : ");
  scanf("%d", &n);
  tinhTich(n);
  return 0;
}