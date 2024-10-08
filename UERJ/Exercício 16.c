#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*Exercício 16
Faça um programa em C que atenda às regras do seguinte jogo de dados. Dois jogadores estão
confrontando-se entre si, usando dois dados, numerados de 1 até 6 (dado RAND(5) + 1). Vence uma
rodada quem obtiver o maior número no lançamento. Entretanto, caso um jogador obtiver um
lançamento com dois dados iguais (por exemplo, 1 e 1, 2 e 2,....) e o outro jogador não, o jogador que
tiver lançado a dupla ganha. Caso os dois jogadores fizerem o lançamento e o resultado for de duas
duplas para os dois jogadores, ganha o jogador com a dupla maior. A disputa é em 11 lançamentos.
Indique o jogador vencedor ou se houve empate*/

//Protótipo da função que lança os dados
int lance_dado();

int main()
{
    int i;
    int j1 = 0,j2 = 0,somaj1,somaj2;
    srand(time(NULL));// Semente para os números aleatórios
    printf("-------------------------- JOGO DE DADOS -------------------------\n\n");
    printf("--------- Jogador 1 ----------     ---------- Jogador 2 ----------\n");

    for(i = 0;i < 11;i++){

        int d1_j1 = lance_dado();
        int d2_j1 = lance_dado();
        int d1_j2 = lance_dado();
        int d2_j2 = lance_dado();

        printf("%12s %02d -  %d   %d","Jogada ",i+1,d1_j1,d2_j1);
        printf("%24s %02d -  %d   %d\n","Jogada ",i+1,d1_j2,d2_j2);

        /* Dupla de dados iguais dos dois jogadores*/
        if(d1_j1 == d2_j1 && d1_j2 == d2_j2){
            if(d1_j1 > d1_j2)
                j1++;
            else if(d1_j1 < d1_j2)
                j2++;
        }
        /* Dupla de dados iguais de um jogador jogadores*/
        if(d1_j1 == d2_j1 && d1_j2 != d2_j2)
            j1++;
        else if(d1_j1 != d2_j1 && d1_j2 == d2_j2)
            j2++;

        /* Soma da dupla de dados dos jogadores*/
        else if((d1_j1 + d2_j1) > (d1_j2 + d2_j2))
                j1++;
            else if((d1_j1 + d2_j1) < (d1_j2 + d2_j2))
                j2++;
    } // fim for

    printf("\n\nJogador 01 venceu %02d rodadas",j1);
    printf("\n\nJogador 02 venceu %02d rodadas",j2);

    if(j1 > j2)
        printf("\n\n\tJogador 1 venceu!!!\n");
    else
        printf("\n\n\tJogador 2 venceu!!!\n");

    return 0;
}

/*Funçao retorna numeros aleatórios
do resto da divisão por 6 entre 1 e 6*/
int lance_dado(){
    return  1 + rand() % 6 ;
}



