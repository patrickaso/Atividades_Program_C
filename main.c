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
	A execu��o dos calculos ser� executada por:
	Soma - Subtra��o - Multiplica��o - Divis�o 
	*/
	
	soma1 = n1 + n2;
	printf("\n A soma do primeiro com o segundo �: %f ", soma1);
	
	
	sub1 = n1 - n2;
	printf("\n A subtra��o do primeiro com o segundo �: %f ", sub1);		
	
	mult1 = n1 * n2;
	printf("\n A multiplica��o do primeiro com o segundo �: %f ", mult1);
		
	
	div1 = n1 / n2;
	printf("\n A divis�o do primeiro com o segundo �: %f ", div1);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
