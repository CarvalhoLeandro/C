#include<stdio.h>
#include<string.h>

/* Exercício  11 - Escrever um programa em C que leia uma cadeia de caracteres
e imprima todas as palavras que contenham três ou mais vogais.*/


int main()
{
    char frase[80], palavra[50];
    int i, j, contador_vogais;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    strlwr(frase);


    for (i = 0, j = 0; frase[i] != '\0'; i++) {
        /
        if (frase[i] == ' ' || frase[i] == '\n') {
            palavra[j] = '\0';

            contador_vogais = 0;


            for (int k = 0; palavra[k] != '\0'; k++) {
                if (palavra[k] == 'a' || palavra[k] == 'e' || palavra[k] == 'i' ||
                    palavra[k] == 'o' || palavra[k] == 'u') {
                    contador_vogais++;
                }
            }

            /
            if (contador_vogais >= 3) {
                printf(" %s tem 3 ou mais vogais.\n", palavra);
            }
            j = 0;
        }
        else {
            palavra[j++] = frase[i];
        }
    }

    return 0;
}
