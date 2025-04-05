#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Exercício 17
Elabore um programa em C que calcule a quantidade de dias existentes entre duas datas. Dica: utilize
as variáveis D1, M1, A1, D2, M2, A2. Por hipótese, as variáveis dos anos não precisam considerar a
correção do calendário gregoriano. Lembre-se que há regras especiais de anos bissextos conforme o
ano específico.*/

int dias_no_mes(int mes,int ano);


int main()
{
    int d1,m1,a1,d2,m2,a2;
    int dias_totais;
    int a,m;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d1, &m1, &a1);

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d2, &m2, &a2);

    /* verificando se as datas estão válidas*/
    if(a1 > a2 ||(a1 == a2 &&  m1 > m2) || (m1 == m2 && d1 > d2)){
        printf("\nA primeira data deve ser anterior!!!\n");
    }

    /* Claculo dos dias */
    /* Calculando dias no mesmo ano*/
    if(a1 == a2){

        for(m = m1+1;m < m2;m++){
            dias_totais += dias_no_mes(m,a1);// Acumulando os meses até o mes indicado
        }
        dias_totais += d2 - d1 + dias_no_mes(m1,a1) - d1;


      } else {
        /* Calculando dias anos diferentes*/

        for (a=a1 + 1; a < a2; a++) {
            dias_totais += 365; // Ano normal
            if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
                dias_totais++; // Ano bissexto
            }
        }

        for (m=m1 + 1; m <= 12; m++) {
            dias_totais += dias_no_mes(m, a1);
        }

        for (m = m1+1; m < m2; m++) {
            dias_totais += dias_no_mes(m, a2);
        }
        dias_totais += d2 + (dias_no_mes(m1, a1) - d1) + dias_no_mes(m2, a2);

        printf("Existem %d dias entre as duas datas.\n", dias_totais);

        return 0;
    }

}// Fim main

int dias_no_mes(int mes,int ano){
    /* Condições para o ano ser bisexto */
    if(mes == 2){
        if((ano % 4 == 0 && ano % 100 == 0) && (ano % 400 == 0))
            return 29; /* Se ano bisexto retorna 29*/
        else
            return 28;
    } // fim if

    else{
        if( mes == 4 || mes == 6 || mes == 9 || mes == 11)
            return 30;
        else
            return 31;
    }
}// Fim dias_no_mes

