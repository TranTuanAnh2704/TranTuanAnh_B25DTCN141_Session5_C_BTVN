#include <stdio.h>
int main(){
	char kitu;
	printf("Nhap vao 1 ki tu chu thuong: ");
	scanf("%c",&kitu);
	
	if(kitu<97 || kitu>122){
		printf("Ban phai nhap vao ki tu tu a den z");
	}else{
		char chuhoa = kitu-32;
		printf("Ki tu chua hoa: %c",chuhoa);
	}
	
}

