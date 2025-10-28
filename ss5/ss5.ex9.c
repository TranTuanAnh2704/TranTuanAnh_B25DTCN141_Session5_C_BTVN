#include <stdio.h>
int main(){
	float hesoluong; // salaryRate
	int songaycong; // totalWorkDays
	int chucvu; // position
	
	printf("Nhap vao he so luong: ");
	scanf("%f",&hesoluong);
	printf("Nhap vao so ngay cong: ");
	scanf("%d",&songaycong);
	printf("Nhap vao chuc vu (1-2-3): ");
	scanf("%d",&chucvu);
	
	if(songaycong<0 || songaycong>31 || chucvu<1 || chucvu>3 || hesoluong<0){
		printf("Ban nhap khong dung du lieu");
	}else{
		double luong; //salary
		double phucap;
		double thuong = 0;
		
		switch(chucvu){
			case 1:
				phucap = 500000;
				break;
			case 2:
				phucap = 1000000;
				break;
			case 3:
				phucap = 2000000;
				break;
		}
		
		thuong = (songaycong-26)*200000;
		
		luong = songaycong*160000*hesoluong + phucap + thuong;
		printf("Luong cua ban la: %.0lf",luong);
	}
}

