/*
Para se determinar o número de lâmpadas necessárias para um cômodo de uma residência, 
existem normas que dão o mínimo de potencia de iluminação exigida por metro quadrado (m2), 
conforme a classe deste cômodo. A tabela abaixo exibe estes valores

Classe      Utilização        Potência (W) / m2
I           Quarto            12
            Sala de TV

II          Sala              
            Cozinha           15
            Varanda

III         Banheiro          20
            Escritório

Suponha que serão usadas na iluminação apenas lâmpadas de 60W e escreva um programa em C, 
que leia a classe de utilização do cômodo e suas dimensões (largura e comprimento), 
calcule e imprima o número de lâmpadas de 60W necessárias para a iluminação do cômodo.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int classe = 0, classeI = 12, classeII = 15, classeIII = 20;
    int qtdLampadas = 0, potencia = 0;
    float largura = 0, comprimento = 0, area = 0;
    
    printf("Informe a classe do comodo: ");
    scanf("%d", &classe);
    printf("Informe a largura do comodo: ");
    scanf("%f", &largura);
    printf("Informe o comprimento do comodo: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;
    

    switch(classe){
        case 1:
        potencia = area * classeI;
        qtdLampadas = potencia / 60;
        break;
        case 2:
        potencia = area * classeII;
        qtdLampadas = potencia / 60;
        break;
        case 3:
        potencia = area * classeIII;
        qtdLampadas = potencia / 60;
        break;
    }

    printf("Será necessárias %d lâmpadas para a iluminação do comodo \n", qtdLampadas);

    return 0;
}