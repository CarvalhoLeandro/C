#include<stdio.h>
#include<stdlib.h>

/*Em um bar, o ingresso custa 10 reais para homens e 8 reais para mulheres.
Cada cerveja custa 5 reais, cada refrigerante 3 reais e cada espetinho custa 7.
Além disso, o bar cobra uma taxa de couvert artístico no valor de 4 reais,
porém, se o valor gasto com consumo for superior a 30 reais, o couvert artístico
não é cobrado. Fazer um programa para ler os seguintes dados de um cliente do
bar: sexo (F ou M), quantidade de cervejas, refrigerantes e espetinhos consumidos.
O programa deve então mostrar um relatório com a conta a ser paga pelo cliente.*/

int main()
{

    char sexo;
    float cerva,refri,espeto;
    float soma =0;

    printf("Sexo: ");
    scanf("%c",&sexo);
    fflush(stdin);
    printf("Quantidade de cervejas: ");
    scanf("%f",&cerva);
    printf("Quantidade de refrigerante: ");
    scanf("%f",&refri);
    printf("Quantidade de espetinhos: ");
    scanf("%f",&espeto);

    soma = ((cerva * 5.00) + (refri * 3.00) + (espeto * 7.00));

    printf("\n------------- RELATORIO ------------\n");

    printf("\nConsumo R$: %.02f ",soma);

    if(soma <= 30.00)
    {
        soma += 4.00;
        printf("\nCouver R$: 4.00");
    }
    else
        printf("\nIsento de couver!!");

    if(sexo == 'f' || sexo == 'F')
    {
        soma += 8.00;
        printf("\nIngresso R$: 8.00");
    }
    else if(sexo == 'm' || sexo == 'M')
    {
        soma += 10.00;
        printf("\nIngresso R$: 10.00");
    }
    printf("\n\nValor a pagar R$: %.02f\n",soma);
    return 0;
}
