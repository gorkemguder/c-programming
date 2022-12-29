#include <stdio.h>

int main() {
	int i;
	printf("Gun sayisini ogrenmek istediginiz ayin kacinci oldugunu giriniz: (1-12)");
	scanf("%d", &i);
	switch (i){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Girdiginiz ay 31 gundur.");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Girdiginiz ay 30 gundur.");
			break;
		case 2:
			printf("Girdiginiz ay 28 gundur.");
			break;
		default:
			printf("Hatali deger girdiniz.");
	}
}
