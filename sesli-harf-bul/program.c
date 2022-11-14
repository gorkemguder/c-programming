#include <stdio.h>

int main () {
	char karakter;
	printf("Karakter giriniz: ");
	scanf("%c", &karakter);
	if (karakter == 'a' || karakter == 'e' || karakter == 'o' || karakter == 'u' || karakter == 'i'){
		printf("%c karakteri sesli harftir.", karakter);
	}
	else if (karakter != 'a' || karakter != 'e' || karakter != 'o' || karakter != 'u' || karakter != 'i') {
		printf("%c karakteri sesli harf degildir.", karakter);
	}
}
