#include <stdio.h>

int main() {
    // Khai bao cac bien
    char name[100];   // Ho t�n (chuoi)
    int age;          // Tuoi (so nguyen)
    char gender[10];  // Gioi t�nh (chuoi)
    char address[200];// dia chi (chuoi)
    float income;     // Thu nhap (so thuc)

    // Nh?p th�ng tin c� nh�n
    printf("Nhap ho ten: ");
    gets(name);  // Nhap ho t�n (c� the chua khoang trong)

    printf("Nhap tuoi: ");
    scanf("%d", &age);  // Nhap tuoi (so nguy�n)

    printf("Nhap gioi tinh: ");
    scanf("%s", gender);  // Nhap gioi t�nh (chuoi kh�ng chua khoang trong)

    // Doc k� tu '\n' c�n lai trong bo dem sau scanf
    getchar(); 

    printf("Nhap dia chi: ");
    gets(address);  // Nhap dia chi (c� the chua khoang trong)

    printf("Nhap thu nhap: ");
    scanf("%f", &income);  // Nhap thu nhap (so thuc)

    // Xuat th�ng tin c� nh�n
    printf("\n--- Thong tin ca nhan ---\n");
    printf("Ho ten: %s\n", name);
    printf("Tuoi: %d\n", age);
    printf("Gioi tinh: %s\n", gender);
    printf("Dia chi: %s\n", address);
    printf("Thu nhap: %.2f\n", income);

    return 0;
}

