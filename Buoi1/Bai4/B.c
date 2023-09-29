#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double sum = 0;
    int count = 0;

    // Nhap n
    printf("Nhap n: ");
    scanf("%d", &n);

    // Tinh trung binh cac so le chia het cho 5 tu 0-n
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0 && i % 5 == 0) { // Kiem tra so le va chia het cho 5
            sum += i;
            count++;
        }
    }

    if (count > 0) {
        double average = sum / count;
        printf("Trung binh cac so le chia het cho 5 tu 0-%d là: %.2lf\n", n, average);
    } else {
        printf("Khong co so le chi het cho 5 tu 0-%d\n", n);
    }
    return 0;
}
