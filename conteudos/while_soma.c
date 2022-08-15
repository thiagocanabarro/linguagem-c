#include<stdio.h>

int main(void) {
	
	int soma = 0;
	int contador = 1;
	
	while (contador <= 100) {
		printf("\n%d",contador);
		soma = contador + soma; 
		contador++;
	}	
	printf("\n%d Soma dos termos: ",soma);
}
