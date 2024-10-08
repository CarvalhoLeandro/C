#include<stdio.h>

/* Consumo de gasolina. Os motoristas se preocupam
com o consumo de combustível de seus automóveis.
Um motorista manteve um registro do número de abastecimentos
que fez, registrando também o número de
quilômetros rodados e de litros obtidos a cada abastecimento.
Desenvolva um programa que peça o número de
quilômetros dirigidos e a quantidade de litros obtidos a
cada abastecimento. O programa deverá calcular e exibir
a quantidade de quilômetros rodados por litros usados.
Depois de processar toda a informação, o programa deverá
calcular e exibir o total combinado de quilômetros
por litro para todos os abastecimentos. Veja um exemplo
do diálogo de entrada/saída: */

int main(){
    /*inicializando variaveis*/
    int cont = 0;
    double litros = 0, km = 0, mediaParcial = 0, qlitros = 0, qkm = 0, mediaTotal = 0.0;

    printf("\n-------------------- MEDIA DE CONSUMO ----------------------\n");
    /*lendo dados*/
    printf("\n\nInforme quantos litros abasteceu( -1 para sair): ");
    scanf("%lf", &litros);
    fflush(stdin);

    while (litros != -1.0)
    {   
        printf("Informe quantos km dirigiu: ");
        scanf("%lf", &km);
        
        /*processando dados*/
        mediaParcial = km / litros;
        qlitros += litros;
        qkm += km;
        cont++;
        /*resultado parcial*/
        printf("O consumo atual foi de %lf km/l.\n", mediaParcial);
        
        printf("\n\nInforme quantos litros abasteceu( -1 para sair): ");
        scanf("%lf", &litros);
        fflush(stdin);
    }
    
    /*resultado final*/
    mediaTotal = qkm / qlitros;
    if(qlitros  > 0){
        printf("\n\nO consumo geral foi de %lf km/l.\n\n", mediaTotal);
    }
    else{
        printf("\nNenhum abastecimento cadastrado!!\n\n"); 
    }
    
    getchar(); 
    
    return 0;
     
}