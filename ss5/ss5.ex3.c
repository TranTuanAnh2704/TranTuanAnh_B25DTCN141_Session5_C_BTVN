#include <stdio.h>
int main(){
	float dtb;
	
	printf("Nhap diem trung binh: ");
	scanf("%f",&dtb);
	
	if(dtb<0 || dtb>10){
		printf("Yeu cau ban nhap lai diem trung binh");
	}else if(dtb>=8){
		printf("Hoc luc gioi");
	}else if(dtb>=6.5){
		printf("Hoc luc kha");
	}else if(dtb>=5){
		printf("Hoc luc Trung Binh");
	}else{
		printf("Hoc luc yeu");
   }
}
