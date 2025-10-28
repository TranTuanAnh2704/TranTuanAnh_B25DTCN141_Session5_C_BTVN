#include <stdio.h>
int main(){
	int a,b;
	
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",b);
	
	if(a==0){
		if(b==0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuon trinh vo nghiem");
		}
	}else{
		float x = -b/a;
		printf("Phuon trinh co 1 nghiem: %.2f",x);
	}
}
