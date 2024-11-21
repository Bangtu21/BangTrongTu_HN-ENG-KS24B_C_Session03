#include <stdio.h>
int main(){
	int r;
	float pi = 3.14;
	printf("Moi ban nhap ban kinh hinh tron r=");
	scanf("%d", &r);
	float c = r * 2 * pi;
	float s = r * r * pi;
	printf("Chu vi hinh tron la %.2f\n", c);
	printf("Dien tich hinh tron la %.2f", s);
	
	return 0;
}
