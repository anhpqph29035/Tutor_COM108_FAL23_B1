#include <stdio.h>

int main() {
    int num;

    // Nhap so nguyen
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("So %d la so 0.\n", num);
    } else if (num > 0) {
        if (num % 2 == 0) {
            printf("So %d la so duong chan.\n", num);
        } else {
            printf("So %d la so duong le.\n", num);
        }
    } else {
        if (num % 2 == 0) {
            printf("So %d la so am chan.\n", num);
        } else {
            printf("So %d la so am le. \n", num);
        }
    }

    return 0;
}