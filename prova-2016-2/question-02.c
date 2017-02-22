/*

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, premio;
    int m, n, m1, c1, d1, u1, m2, c2, d2, u2;

    printf("Informe o valor da aposta: ");
    scanf("%f", &valor);
    printf("Informe o numero apostado: ");
    scanf("%d", &n);
    printf("Informe o numero sorteado: ");
    scanf("%d", &m);

    m1 = n / 1000;
    n = n % 1000;
    c1 = n / 100;
    n = n % 100;
    d1 = n / 10;
    u1 = n % 10;

    m2 = m / 1000;
    m = m % 1000;
    c2 = m / 100;
    m = m % 100;
    d2 = m / 10;
    u2 = m % 10;

    d1 = d1 * 10;
    d2 = d2 * 10;
    int somaD1U1 = d1+u1;
    int somaD2U2 = d2+u2;

    int estaNoGrupo = somaD1U1 - somaD2U2;
    
    if(estaNoGrupo < 0) { 
        estaNoGrupo = -estaNoGrupo;
    }

    if (m1 == m2 && c1 == c2 && d1 == d2 && u1 == u2) {
        premio = valor * 3000;
    }else if (c1 == c2 && d1 == d2 && u1 == u2) {
        premio = valor * 500;
    }else if (d1 == d2 && u1 == u2) {
        premio = valor * 50;
    }else if( (estaNoGrupo >= 1 && estaNoGrupo <= 4 &&  somaD1U1 != 0 && somaD2U2 != 0 ) || (
        ((somaD1U1 >= 97 && somaD1U1 <= 99) || somaD1U1 == 0 ) &&
        ((somaD2U2 >= 97 && somaD2U2 <= 99) || somaD2U2 == 0 ) )
    ){
        premio = valor * 16;
    }

    printf("O valor do premio recebido é : %.2f", premio);

    return 0;
}