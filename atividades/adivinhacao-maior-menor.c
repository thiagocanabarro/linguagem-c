#include <stdio.h>

int main(void) {
	
	int numerosecreto = 42;
	int chute;
	
	printf("Tente adivinhar o numero secreto:\n");
	printf("Insira:");
	scanf("$d",chute);
	
	if (chute == numerosecreto) {
		printf("Voce acertou !");
	}
	else {
		printf("Voce errou\n");
		if (chute > numerosecreto) {
		printf("O numero inserido foi maior que o numero secreto");
		}
		if (chute < numerosecreto) {
		printf("O numero inserido foi menor que o numero secreto");	
		}
	}
}
