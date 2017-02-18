/*
Escreva um programa em C, que receba como entrada três inteiros representando uma data (dia, mês e ano), 
calcule e escreva como saída o dia seguinte (dia, mês e ano). 
Lembre-se que os meses 01, 03, 05, 07, 08, 10 e 12 possuem 31 dias, 
os meses 04, 06, 09 e 11 possuem 30 dias e o mês 02 pode possuir 28 ou 29 dias (em caso de ano bissexto). 
Um ano é bissexto se ele é divisível por 4. Mas, se o ano é divisível por 100, e não for divisível por 400, ele não é bissexto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia = 0, mes = 0, ano = 0, bissexto = 0;
    printf("Informe uma data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
        bissexto = 1;
    }

    dia++;

    if (bissexto == 1 && mes == 2) {
        if( dia == 30 ) {
            dia = 1;
            mes++;
        }
    } else {
        if (dia == 32 && ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )) {
            dia = 1;
            mes++;
            if (mes == 13 ) {
                dia = 1;
                mes = 1;
                ano++;
            }
        } else if (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
            dia = 1;
            mes++;
        }else if (dia == 29 && mes == 2) {
            dia = 1;
            mes ++;
        }

    }
    
    printf("O dia seguinte é: %d/%d/%d ", dia, mes, ano);

    return 0;
}