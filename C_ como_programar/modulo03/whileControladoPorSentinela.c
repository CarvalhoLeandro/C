#include<stdio.h>

/*Programa de média da turma controlado por sentinela*/
/*O programa recebe uma quantidade arbitrária de notas até que o valor sentinela seja digitado*/

/*Pra repetições com sentinelas devemos ler o primeiro dado antes do while*/

int main(){

    int cont = 0;
    float soma = 0;
    float nota;
    float media;

    printf("Digite a nota ou -1 para sair:");
    scanf("%f", &nota);
    
    while (nota != -1)//enquanto -1 não for digitado execute:
    {
        soma += nota;
        cont += 1;

        printf("Digite a nota ou -1 para sair:");
        scanf("%f", &nota);
    }

    /*Tratamento para não ocorrer erro de divisão por zero*/
    if(cont != 0){
        media = soma / cont;
        printf("\n\nMedia da turma: %.2f", media);
    }
    else{
        printf("\n\nNao ha notas lancadas!!\n\n");
    }

    return 0;
}