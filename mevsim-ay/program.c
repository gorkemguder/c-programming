#include <stdio.h>

int main() {
	int islem;
	arrDisp();
	printf("\n1.Ilkbahar\n2.Yaz\n3.Sonbahar\n4.Kis\n");
	arrDisp();
	printf("\nIslem numarasi giriniz: ");
	scanf("%d", &islem);
	switch (islem){
		case 1:
			printf("Mart, Nisan, Mayis");
			break;
		case 2:
			printf("Haziran, Temmuz, Agustos");
			break;
		case 3:
			printf("Eylul, Ekim, Kasim");
			break;
		case 4:
			printf("Aralik, Ocak, Subat");
			break;
		default:
			printf("Hatali islem numarasi girisi!");
			break;
	}	
}

int arrDisp (){
	int i;
	for (i=1;i<10;i++){
		printf("-");
	}
}
