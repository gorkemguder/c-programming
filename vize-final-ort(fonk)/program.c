#include <stdio.h>
#include <stdlib.h>

void ortalamahesapla(double v, double f){
	double ortalama;
	ortalama = ((v * 40) / 100) + ((f * 60) / 100);
	printf("Vize : %0.1lf | Final : %0.1lf | Ortalama Not : %0.1lf", v, f, ortalama);
}

int main (){
	double vize, final;
	printf("Vize notu nedir? ");
	scanf("%lf", &vize);
	printf("Final notu nedir? ");
	scanf("%lf", &final);
	ortalamahesapla(vize, final);
}
