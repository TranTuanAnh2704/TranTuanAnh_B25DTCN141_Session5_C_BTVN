#include <stdio.h>
int main(){
    float a, tongtien;
	printf("Moi ban nhap vao so met khoi nuoc tieu thu: ");
	scanf("%f",&a);
	
	if(a<0){
		printf("Ban can nhap dung dinh dang");
	}else if(a <= 10){
		tongtien = a*6000;
		printf("Tong tien phai tra la: %.2f VND",tongtien);
	}else if(a<=20){
		tongtien = 10*6000 + (a-10)*7000;
		printf("Tong tien phai tra la: %.2f VND",tongtien);
	}else if(a<=30){
		tongtien = 10*6000 + 10*7000 + (a-20)*8500;
		printf("Tong tien phai tra la: %.2f VND",tongtien);
	}else{
		tongtien = 10*6000 + 10*7000 + 10*8500 + (a-30)*10000;
		printf("Tong tien phai tra la: %.2f VND",tongtien);
	}
	
	return 0;
}
