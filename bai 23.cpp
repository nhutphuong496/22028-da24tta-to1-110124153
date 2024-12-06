#include <stdio.h>

int main() {
    // Khai bao cac bien
    char name[100];   // Ho tên (chuoi)
    int age;          // Tuoi (so nguyen)
    char gender[10];  // Gioi tính (chuoi)
    char address[200];// dia chi (chuoi)
    float income;     // Thu nhap (so thuc)

    // Nh?p thông tin cá nhân
    printf("Nhap ho ten: ");
    gets(name);  // Nhap ho tên (có the chua khoang trong)

    printf("Nhap tuoi: ");
    scanf("%d", &age);  // Nhap tuoi (so nguyên)

    printf("Nhap gioi tinh: ");
    scanf("%s", gender);  // Nhap gioi tính (chuoi không chua khoang trong)

    // Doc ký tu '\n' còn lai trong bo dem sau scanf
    getchar(); 

    printf("Nhap dia chi: ");
    gets(address);  // Nhap dia chi (có the chua khoang trong)

    printf("Nhap thu nhap: ");
    scanf("%f", &income);  // Nhap thu nhap (so thuc)

    // Xuat thông tin cá nhân
    printf("\n--- Thong tin ca nhan ---\n");
    printf("Ho ten: %s\n", name);
    printf("Tuoi: %d\n", age);
    printf("Gioi tinh: %s\n", gender);
    printf("Dia chi: %s\n", address);
    printf("Thu nhap: %.2f\n", income);

    return 0;
}

