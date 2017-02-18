/*
 Escreva um programa em C que calcule o desconto previdenciário de um funcionário. Dado um salário, 
 o programa deve imprimir o valor do desconto proporcional ao mesmo. O cálculo segue a regra: 
 o desconto é de 11% do valor do salário, entretanto, o valor máximo de desconto é 570,88.

Variaveis:
    salário, descontoMaximo

Entradas:
    Salário
Saídas:
    Valor do salario com desconto proporcional

 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

     float descontoMaximo = 570.88;
     float salario = 0,  novoSalario = 0, desconto = 0;

     printf("Informe o valor do salario: ");
     scanf("%f",&salario);

     desconto = salario * 0.11;

     if (desconto >= descontoMaximo){
         desconto = descontoMaximo;
     }

     novoSalario = salario - desconto;

     printf("Salario sem desconto: %.2f \n", salario);
     printf("Valor do Desconto: %.2f \n", desconto);
     printf("Salario com desconto: %.2f \n", novoSalario);

     return 0;
 }