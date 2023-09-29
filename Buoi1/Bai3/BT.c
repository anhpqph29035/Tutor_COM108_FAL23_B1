#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;

    // Nhap ba so nguyen
    printf("Nhap a : ");
    scanf("%d", &a);
    printf("Nhap b : ");
    scanf("%d", &b);
    printf("Nhap c : ");
    scanf("%d", &c);

    // Tim so lon nhat bang cach so sanh
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // Hien thi ket qua
    printf("So lon nhat la : %d\n", max);

    return 0;
}
