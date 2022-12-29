#include <stdio.h>

int main() {
	int i,sonsayi;
	printf("Hangi sayiya kadar devam edelim? ");
	scanf("%d", &sonsayi);
	for (i=1;i<=sonsayi;i++){
		if (i % 3 == 0 && i % 7 == 0){
			printf("%d sayisi 3'e ve 7'ye tam bolunebiliyor.\n", i);
		}
		else if (i % 3 != 0 && i % 7 != 0){
			printf("%d sayisi 3'e ve 7'ye tam bolunemiyor.\n", i);
		}
		else {
			continue;
		}
	}	
}

