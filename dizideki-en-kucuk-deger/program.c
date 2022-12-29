#include <stdio.h>
#include <stdlib.h>

int main() {
	int A[]={51,12,18,33,19,20,37};
	int i, kucuk=100, buyuk=0;
	for (i=0;i<7;i++){
		if ( A[i] < kucuk){
			kucuk = A[i];
			if ( A[i] > buyuk){
				buyuk = A[i];
			}
		}
		else if ( A[i] > buyuk){
			buyuk = A[i];
		}
	}
	printf("Dizideki en kucuk sayi : %d\n", kucuk);
	printf("Dizideki en buyuk sayi : %d", buyuk);
	return 0;
}
