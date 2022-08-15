#include<stdio.h>

int main(void) {
	
	int numerosecreto = 50;
	int chute;
	int numerodetentativas = 1;
	
	printf("tente adivinhar o numero:\n");
	int pontos = 1000;
	while (1) {
	
	printf("Tentativa %d de 5\n",numerodetentativas);
	scanf("%d", &chute);
	
	int acertou = (chute == numerosecreto);
	int menor = (chute < numerosecreto);
	int acabou = (numerodetentativas < 5);
	int pontosperdidos;
	if (acertou) {
		printf("Voce acertou !\n");
		printf("Voce acertou em %d tentativa(s)",numerodetentativas);
		break;
	} else {		
		printf("Voce errou\n");
	 	if (menor) {
		 pontosperdidos = (chute - numerosecreto) / 2;
		 pontos = pontos - (-1 * pontosperdidos);
		printf("O numero inserido e menor que o numero secreto\n");
		} else {
		pontosperdidos = (chute - numerosecreto) / 2;
		pontos = pontos - pontosperdidos;
		printf("O numero inserido e maior que o numero secreto\n");
		}
		printf("Pontuacao:%d\n",pontos);
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
	
