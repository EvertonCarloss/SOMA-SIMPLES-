#include <stdio.h>
#include <locale.h>

// SOMA

void main () {

setlocale(LC_ALL,"Portuguese");

// DECLARANDO VARIAVEIS.

int n1,n2, soma ;

printf("DIGITE O PRIMEIRO NÚMERO:  ");
scanf("%d", &n1);
printf("DIGITE O SEGUNDO NÚMERO: ");
scanf("%d", &n2);

soma = n1 + n2;

printf(" O RESULTADO DA SOMA ENTRE %d e %d É %d", n1, n2, soma);


}
