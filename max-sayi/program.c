#include <stdio.h>
#include <stdlib.h>

void max_hesapla(int *x,int *y,int *t){
	if (*x > *y){
		*t = *x;
	}
	else if (*x < *y){
		*t = *y;
	}
}

int main() {
	int sayi1, sayi2, max=0;
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	max_hesapla(&sayi1, &sayi2, &max);
	printf("Maksimum sayi : %d", max);
	return 0;
}
