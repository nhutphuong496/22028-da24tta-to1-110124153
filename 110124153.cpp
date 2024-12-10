#include <stdio.h>
#include <math.h>

#define MAX_NGAY 31

// Function prototypes
void nhapChiTieu(float ChiTieu[], int soNgay);
void hienthiChiTieu(float ChiTieu[], int soNgay);
void tinhtoanThongKe(float ChiTieu[], int soNgay, float *tong, float *trungBinh, float *lonNhat);
void phanTichChiTieu(float ChiTieu[], int soNgay, float nguong);
void sapXepChiTieu(float ChiTieu[], int soNgay);

int main() {
    int soNgay;
    float chiTieu[MAX_NGAY], tong = 0, trungBinh = 0, lonNhat = 0;

    // Nhap so ngay trong thang
    do {
        printf("\nNhap so ngay trong thang (28-31): ");
        scanf("%d", &soNgay);
    } while (soNgay < 28 || soNgay > 31);

    // Nhap chi tieu hang ngay
    nhapChiTieu(chiTieu, soNgay);

    // Hien thi chi tieu
    hienthiChiTieu(chiTieu, soNgay);

    // Tinh toan va thong ke
    tinhtoanThongKe(chiTieu, soNgay, &tong, &trungBinh, &lonNhat);
    printf("\nTong: %.2f, Trung Binh: %.2f, Lon Nhat: %.2f\n", tong, trungBinh, lonNhat);

    // Phan tich chi tieu
    float nguong;
    printf("\nNhap nguong de phan tich chi tieu: ");
    scanf("%f", &nguong);
    phanTichChiTieu(chiTieu, soNgay, nguong);

    return 0;
}

// Nhap chi tieu hang ngay
void nhapChiTieu(float ChiTieu[], int soNgay) {
    for (int i = 0; i < soNgay; i++) {
        printf("Nhap chi tieu cho ngay %d: ", i + 1);
        scanf("%f", &ChiTieu[i]);
    }
}

// Hien thi chi tieu
void hienthiChiTieu(float ChiTieu[], int soNgay) {
    printf("\nChi tieu trong %d ngay:\n", soNgay);
    for (int i = 0; i < soNgay; i++) {
        printf("Ngay %d: %.2f\n", i + 1, ChiTieu[i]);
    }
}

// Tinh toan thong ke
void tinhtoanThongKe(float ChiTieu[], int soNgay, float *tong, float *trungBinh, float *lonNhat) {
    *tong = 0;
    *lonNhat = ChiTieu[0];

    for (int i = 0; i < soNgay; i++) {
        *tong += ChiTieu[i];
        if (ChiTieu[i] > *lonNhat) {
            *lonNhat = ChiTieu[i];
        }
    }

    *trungBinh = *tong / soNgay;
}

// Phan tich chi tieu theo nguong
void phanTichChiTieu(float ChiTieu[], int soNgay, float nguong) {
    printf("\nPhan tich chi tieu cao hon nguong %.2f:\n", nguong);
    for (int i = 0; i < soNgay; i++) {
        if (ChiTieu[i] > nguong) {
            printf("Ngay %d: %.2f\n", i + 1, ChiTieu[i]);
        }
    }
}

