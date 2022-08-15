#include<stdio.h>

int main(void) {
	
	int numerosecreto = 50;
	int chute;
	int numerodetentativas = 1;
		
	printf("tente adivinhar o numero:\n");
	
	while (numerodetentativas <= 5) {
	
	int pontosperdidos;
	int pontuacaofinal = 1000;
	
	printf("Tentativa %d de 5\n",numerodetentativas);
	scanf("%d", &chute);
	
	int acertou = (chute == numerosecreto);
	int menor = (chute < numerosecreto);
	int acabou = (numerodetentativas < 5);
	int pontosperdidos = (((chute - numerosecreto)/2));	
	int pontuacaofinal = pontuacaofinal - pontosperdidos;
	
	if (acertou){
		printf("Voce acertou !\n");
		printf("Voce acertou em %d tentativa(s)\n",numerodetentativas);
		printf("Voce fez %d pontos",pontuacaofinal);
		break;
	} else {

		printf("Voce errou\n");
		printf("Pontuacao: %d\n",pontuacaofinal);
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
