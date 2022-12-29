#include <stdio.h>
#include <stdlib.h>

void fact(int *a, int *s){
	int i;
	if (*a == 0){
		*s = 1;
	}
	else{
		for (i=1;i<=*a;i++){
			*s *= i;
		}
	}
}

int main() {
	int sayi, fact_sonuc=1;
	printf("Faktoriyel hesabi icin sayi giriniz: ");
	scanf("%d", &sayi);
	fact(&sayi, &fact_sonuc);
	printf("%d sayisinin faktoriyeli : %d", sayi, fact_sonuc);
	return 0;
}
