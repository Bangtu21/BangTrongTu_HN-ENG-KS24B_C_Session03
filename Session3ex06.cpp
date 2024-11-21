#include <stdio.h>
int main  (){
	int a, h;
	printf("Nhap do dai canh va chieu cao cua tam giac ");
	scanf("%d %d",&a,&h);
	float s = (a*h)/2;
	printf("Dien tich cua hinh tam giac la %.1f", s);
	return 0;
}
