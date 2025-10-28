#include <stdio.h>
int main(){
	int a;
	int b;
	
	printf("Nhap vao so a: ");
	scanf("%d", &a);
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	
	if(a>b){
		printf("So lon hon la: %d",a);
	}else if(b>a){
		printf("So lon hon la: %d",b);
	}else{
		printf("Hai so bang nhau");
	}
}
