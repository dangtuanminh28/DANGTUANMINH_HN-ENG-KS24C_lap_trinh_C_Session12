#include <stdio.h>
#include <stdbool.h>

// Ham kiem tra so hoan hao
bool kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return false; // So nho hon hoac bang 0 khong phai so hoan hao
    }

    int tong = 0; // Bien luu tong cac uoc so cua n

    // Tinh tong cac uoc so cua n (khong bao gom n)
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i; // Cong uoc so vao tong
        }
    }

    return tong == n; // Neu tong cac uoc bang n, tra ve true
}

int main() {
    int so1, so2;

    // Nhap hai so nguyen tu nguoi dung
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

    // Goi ham kiem tra voi so thu nhat va in ket qua
    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }

    // Goi ham kiem tra voi so thu hai va in ket qua
    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }

    return 0; // Ket thuc chuong trinh
}

