
#include<stdio.h>
#include<stdlib.h>

/*
 * Escreva um programa que leia a idade e o código do estado civil de um grupo de pessoas.
 * A quantidade de pessoas não está definida, portanto o sistema deverá fazer uma pergunta para o usuário decidir se vai ou não digitar dados de outra pessoa.
 * No final apresentar a média das idades doa solteiros, a média das idades dos casados e a média das idades dos divorciados.
 
 Os códigos do estado cívil estão apresentados abaixo:
 -> 1- Solteiro
 -> 2- Casado
 -> 3- Divorciado 
*/

int main(){

    int idade, estadoCivil, contSolteiro=0,contCasado=0,contDivorciado=0;
    float somaSolteiro = 0,somaCasado = 0, somaDivorciado = 0, mediaSolteiro=0,mediaCasado=0,mediaDivorciado=0;
    char sentinela = 's', enter;

   
    while (sentinela == 's')
    {   
        system("cls");
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        
        printf("\n========== Estado Civil ==========\n\t1 - Solteiro\n\t2 - Casado\n\t3 - Divorciado\n==============================\n");
        printf("Digite o codigo do estado civil: ");
        scanf("%d", &estadoCivil);

        if(estadoCivil == 1){
            somaSolteiro += idade;
            contSolteiro++;
        }
        else if(estadoCivil == 2){
            somaCasado += idade;
            contCasado++;
        }
        else if(estadoCivil == 3){
            somaDivorciado += idade;
            contDivorciado++;
        }
        else{
            printf("Codigo Invalido!!");
        }

        

        printf("\nDeseja digitar outra idade[s/n]: ");
        scanf("%c%c", &enter, &sentinela);

        
    }
    if(contSolteiro == 0 ){
        mediaSolteiro = 0;
    }else{
        mediaSolteiro = somaSolteiro / contSolteiro;
    }
    if(contCasado == 0 ){
        mediaCasado = 0;
    }else{
        mediaCasado = somaCasado / contCasado;
    }
    if(contDivorciado == 0 ){
        mediaDivorciado = 0;
    }else{
        mediaDivorciado = somaDivorciado / contDivorciado;
    }

        printf("\n============== Media Idades ==============\n\tSolteiros: %.2f\n\tCasados: %.2f\n\tDivorciados: %.2f\n===========================================\n\n", mediaSolteiro, mediaCasado, mediaDivorciado);
    system("pause");
    return 0;
    
}