#include <stdio.h>
#include <stdbool.h>

// Ham kiem tra so nguyen to
bool kiemTraNguyenTo(int n) {
    if (n < 2) {
        return false; // So nho hon 2 khong phai la so nguyen to
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Neu chia het cho i, khong phai la so nguyen to
        }
    }
    return true; // Neu khong chia het, la so nguyen to
}

int main() {
    int so1, so2;

    // Nhap hai so nguyen tu nguoi dung
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Goi ham kiem tra voi so thu nhat va in ket qua
    if (kiemTraNguyenTo(so1)) {
        printf("%d la so nguyen to.\n", so1);
    } else {
        printf("%d khong phai la so nguyen to.\n", so1);
    }

    // Goi ham kiem tra voi so thu hai va in ket qua
    if (kiemTraNguyenTo(so2)) {
        printf("%d la so nguyen to.\n", so2);
    } else {
        printf("%d khong phai la so nguyen to.\n", so2);
    }

    return 0; // Ket thuc chuong trinh
}

