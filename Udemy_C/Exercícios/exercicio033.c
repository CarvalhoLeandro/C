
#include<stdio.h>
#include<stdlib.h>

/*
    Escreva um programa que leia códigos e faça as tarefas de códigos abaixo.

    0 - Encerrar o programa
    1 - Incluir uma unidade no estoque
    2 - Excluir uma unidade no estoque
    3 - Mostrar o total disponivel no estoque
    4 - Mostrar o total de entrada no estoque
    5 - Mostrar o total de saídas no estoque
*/

int main(){

    int num = 0, estoque = 0, entrada = 0, saida = 0;
    
    do
    {   
        
        printf("\n=============== Opcoes ================\n\t0 - Sair\n\t1 - Incluir unidade\n\t2 - Excluir unidade\n\t3 - Total disponivel no estoque\n\t4 - Total de entradas no estoque\n\t5 - Total de saidas no estoque\n======================================");
        printf("\nDigite a opcao desejada:");
        scanf("%d", &num);

        switch (num)
        {
        case 0:
            printf("\nPrograma Encerrado!!\n\nFuck You!!");
            break;
        case 1:
            printf("\nUma unidade adicionada!\n");
            estoque++;
            entrada++;
            break;
        case 2:
            if(estoque > 0){
                printf("\nUma unidade retirada!\n");
                estoque--;
                saida++;
            }
            else
                printf("\nEstoque Zerado!\n");
            break;
        case 3:
            printf("\nTotal disponivel no estoque: %d\n", estoque);
            break;
        case 4:
            printf("\nTotal de entradas: %d\n", entrada);
            break;
        case 5:
            printf("\nTotal de saidas: %d\n", saida);
            break;
        default:
            printf("\nOpcao Invalida!!!\n");
            break;
        }
        
    } while (num != 0);
    system("pause");
    return 0;
    
}