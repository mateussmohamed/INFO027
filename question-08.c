#include <stdio.h>
#include <stdlib.h>

/*
	Questão 8 - Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), 
	ler um valor de temperatura em Fahrenheit e exibi-lo em Celsius
*/

int main(){
	
	float tempC = 0, tempF = 0;
	
	printf("Insira a temperatura em Fahrenheit: ");
	scanf("%f", &tempF);
	
	tempC = ((tempF - 32) * 5 ) / 9;
	
	printf("A temperatura %.2f em graus Fahrenheit equivale a e: %.2f Celsius", tempF, tempC);
	
	return 0;
}
