#include <math.h>
#include <stdio.h>
int main(void) {
  int n;
  printf("Moi ban nhap so luong nhan vien : ");
  scanf("%d", &n);
  float canNang[n];
  // Nhap can nang cua tung nhan vien
  for (int i = 0; i < n; i++) {
    printf("Moi ban nhap can nang cua nhan vien thu %d : ", i + 1);
    scanf("%f", &canNang[i]);
  }
  // In ra nhan vien co can nang >= 50
  int dem = 0; // So luong nhan vien co can nang >=50
  float maxCan = canNang[0];
  for (int i = 0; i < n; i++) {
    if (canNang[i] >= 50.0) {
      dem++;
    }
  }
  // In ra so luong nhan vien có can nang >=50
  printf("\nSo luong nhan vien co can nang >=50 là : %d", dem);
  // Tim va in ra vi tri cac nhan vien co can nang cao nhat
  for (int i = 0; i < n; i++) {
    if (canNang[i] > maxCan) {
      maxCan = canNang[i];
    }
  }
  printf("\nVi tri cac nhan vien co can nang cao nhat : ");
  for (int i = 0; i < n; i++) {
    if (canNang[i] == maxCan) {
      printf("\nNhan vien %d : %.2lf", i + 1, maxCan);
    }
  }
}