#include <stdio.h>
int main(){
	int a, sum = 0;
	printf("Nhap 1 so nguyen co 4 chu so: ");
	scanf("%d",&a);
	sum += a % 10;
	a /= 10;
	sum += a % 10;
	a /= 10;
	sum += a % 10;
	a /= 10;
	sum += a % 10;
	printf("Tong cac chu so la: %d", sum);
	return 0;
}
