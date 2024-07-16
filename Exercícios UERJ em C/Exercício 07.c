#include<stdio.h>
#include<stdlib.h>


#define TAM 50
#define TOP 5

/* Exercício 07 - Escreva um programa em C onde, se possa representar os nomes e as notas de alunos de um curso da
universidade. O programa deverá imprimir os nomes dos cinco alunos que obtiverem as maiores notas
acima da média da turma. Considerar que a turma tenha 50 alunos. Usar a estrutura multivalorada vista em
sala de aula.*/

typedef struct{
    char nome[50];
    float nota;
}Cad;

float media(Cad vet[], int tam);
void ordenar_notas(Cad vet[], int tam);
//-------------------------------- Principal
int main()
{
    Cad aluno[TAM];
    int i;
    float media_turma;

    for(i = 0;i < TAM;i++){
        printf("Aluno %02d\n",i+1);
        printf("Digite o nome: ");
        scanf("%s", &aluno[i].nome);
        printf("Digite a nota: ");
        scanf("%f", &aluno[i].nota);
        printf("\n");
    }
    ordenar_notas(aluno,TAM);
    media_turma = media(aluno,TAM);
    printf("\nMedia da turma: %.2f",media_turma);


    printf("\nAlunos com as %d maiores notas acima da media: \n",TOP);
    int cont = 0;
    for(i = 0;i < TAM && cont < TOP;i++){
        if(aluno[i].nota > media_turma){
            printf("%s: %.2f\n",aluno[i].nome,aluno[i].nota);
            cont++;
        }
    }

}
//--------------------------------Calcular media da turma
float media(Cad vet[], int tam){
    float soma;
    int i;
    for(i = 0;i < tam;i++)
        soma += vet[i].nota;

    return soma / tam;
}
//------------------------ Ordenar notas em ordem decrescente
void ordenar_notas(Cad vet[], int tam){
    int i,j;
    Cad aux;

    for(i = 0;i < tam - 1; i++){
        for(j = 0; j < tam - i - 1; i++){
            if(vet[j].nota < vet[j+1].nota){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}
