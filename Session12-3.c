#include <stdio.h>
// Ham tinh giai thua
long long tinhGiaThua(int n) {
    if (n == 0 || n == 1) {
        return 1; // Giai thua cua 0 va 1 la 1
    }
    long long giaiThua = 1;
    for (int i = 2; i <= n; i++) {
        giaiThua *= i; // Nhan tich luy tu 2 den n
    }
    return giaiThua; // Tra ve ket qua
}
int main() {
    int n;
    // Nhap so nguyen tu nguoi dung
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    // Kiem tra dieu kien hop le
    if (n < 0) {
        printf("Khong tinh duoc giai thua cua so am!\n");
    } else {
        // Goi ham tinh giai thua va in ket qua
        printf("Giai thua cua %d la: %lld\n", n, tinhGiaThua(n));
    }
    return 0; 
}

