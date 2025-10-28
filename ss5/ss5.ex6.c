#include <stdio.h>
int main(){
	float a,b, result;
	
	printf("Nhap so thuc a: ");
	scanf("%f",&a);
	printf("Nhap so thuc b: ");
	scanf("%f",&b);
	
	char pheptoan;
	printf("Nhap vao phep toan (+,-,*,/): ");
	fflush(stdin);
	scanf("%c",&pheptoan);
	
	switch(pheptoan){
		case '+':
			result = a+b;
			printf("Tong cua 2 so %.1f va %.1f la: %.1f",a,b,result);
			break;
		case '-':
			result = a-b;
			printf("Hieu cua 2 so %.1f va %.1f la: %.1f",a,b,result);
			break;
		case '*':
			result = a*b;
			printf("Tich cua 2 so %.1f va %.1f la: %.1f",a,b,result);
			break;
		case '/':
			if(b==0){
				printf("Loi: Khong the chia cho 0");
			}else{
				result = a/b;
				printf("Thuong cua 2 so %.1f va %.1f la: %.1f",a,b,result);	
			}			
			break;
		default:
			printf("Loi: Toan tu khong hop le");
	}
}

