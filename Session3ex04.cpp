#include <stdio.h>
int main(){
	int toan, van, anh;
	float sum, avgNumber;
	printf("Nhap diem toan van anh ");
	scanf("%d %d %d", &toan, &van, &anh);
	sum = toan + van + anh;
	avgNumber= (float)sum/3;
	printf("Tong diem la %.2f\n", sum);
	printf("Trung binh la %.2f", avgNumber);
	return 0;
	
}
