#include <stdio.h>

int main(int argc, char const *argv[])
{
    char n1[20];
    char n2[20];
    char n3[20];

    printf("\nDigite o 1º nome: ");
    fgets(n1, 20, stdin);
    printf("\nDigite o 2º nome: ");
    fgets(n2, 20, stdin);
    printf("\nDigite o 3º nome: ");
    fgets(n3, 20, stdin);
    printf("\n1º nome: %s", n1);
    printf("2º nome: %s", n2);
    printf("3º nome: %s\n", n3);
    return 0;
}
