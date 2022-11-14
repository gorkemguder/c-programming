#include <stdio.h>

int main() {
	int sayi;
	printf("Sayi giriniz:");
	scanf("%d", &sayi);
	if (sayi % 2 == 0){
		printf("%d sayisi cift sayidir.", sayi);
	}
	else if (sayi % 2 != 0){
		printf("%d sayisi tek sayidir.", sayi);
	}
	else {
		printf("Hata!");
	}
}
