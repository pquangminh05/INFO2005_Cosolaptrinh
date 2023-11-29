#include <stdio.h>
#include <string.h>

struct SinhVien {
    char masv[7];
    char hoten[30];
    char nganh[20];
    float dtb;
};

void hienThi(struct SinhVien sv) {
    printf("%-7s | %-30s | %-20s | %.2f\n", sv.masv, sv.hoten, sv.nganh, sv.dtb);
}

void timKiem(struct SinhVien ds[], int sosv) {
    char masv[7];

    printf("Nhap ma sv can tim: ");
    fgets(masv, sizeof(masv), stdin);
    masv[strcspn(masv, "\n")] = '\0';

    printf("%-7s | %-30s | %-20s | %s\n", "Ma SV", "Ho ten", "Nganh Hoc", "Diem Trung Binh");
    int flag = 0;
    for (int i = 0; i < sosv; i++) {
        if (strcmp(masv, ds[i].masv) == 0) {
            hienThi(ds[i]);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("Khong co sinh vien nao co ma can tim.\n");
    }
}

void hienThiDS(struct SinhVien ds[], int sosv) {
    printf("%-7s | %-30s | %-20s | %s\n", "Ma SV", "Ho ten", "Nganh Hoc", "Diem Trung Binh");
    for (int i = 0; i < sosv; i++) {
        hienThi(ds[i]);
    }
}

void sapXep(struct SinhVien ds[], int sosv) {
    for (int i = 0; i < sosv - 1; i++) {
        for (int j = i + 1; j < sosv; j++) {
            if (ds[i].dtb > ds[j].dtb) {
                struct SinhVien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void nhap(struct SinhVien *sv) {
    printf("Nhap ma sv: ");
    fgets((*sv).masv, sizeof((*sv).masv), stdin);
    (*sv).masv[strcspn((*sv).masv, "\n")] = '\0';

    printf("Ho ten: ");
    fgets((*sv).hoten, sizeof((*sv).hoten), stdin);
    (*sv).hoten[strcspn((*sv).hoten, "\n")] = '\0';

    printf("Nganh hoc: ");
    fgets((*sv).nganh, sizeof((*sv).nganh), stdin);
    (*sv).nganh[strcspn((*sv).nganh, "\n")] = '\0';

    printf("Diem trung binh: ");
    scanf("%f", &(*sv).dtb);

    fflush(stdin);
}

int main() {
    struct SinhVien ds[30];
    int sosv;

    printf("Nhap so sv: ");
    scanf("%d", &sosv);
    fflush(stdin);

    for (int i = 0; i < sosv; i++) {
        nhap(&ds[i]);
    }

    printf("Danh sach da nhap:\n");
    hienThiDS(ds, sosv);

    sapXep(ds, sosv);

    printf("Danh sach sau khi sap xep:\n");
    hienThiDS(ds, sosv);

    timKiem(ds, sosv);

    return 0;
}
