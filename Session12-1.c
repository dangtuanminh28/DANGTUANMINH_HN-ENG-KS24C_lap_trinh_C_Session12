#include <stdio.h>
// Ham tinh tong hai so
int tinhTong(int a, int b) {
    return a + b; // Tra ve tong cua hai so
}
int main() {
    int i, j, sum;
    // Nhap hai so nguyen tu nguoi dung
    printf("Nhap so thu nhat: ");
    scanf("%d", &i);
    printf("Nhap so thu hai: ");
    scanf("%d", &j);
    // Cong thuc tinh tong
    sum = tinhTong(i, j);
    // In ra ket qua
    printf("Tong cua %d va %d la: %d\n", i, j, sum);
    return 0;
}


