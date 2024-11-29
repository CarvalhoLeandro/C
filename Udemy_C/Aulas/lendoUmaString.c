#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome1[80], nome2[80];


    printf("Digite um nome: ");
    fgets(nome2, 80, stdin);

    printf("Digite outro nome: ");
    scanf("%[^\n]", nome1);

    printf("\n\nPrimeiro nome: %s\n", nome1);
    printf("Segundo nome: %s\n\n", nome2);

    system("pause");
    return 0;
    
}