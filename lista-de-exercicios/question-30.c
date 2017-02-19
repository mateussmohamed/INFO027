/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool
    Até 25 litros, desconto de 2% por litro
    Acima de 25 litros, desconto de 4% por litro
Gasolina
    Até 25 litros, desconto de 3% por litro
    Acima de 25 litros, desconto de 5% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
(codificado da seguinte forma: A-álcool, G-gasolina), 
calcule e imprima o valor a ser pago pelo cliente sabendo-se 
que o preço do litro da gasolina é R$ 2,70 e o preço do litro do álcool é R$ 1,90.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
    char tipo;
    int qtdLitros = 0;
    float valorPago = 0, valorAlcool = 1.90, valorGasolina = 2.70;

    printf("Qual o tipo de combustível A-álcool | G-gasolina: ");
    scanf("%c", &tipo);
    printf("Quantos litros de combustível: ");
    scanf("%d", &qtdLitros);

    if (qtdLitros <= 25) {
        if(tipo == 'A'){
            valorAlcool = valorAlcool * 0.98;
            valorPago = qtdLitros * valorAlcool;
        }else if(tipo == 'G'){
            valorGasolina = valorGasolina * 0.97;
            valorPago = qtdLitros * valorGasolina;
        }
    }else{
        if(tipo == 'A'){
            valorAlcool = valorAlcool * 0.96;
            valorPago = qtdLitros * valorAlcool;
        }else if(tipo == 'G'){
            valorGasolina = valorGasolina * 0.95;
            valorPago = qtdLitros * valorGasolina;
        }
    }

    printf("O valor pago é: R$ %.2f ", valorPago);

	return 0;
}
