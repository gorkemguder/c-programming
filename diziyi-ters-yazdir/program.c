#include <stdio.h>
#include <stdlib.h>

void ters_yazdir(int *k[]){
	int p;
	printf("Ters Hali :\n");
	for (p=4;p>=0;p--){
		printf("%d", *k[p]);
	}
}

int main() {
	int A[5];
	int i;
	for (i=0;i<5;i++){
		printf("Dizi icin %d. veriyi giriniz: ", i+1);
		scanf("%d", &A[i]);
	}
	ters_yazdir(&A);
	return 0;
}
