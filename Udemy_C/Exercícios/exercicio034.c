
#include<stdio.h>
#include<stdlib.h>

/*
    Escreva um programa que controle o acesso de pessoas em um restaurante.
    O restaurante tem a capacidade de 40 lugares, que não podera ser ultrapassada.
    O controle será feito através de códigos:

    0 - Encerrar o programa
    1 - Entrar uma pessoa no restaurante
    2 - Sair uma pessoa no restaurante
    3 - Mostrar o total de lugares disponiveis no restaurante
    4 - Mostrar o total de pessoas que entraram no restaurante
    5 - Mostrar o total de pessoas que saíram do restaurante
*/

int main(){

    int num = 0, lugarVazio = 40, entrada = 0, saida = 0;
    
    
    
    
    do
    {   
        system("cls");
        printf("\n=============== Opcoes ================\n\t0 - Sair\n\t1 - Entrada pessoa\n\t2 - Saida pessoa\n\t3 - Total de lugares disponiveis\n\t4 - Total de entrada de pessoas\n\t5 - Total de saida de pessoas\n======================================");
        printf("\nDigite a opcao desejada:");
        scanf("%d", &num);
        switch (num)
        {
        case 0:
            printf("\nPrograma Encerrado!!\n\nFuck You!!");
            break;
        case 1:
            if(lugarVazio > 0){
            printf("\nEntrada de uma pessoa!!!\n\n");
            entrada++;
            lugarVazio--;
            }
            else{
                printf("\nRestaurante Lotado!!!\n\n");
            }
            break;
        case 2:
            if(lugarVazio == 40){
                printf("\nNao tem niguem pra sair!!!\n\n");
            }
            else{
                printf("\nSaida de uma pessoa!!\n\n");
                lugarVazio++;
                saida++;
            }
            break;
        case 3:
            printf("\nHa %d lugares disponiveis!!\n\n", lugarVazio);
            break;
        case 4:
            printf("\nTotal de pessoas que entraram: %d\n\n", entrada);
            break;
        case 5:
            printf("\nTotal de pessoas que sairam: %d\n\n", saida);
            break;
        default:
            printf("\nOpcao Invalida!!!\n\n");
            break;
       
        }
       
        system("pause");
    } while (num != 0);
    system("pause");
    return 0;
    
}