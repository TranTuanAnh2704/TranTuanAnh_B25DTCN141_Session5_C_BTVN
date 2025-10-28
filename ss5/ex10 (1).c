#include <stdio.h>

int main() {
    float kwh, tienbacthang = 0, phuphi, tongtien;
    int loai;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &kwh);

    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &loai);

    if (kwh <= 50) {
        tienbacthang = kwh * 1500;
    }else if (kwh <= 100){
        tienbacthang = 50 * 1500 + (kwh - 50) * 2000;
	}
    else if (kwh <= 200){
        tienbacthang = 50 * 1500 + 50 * 2000 + (kwh - 100) * 2500;
	}
    else{
        tienbacthang = 50 * 1500 + 50 * 2000 + 100 * 2500 + (kwh - 200) * 3000;
	}
    switch (loai) {
        case 1: 
            phuphi = tienbacthang * 5/100;
            break;
        case 2:
            phuphi = tienbacthang * 10/100;
            break;
        case 3:
            phuphi = tienbacthang * 8/100;
            break;
        default:
            printf("Loai ho khong hop le!\n");
            return 1;
    }

    tongtien = tienbacthang + phuphi;

    printf("\n===== HOA DON TIEN DIEN =====\n");
    printf("So dien tieu thu: %.2f kWh\n", kwh);
    printf("Tien bac thang: %.0f VND\n", tienbacthang);
    printf("Phu phi: %.0f VND\n", phuphi);
    printf("=> Tong tien dien phai tra: %.0f VND\n", tongtien);

    return 0;
}

