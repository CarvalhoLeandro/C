
#include<stdio.h>
#include<stdlib.h>

/*
    Escreva um programa que leia o código numérico da opção de um menu e execute os comandos do menu.

    0 - Encerrar o programa
    1 - Incluir uma panela no estoque
    2 - Incluir uma chaleira no estoque
    3 - Incluir uma vassoura no estoque
    4 - Relatório de inclusões
*/

int main(){

    int num = 0, panela = 0, chaleira = 0, vassoura = 0;
    
    do
    {
        printf("\n=============== Opcoes ================\n\t0 - Sair\n\t1 - Panela\n\t2 - Chaleira\n\t3 - Vassoura\n\t4 - Relatorio\n======================================");

        printf("\nDigite uma opcao:");
        scanf("%d", &num);
        system("cls");
        if(num == 1)
            panela++;
        else if(num == 2)
            chaleira++;
        else if(num == 3)
            vassoura++;
        else if(num == 4){
            printf("\n============== Relatorio Estoque ===============\n\t\t%d Panelas\n\t\t%d Chaleiras\n\t\t%d Vassouras\n=================================================\n", panela,chaleira,vassoura);

            printf("\n=============== Opcoes ================\n\t0 - Sair\n\t1 - Panela\n\t2 - Chaleira\n\t3 - Vassoura\n\t4 - Relatorio\n======================================");

            printf("\nDigite uma opcao:");
            scanf("%d", &num);
            system("cls");
            if(num == 1)
                panela++;
            else if(num == 2)
                chaleira++;
            else if(num == 3)
                vassoura++;
        }
    } while (num != 0);
    


    system("pause");
    return 0;
    
}