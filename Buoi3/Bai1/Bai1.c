#include <math.h>
#include <stdio.h>

int main(void) {
  int min, max;
  printf("Moi ban nhap so min : ");
  scanf("%d", &min);
  printf("Moi ban nhap so max : ");
  scanf("%d", &max);

  // Tinh tong
  double tong;
  int dem;

  for (int i = min; i <= max; i++) {
    // Check so chan chia het cho 3
    if (i % 2 == 0 && i % 3 == 0) {
      tong += i; // tong = tong + i
      dem++;     // dem = dem+1;
    }
  }

  if (tong <= 0) {
    printf("Khong co so chan chia het cho 3 tu min den max");
    return 0;
  } else {
    double trungbinh = tong / dem;
    printf("Trung binh cac so chan chia het cho 3 tu min den max la : %.2lf",
           trungbinh);
  }
}