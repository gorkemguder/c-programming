#include <stdio.h>
#include <stdlib.h>

void fibonacci (int *k){
	int i, t1=0, t2=1, nexterm;
	FILE *dosya = fopen("sonuc.txt", "w");
	for (;nexterm<=*k;){
		fprintf(dosya, "%d\t", t1);
		nexterm = t1 + t2;
		t1 = t2;
		t2 = nexterm;
	}
}

int main() {
	int son_sayi;
	printf("Fibonacci hangi degere kadar verilsin? ");
	scanf("%d", &son_sayi);
	fibonacci(&son_sayi);
	
	return 0;
}
