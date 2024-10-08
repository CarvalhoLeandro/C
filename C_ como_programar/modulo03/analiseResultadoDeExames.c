#include<stdio.h>

/*O programa a seguir vai analisar aprovações e reprovações de 10 alunos e se 8 alunos forem aprovados o instrutor vai receber um bônus */

int main(){

    /*inicializando variáveis*/
    int cont = 0; //variável do sentinela
    int aprovado = 0;//contador de aprovados
    int reprovado = 0;//contador de reprovado
    int resultado; // recebe (aprovado ou reprovado)

    printf("\n");
    while (cont < 10)
    {
        printf("%d - Digite o resultado (1 - Aprovado / 2 - reprovado): ", cont + 1);
        scanf("%d", &resultado);

        if(resultado == 1){
            aprovado++;
            cont++;
        }else if (resultado == 2){
            reprovado++;
            cont++;
        }else{
            printf("\n\nNumero Invalido\n\n");
        }
    }

    printf("\nAprovados: %d\n", aprovado);
    printf("Reprovados: %d\n\n", reprovado);
    
    if(aprovado >= 8){
        printf("BONUS PARA O INSTRUTOR!!\n\n");
    }
    
    return 0;
    
}