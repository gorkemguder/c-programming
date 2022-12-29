#include <stdio.h>
#include <stdlib.h>

int main() {
	int numArr[7]= {17, 98, 65, 38, 73, 186, 22};
	int i, j, other;
	printf("Dizinin ilk hali: ");
	i=0;
	while (i<7){
		printf("%d  ", numArr[i]);
		i++;
	}
	for (i=0;i<7;i++){
		for (j=i+1;j<7;j++){ // Dizideki tum elemanlar birbiri ile karsilastirilacak.
			if (numArr[j] < numArr[i]){
				other = numArr[i]; // Buyuk olan degeri gecici degiskende sakladik.
				numArr[i] = numArr[j]; // Dizinin en basına, kucuk olan degeri koyduk.
				numArr[j] = other; // Sakladigimiz buyuk degeri ise icteki donguye aktardik.
			}
		}
	}
	printf("\nDizinin son hali: ");
	i=0;
	while (i<7){
		printf("%d  ", numArr[i]);
		i++;
	}
	return 0;
}
