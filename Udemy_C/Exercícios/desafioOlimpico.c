#include<stdio.h>
#include<stdlib.h>


/*Desafio conta dagua

faixa de consumo m³        preço por(m³)

até 10 ------------------  incluido na franquia
11 a 30 -----------------  R$ 1,00
31 a 100 ----------------  R$ 2,00
101 em diante -----------  R$ 5,00
*/

int main(){

    int consumo, sentinela = 0;
    float conta = 0, franquia = 7;

    
    system("cls");
    do
    {   
        do
        {
            printf("\n\nDigite o consumo (m/cubicos): ");
            scanf("%d", &consumo);
        } while (consumo < 0 || consumo > 120);
        
        

        if(consumo <= 10)
            conta = franquia;
        else if(consumo > 10 && consumo <= 30)
            conta = franquia + (consumo - 10) * 1;
        else if(consumo > 30 && consumo <= 100)
            conta = franquia + 20 +(consumo - 30) * 2;
        else
            conta = franquia + 20 + 140 + (consumo - 100) * 5;


        printf("\n\nConta a pagar R$: %.2f\n\n", conta);
        printf("\nDeseja Continuar[0 - nao / 1 - sim]: ");
        scanf("%d", &sentinela);
    } while (sentinela != 0);
    

    system("pause");
    return 0;
}