#include <stdio.h>
int main(){
	 double so_m3;
    double tong_tien = 0;

    const double GIA_BAC_1 = 6000;
    const double GIA_BAC_2 = 7000;
    const double GIA_BAC_3 = 8500;
    const double GIA_BAC_4 = 10000;

   
    const double M3_BAC_1 = 10;
    const double M3_BAC_2 = 10; 
    const double M3_BAC_3 = 10; 

    const double TIEN_BAC_1_FULL = M3_BAC_1 * GIA_BAC_1; 
    const double TIEN_BAC_2_FULL = M3_BAC_2 * GIA_BAC_2; 
    const double TIEN_BAC_3_FULL = M3_BAC_3 * GIA_BAC_3;

    printf("CHUONG TRINH TINH TIEN NUOC SINH HOAT\n");
    printf("--------------------------------------\n");
    printf("Nhap vao so met khoi (m3) da tieu thu: ");
    
    if (scanf("%lf", &so_m3) != 1) {
        printf("Loi: Du lieu nhap vao khong hop le.\n");
        return 1;
}
    if (so_m3 <= 0) {
        tong_tien = 0;
    } else if (so_m3 <= 10) {
        tong_tien = so_m3 * GIA_BAC_1;
    } else if (so_m3 <= 20) {
        tong_tien = TIEN_BAC_1_FULL + ((so_m3 - 10) * GIA_BAC_2);
    } else if (so_m3 <= 30) {
        tong_tien = TIEN_BAC_1_FULL + TIEN_BAC_2_FULL + ((so_m3 - 20) * GIA_BAC_3);
    } else {
        tong_tien = TIEN_BAC_1_FULL + TIEN_BAC_2_FULL + TIEN_BAC_3_FULL + ((so_m3 - 30) * GIA_BAC_4);
    }
    printf("--------------------------------------\n");
    printf("Tong so tien nuoc phai tra la: %.0f VND\n", tong_tien);

    return 0;
}

