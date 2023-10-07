#include <stdio.h>

int main(void)
{
  //Khai bao cac thuoc tinh cua nhan vien
  char hoTen[100];
  char maNV[10];
  int tuoiNV;
  char queQuan[100];

  //Nhap thong tin nhan vien
  printf("\nMoi ban nhap ten : ");
  gets(hoTen);
  
  printf("\nMoi ban nhap ma : ");
  gets(maNV);
  
  printf("\nMoi ban nhap tuoi : ");
  scanf("%d",&tuoiNV);
  
  getchar();
  
  printf("\nMoi ban nhap que quan : ");
  gets(queQuan);
  
  //In thong tin
  printf("\n----Thong Tin Nhan Vien----");
  printf("\nHo va ten : %s",hoTen);
  printf("\nMa nhan vien : %s",maNV);
  printf("\nTuoi : %d",tuoiNV);
  printf("\nQue quan : %s",queQuan);
}