#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 10;
	int Arr[size];
	int i, k, j;
	for (i=0;i<size;i++){
		printf("%d. sayiyi giriniz: ", i+1);
		scanf("%d", &Arr[i]);
	}
	for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (Arr[j] == Arr[i]) {
            for (k = j; k < size; k++){
            	Arr[k] = Arr[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
	for (i=0;i<size;i++){
		printf("%d\t", Arr[i]);
	}
	return 0;
}
