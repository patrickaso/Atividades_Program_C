#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float n1, n2, soma1, sub1, mult1, div1;
	
	// entrada de dados 1
	printf("\n Insira o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("\n Insira o segundo numero: ");
	scanf("%f",&n2);
	
	/*
	A execução dos calculos será executada por:
	Soma - Subtração - Multiplicação - Divisão 
	*/
	
	soma1 = n1 + n2;
	printf("\n A soma do primeiro com o segundo é: %f ", soma1);
	
	
	sub1 = n1 - n2;
	printf("\n A subtração do primeiro com o segundo é: %f ", sub1);		
	
	mult1 = n1 * n2;
	printf("\n A multiplicação do primeiro com o segundo é: %f ", mult1);
		
	
	div1 = n1 / n2;
	printf("\n A divisão do primeiro com o segundo é: %f ", div1);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
