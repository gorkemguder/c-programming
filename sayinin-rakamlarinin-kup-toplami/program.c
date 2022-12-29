# include <stdio.h>

// abc = a^3 + b^3 + c^3

int main () {
	int sayi=0, basamak, i=100, kontrol=0;
	while (i<=999){
		sayi += i;
		kontrol = 0;
		while (sayi > 0){
            basamak = sayi % 10;
            kontrol += (basamak * basamak) * basamak;
            sayi /= 10;
      	}
      	if (i == kontrol){
      		printf("\n%d sayisinin rakamlarinin kupunun toplami %d etmektedir. Dolayisiyla;\n", i, kontrol);
			printf("%d sayisi esitligi saglamaktadir.\n", i);
		}
		else if (i != kontrol){
      		printf("\n%d sayisinin rakamlarinin kupunun toplami %d etmektedir. Dolayisiyla;\n", i, kontrol);
			printf("%d sayisi esitligi saglamamaktadir.\n", i);
		}
		i++;
	}
}
