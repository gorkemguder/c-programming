#include <stdio.h>
#include <stdlib.h>

void asalkontrol (int k){
	int i, ctrl=0;
	printf("Girdiginiz sayi : %d\n", k);
	for (i=2; i<=k/2 ;i++){
		if (k % i == 0){
			printf("Girdiginiz sayi %d sayisina tam bolunebiliyor.\n", i);
			ctrl = 1;
		}
	}
	if (ctrl == 0){
		printf("Sayi asaldir.");
	}
	else if (ctrl == 1){
		printf("Sayi asal degildir.");
	}
}

int main (){
	int sayi;
	printf("Asal kontrol icin sayi giriniz : ");
	scanf("%d", &sayi);
	asalkontrol(sayi);
}
