#include<stdio.h>

int main(void) {
	
	int numerosecreto = 42;
	int chute;
	int numerodetentativas = 1;
	
	printf("tente adivinhar o numero:\n");
	
	while (numerodetentativas <= 5) {
	
	printf("Tentativa %d de 5\n",numerodetentativas);
	scanf("%d", &chute);
	
	int acertou = (chute == numerosecreto);
	int menor = (chute < numerosecreto);
	int acabou = (numerodetentativas < 5);
	
	if (acertou) {
		printf("Voce acertou !\n");
		printf("Voce acertou em %d tentativa(s)",numerodetentativas);
		break;
	} else {
		printf("Voce errou\n");
	 	if (menor) {
		printf("O numero inserido e menor que o numero secreto\n");
		} else {
		printf("O numero inserido e maior que o numero secreto\n");
		}
	}
		if (acabou) {
		printf("Tente Novamente !\n");
		}
	if (numerodetentativas == 5) {
		printf("Acabaram as tentativas !");
	}
	numerodetentativas++;
	}
}
	
