#include <stdio.h>
// Ham tim so lon nhat trong mang
int timMax(int arr[], int n) {
    int max = arr[0]; // Gia su phan tu dau tien la lon nhat
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Cap nhat gia tri lon nhat
        }
    }
    return max; // Tra ve so lon nhat
}
int main() {
    int n;
    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n]; // Khai bao mang voi n phan tu
    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Goi ham timMax de tim so lon nhat va in ket qua
    int max = timMax(arr, n);
    printf("So lon nhat trong mang la: %d\n", max);
    return 0; // Ket thuc chuong trinh
}

