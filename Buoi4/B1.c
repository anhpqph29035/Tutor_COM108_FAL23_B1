#include <math.h>
#include <stdio.h>
int main(void) {

  int n;
  printf("Moi ban nhap so phan tu cua mang : ");
  scanf("%d", &n);

  // Khai bao mang co n phan tu
  int arr[n];

  // Nhap pha tu mang
  // 0 1 2 3 4
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d : ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Tinh trung binh
  double tong = 0;
  int dem = 0;

  // Tinh tong chan chi het cho 5
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0 && arr[i] % 5 == 0) {
      tong += arr[i];
      dem++;
    }
  }

  if (tong < 0) {
    printf("Khong co so nao trong mang hop le");
    return 0;
  }

  double trungBinh = tong / dem;
  printf("Trung binh các so chan chia het cho 5 o trong mang la : %.2lf",
         trungBinh);
}