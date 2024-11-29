#include<stdio.h>
#include<stdlib.h>

int main(){

    float nota1, nota2, nota3, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA media do aluno foi de %.2f\n\n", media);

    system("pause");
    return 0;
    
}