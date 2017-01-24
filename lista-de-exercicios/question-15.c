#include <stdio.h>
#include <stdlib.h>

/*
	Questão 15 - Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
	suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
	chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e
	calcular a altura do prédio.
	
	Digamos que vc tenha 1,70m e sua sombra 50cm 
	e a sombra do predio 15m. 
	Obs.: 50 cm = 0,5m 
	Faremos uma regra de três simples: 
	1,70m está para 0,5 m assim como x está para 15m. 
	Logo: 
	1,70/0,5 = x/15 
	0,5x = 25,5 
	x = 25,5/0,5 
	x = 51 m (a altura do prédio). 
	Isso é razão e proporção! 
	
	alturaDo predio = altura da pessoa
	_______________   ________________
	
	sombraPredio      sombra da pessoa
	
	altura do predio = altura da pessoa * sombra do predio
	                   ___________________________________
	                   sombra da pessoa
	
	
*/

int main(){
	
	float alturaDoPredio = 0, alturaPessoa = 0, sombraPessoa = 0, sombraDoPredio = 0;
	
	printf("Insira o tamanho da sua altura: ");
	scanf("%f", &alturaPessoa);

	printf("Insira o tamanho da sua sombra: ");
	scanf("%f", &sombraPessoa);
	
	printf("Insira o tamanho da sombra do predio: ");
	scanf("%f", &sombraDoPredio);
	
	alturaDoPredio = ( alturaPessoa * sombraDoPredio ) / sombraPessoa;
		
	printf("A altura do predio e: %.2f", alturaDoPredio);
	
	return 0;
}
