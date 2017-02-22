/*
Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valorMercadoria, valorEntrada;
    int valorPrestacao, qtdPrestacoes;

    printf("Informe o valor da mercadoria: ");
    scanf("%f", &valorMercadoria);
    printf("Informe a quantidade de prestações: ");
    scanf("%d", &qtdPrestacoes);

    valorEntrada = valorMercadoria - ((float)valorMercadoria / (qtdPrestacoes+1));
    valorPrestacao = (valorMercadoria - valorEntrada) / qtdPrestacoes;

    printf("Valor da entrada: R$ %.2f \n", valorEntrada);
    printf("Valor de %d prestações : R$ %.2d \n", qtdPrestacoes, valorPrestacao);

    return 0;
}