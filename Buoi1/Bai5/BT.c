#include <stdio.h>
#include <math.h>
int main() {
    double so_tien_gui;
    double lai_suat;

    // Nhap so tien
    printf("Nhap so tien gui: ");
    scanf("%lf", &so_tien_gui);

    // Tinh lai suat
    if (so_tien_gui >= 1000000000) {
        lai_suat = 0.08;
    } else if (so_tien_gui >= 500000000) {
        lai_suat = 0.07;
    } else if (so_tien_gui >= 100000000) {
        lai_suat = 0.06;
    } else {
        lai_suat = 0.05;
    }

    //Hien thi ket qua
    printf("Lai suat hang nam la : %.2lf%%\n", lai_suat * 100);

    return 0;
}
