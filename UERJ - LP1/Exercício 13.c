#include<stdio.h>
/* Exercício 13 - Dados três vetores com 10 posições cada um,
preenchidos com números inteiros, fazer um programa em C que,
após a leitura dos vetores coloque-os em ordem crescente.*/

void print_vet(int *vetor , int tam);
void ordenar(int *vetor,int tam);

int main()
{
    int i,tam = 5;
    int vet1[tam],vet2[tam],vet3[tam];


    printf("Digite 5 valores aleatorios para vetor 01: \n");
    for(i = 0;i < tam;i++)
        scanf("%d",&vet1[i]);

    printf("Digite 5 valores aleatorios para vetor 02: \n");
    for(i = 0;i < tam;i++)
        scanf("%d",&vet2[i]);

    printf("Digite 5 valores aleatorios para vet0r 03: \n");
    for(i = 0;i < tam;i++)
        scanf("%d",&vet3[i]);

    printf("\nVetor 01 desordenado: ");
    print_vet(vet1,tam);
    ordenar(vet1,tam);
    printf("\nVetor 01 ordenado: ");
    print_vet(vet1,tam);

    printf("\n\nVetor 02 desordenado: ");
    print_vet(vet2,tam);
    ordenar(vet2,tam);
    printf("\nVetor 02 ordenado: ");
    print_vet(vet2,tam);

    printf("\n\nVetor 03 desordenado: ");
    print_vet(vet3,tam);
    ordenar(vet3,tam);
    printf("\nVetor 03 ordenado: ");
    print_vet(vet3,tam);

    printf("\n");

    return 0;
}

void print_vet(int *vetor,int tam){

    int i;
    for(i = 0;i < tam;i++)
        printf("%d ",vetor[i]);
}

void ordenar(int *vetor,int tam){

    int i=0,j=0,aux=0;

    //for(i = 1;i <= tam;i++){
        for(j = 0;j < tam - 1;j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    //}
}
