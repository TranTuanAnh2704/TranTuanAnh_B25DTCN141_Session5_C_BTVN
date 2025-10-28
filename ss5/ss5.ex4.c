#include <stdio.h>
int main(){
	int sotien;
	double thunhap;
	
	printf("nhap vao thu nhap hang thang cua ban(trieu dong): ");
	scanf("%lf",&thunhap);
	
	double thue;
	
	if(thunhap<0){
		printf("Ban nhap lai so tien");
	}else if(thunhap<=5000000){
		thue = thunhap*5/100;
	}else if(thunhap<10000000){
		thue = thunhap*10/100;
	}else{
		thue = thunhap*15/100;
		printf("So tien thue cua ban: %.0lf",thue);
		printf(",So tien cua ban: %.0lf",thunhap);
	}	
}
