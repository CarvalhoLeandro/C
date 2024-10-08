#include<stdio.h>

/*Calculo com gastos de transporte diário de um automovel */

int main(){

    int carro = 0, opcao = 0;

    do{
        printf("\n\nEscolha o modelo do carro\n1 - Logan 1.0\n2 - Logan 1.6\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            carro = 1;
            break;
        case 2:
            carro = 2;
            break;
        default:
            printf("Numero Invalido!!\n\n");
            break;
        }
    }while (opcao != 1 && opcao != 2);
    
    
    int combustivel = 0, opcao2 = 0, op = 0;
    double preco_litro;
    printf("\nTipo de combustivel usado:\n1 - Etanol\n2 - Gasolina\n");
    scanf("%d", &opcao2);
    do
    {
        switch (opcao2)
        {
        case 1:
            /*Etanol*/
            printf("\nInforme o preco do combustivel\n1 - R$ 4.99\n2 - Inserir novo preco\n");
            scanf("%d", &op);
            switch (op)
            {
            case 1:
                combustivel = 1;
                preco_litro = 4.99;    
                break;
            case 2:
                combustivel = 1;
                printf("Digite o preco R$: ");
                scanf("%lf", &preco_litro);
                break;
            default:
                printf("Numero invalido!!\n");
                break;
            }
            
            break;
        case 2:
            /*Gasolina*/ 
            printf("\nInforme o preco do combustivel\n1 - R$ 5.60\n2 - Inserir novo preco\n");
            scanf("%d", &op);
            switch (op)
            {
            case 1:
                combustivel = 2;
                preco_litro = 5.60;    
                break;
            case 2:
                combustivel = 2;
                printf("Digite o preco R$: ");
                scanf("%lf", &preco_litro);
                break;
            default:
                printf("Numero invalido!!\n");
                break;
            }
            break;
        default:
            printf("Numero invalido!!\n\n");
            break;
        }
    } while (combustivel != 1 && combustivel != 2);

    int vias = 0, opcao3 = 0;
    printf("\nTipo de vias:\n1 - Cidade\n2 - Estrada\n");
    scanf("%d", &opcao3);
    do
    {
        switch (opcao3)
        {
        case 1:
            vias = 1;
            break;
        case 2:
            vias = 2;
            break;        
        default:
            printf("Numero Invalido!\n\n");
            break;
        }
    } while (opcao3 != 1 && opcao3 != 2);
    
    double media;
    /*Logan 1.0 - Etanol - Cidade*/
    if(carro == 1 && combustivel == 1 && vias == 1){
        media = 9.4;
        
    }
    /*Logan 1.6 - Etanol - Cidade*/
    else if(carro == 2 && combustivel == 1 && vias == 1){
        media = 9.3;
    }


    /*Logan 1.0 - Etanol - Estrada*/
    if(carro == 1 && combustivel == 1 && vias == 2){
        media = 10.2;
    }
     /*Logan 1.6 - Etanol - Estrada*/
    else if(carro == 2 && combustivel == 1 && vias == 2){
        media = 10;
    }

    
    /*Logan 1.0 - Gasolina - Cidade*/
    if(carro == 1 && combustivel == 2 && vias == 1){
        media = 14;
    }
    /*Logan 1.6 - Gasolina - Cidade*/
    else if(carro == 2 && combustivel == 2 && vias == 1){
        media = 13.6;
    }


    /*Logan 1.0 - Gasolina - Estrada*/
    if(carro == 1 && combustivel == 2 && vias == 2){
        media = 14.9;
    }
    /*Logan 1.6 - Gasolina - Estrada*/
    else if(carro == 2 && combustivel == 2 && vias == 2){
        media = 14.2;
    }

    double km_rodado, consumo_litros, valor_gasto;
    printf("\nDigite o Km rodado: ");
    scanf("%lf", &km_rodado);

   

    consumo_litros = km_rodado / media;

    valor_gasto = consumo_litros * preco_litro;

    printf("\n\nCombustivel: ");
    if(combustivel == 1){   
        printf("Etanol\nPreco R$: %.2lf\n", preco_litro);
    }else if(combustivel == 2){
        printf("Gasolina\nPreco R$: %.2lf\n", preco_litro);
    }
    printf("Percurso: %.2lf Km\nMedia de Consumo %.2lf Km/l\nValor gasto no percurso R$: %.2lf\n\n", km_rodado, media, valor_gasto);


    return 0;
}