#include <stdio.h>
#include <stdlib.h>

/*Exerc�cio 01  - Escreva um programa em C que encontre o menor inteiro
positivo n que atenda as seguintes condi��es :
n / 3 = x inteiro e resto 2
n / 5 = y inteiro e resto 3
n / 7 = z inteiro e resto 4
*/

int main() {
    int n = 1;

    while (n) {
        if (n % 3 == 2 && n % 5 == 3 && n % 7 == 4) {
            printf("O %d e o menor inteiro!!\n", n);
            break;
        }
        n++;
    }
    return 0;
}
