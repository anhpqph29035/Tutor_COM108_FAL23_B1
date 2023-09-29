#include <stdio.h>
int main(void) {
  int chon;
  while (1) {
    printf("\n\n---------MENU--------\n");
    printf("1, Tinh tong so le\n");
    printf("2, Tinh tong\n");
    printf("3, Thoat\n");

    printf("Moi ban chon chuc nang (1-2-3) : ");
    scanf("%d", &chon);

    switch (chon) {
    case 1:
      printf("\nBan chon chuc nang 1\n");
      // Khai bao
      int n;

      // Nhap n
      printf("\nMoi ban nhap so nguyen n : ");
      scanf("%d", &n);

      // Tim so le va tinh tong
      int tong = 0;
      for (int i = 1; i <= n; i++) {
        // Kiem tra so le va chia het cho 5
        if (i % 2 != 0 && i % 5 == 0) {
          tong += i;
        }
      }

      if (tong <= 0) {
        printf("Khong co so nao le dong thoi chia het cho 5");
      } else {
        printf("Tong cac so le tu 1 - %d va chia het cho 5 la : %d ", n, tong);
      }
      break;
    case 2:
      printf("\nBan chon chuc nang 2");
      //S = 1+2+..+x
      int x;
      printf("\nMoi ban nhap so nguyen x : ");
      scanf("%d", &x);
      // Tinh tong cac so tu 1 - x
      int S = 0;
      for (int i = 1; i <= x; i++) {
        S += i;
      }
      printf("S = 1+2+...+%d = %d", x, S);
      //S = 1+1/2+...+1/n = 1/1 + 1/2 + ... + 1/n
      double S1 = 0.0;
      for (int i = 1; i <= n; i++) {
        S1 += 1.0 / i;
      }
      printf("\nS1 = 1+1/2+...+1/%d = %.2lf", x, S1);
      break;
    case 3:
      printf("Chao Tam Biet !!!");
      return 0;
      break;
    default:
      printf("Khong co chuc nang moi ban chon lai !");
    }
  }
}

// int tong = 0;
// for (int i = 1; i <= n; i++) {
//   // Kiem tra la so le va chia het cho 5
//   if (i % 2 != 0 && i % 5 == 0) {
//     tong += i;
//   }
// }

// Cach viet vong for (bat dau;dieu kien chay for;buoc nhay)
// Nhap n = 5
// Lan 1 : i=1 , 1<=5 ; i++
// tong=0 i=2
// Lan 2 : i=2 , 2<=5 ; i++
// tong=0 i=3
// Lan 3 : i=3 , 3<=5 ; i++
// tong=0 i=4
// Lan 4 : i=4, 4<=5 ;i++
// tong=0 i=5
// Lan 5 : i=5 , 5<=5 ,i++
// tong = tong + i = 0 + 5 = 5
// tong = 5 và i=6
// Lan 6 : i=6 , 6<=5 (Dieu kien sai)
// Dung vong lap