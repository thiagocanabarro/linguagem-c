#include <stdio.h>

int main(void) {
	
	float X,Y,M;
	
	
	printf("Digite o valor de X: ");
	scanf("%f",&X);
	printf("Digite o valor de Y: ");
	scanf("%f",&Y);
	
	M = (X * Y);
	
	printf("\nValor de X: %.f\n", X);
	printf("Valor de Y: %.f\n", Y);
	
	printf("Resultado da multiplicacao: %.f", M);
	
}

