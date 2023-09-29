#include <stdio.h>
#include <math.h>

int main() {
    double r;
    const double pi = 3.14; // Gia tri pi

    // Nhap ban kinh
    printf("Nhap ban kinh hinh cau : ");
    scanf("%lf", &r);

    // Tinh chu vi hinh cau
    double chu_vi = 2 * pi * r;

    // Tinh dien tich hinh cau
    double dien_tich = 4 * pi * r * r;

    // Hien thi ket qua
    printf("Chu vi hinh cau la : %.2lf\n", chu_vi);
    printf("Dien tich hinh cau la : %.2lf\n", dien_tich);

    return 0;
}
