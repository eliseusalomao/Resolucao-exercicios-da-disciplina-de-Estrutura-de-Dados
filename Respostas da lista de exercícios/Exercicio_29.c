#include <stdio.h>

int main() {
	int num;
	int i;
	
	for(i = 1; i <= 5; i++) {
		printf("Digite um numero\n");
		
		scanf("%d", &num);
		
		if (num > 100 && num < 200) {
			printf("Voce digitou um numero entre 100 e 200\n");
		} else {
			printf("Voce digitou um numero fora da faixa entre 100 e 200\n");
		}
	}
	
	
	
	return 0;
}
