#include <stdio.h>
int main(){
	int a, dao = 0;
	printf("Nhap 1 so nguyen co 4 chu so: ");
	scanf("%d",&a);
	dao += a % 10 * 1000;
	a /= 10;
	dao += a % 10 * 100;
	a /= 10;
	dao += a % 10 * 10;
	a /= 10;
	dao += a % 10;
	printf("So nghich dao la %d", dao);
	return 0;
	
}
