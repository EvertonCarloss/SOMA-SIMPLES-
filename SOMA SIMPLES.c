#include <stdio.h>
#include <locale.h>

// SOMA

void main () {

setlocale(LC_ALL,"Portuguese");

// DECLARANDO VARIAVEIS.

int n1,n2, soma ;

printf("DIGITE O PRIMEIRO N�MERO:  ");
scanf("%d", &n1);
printf("DIGITE O SEGUNDO N�MERO: ");
scanf("%d", &n2);

soma = n1 + n2;

printf(" O RESULTADO DA SOMA ENTRE %d e %d � %d", n1, n2, soma);


}
