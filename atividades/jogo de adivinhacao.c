#include<stdio.h>

int main() {
	
	int numerosecreto = 42;
	int chute;
		
	printf("Estou pensando num numero, tente adivinhar \n");
	printf("Qual numero estou pensando ? ");
	scanf("%d", &chute);
	
		if(numerosecreto == chute) {
		printf("Voce Acertou !");	
		}
		else {
		printf("Voce Errou !\n");
		printf("O numero que eu estava pensando era %d",numerosecreto);
		}

}


