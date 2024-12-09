#include <stdio.h>
// Ham in cac phan tu trong mang
void inMang(int arr[], int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // In tung phan tu
    }
    printf("\n");
}
int main() {
    int n;
    // Nhap so luong phan tu cua mang
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    // Khai bao mang voi n phan tu
	int arr[n]; 
    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Khai bao ham de in cac phan tu trong mang
    inMang(arr, n);
    return 0;
}

