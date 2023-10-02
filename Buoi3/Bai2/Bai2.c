#include <math.h>
#include <stdio.h>

int main(void) {
  // Bai 2
  int n;
  printf("Moi ban nhap so n : ");
  scanf("%d", &n);

  // 6 6 3 2 1
  // 1 + 2 + 3 = 6

  int tong_uoc = 0;

  // Tim uoc
  for (int i = 1;i < n; i++) {
    if (n % i == 0) {
      tong_uoc += i;
    }
  }

  if (tong_uoc == n) {
    printf("So %d la so hoan hao", n);
  } else {
    printf("So %d khong phai so hoan hao", n);
  }
}