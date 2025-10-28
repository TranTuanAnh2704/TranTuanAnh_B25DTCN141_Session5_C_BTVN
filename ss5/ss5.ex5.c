#include <stdio.h>
int main(){
	int age;
	
	printf("Nhap vao tuoi cua hanh khach: ");
	scanf("%d",&age);
	
	if(age<=0){
		printf("Tuoi nhap vao khong dung");
	}else{
		double defaultPrice = 20000;
		double ticketPrice;
		
		if(age<=6){
			ticketPrice = 0;
		}else if(age<=18){
			ticketPrice = defaultPrice*50/100;
		}else if(age<=60){
			ticketPrice = defaultPrice;
		}else{
			ticketPrice = defaultPrice*70/100;
		}
		
		printf("Hanh khach %d tuoi, gia ve: %.0lf (VND)",age,ticketPrice);
	}
}

