#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Informe a quantidade de clientes: ");
    scanf("%d", &n);

    char nomes[n][50];
    int telefone[n], tipo_bas[n], minutos[n],pos[n];
    float  preco[3][2], valor[n];

    for(int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nDados do %d cliente\n", i+1);

        printf("Nome: ");
        scanf("%50[^\n]", nomes[i]);

        printf("Telefone: ");
        scanf("%d", &telefone[i]);

        printf("Tipo: ");
        scanf("%d", &tipo_bas[i]);

        printf("Minutos: ");
        scanf("%d", &minutos[i]);
    }

    printf("\nInforme o preco basico e excedente de cada tipo de conta: \n");
    for(int i = 0; i < 3; i++)
    {
        printf("Tipo %d \n",i);
        for(int j = 0; j < 2; j++)
        {
            scanf("%f", &preco[i][j]);
        }
    }
    for(int j = 0; j < n; j++)
    {
        if(minutos[j] <= 90)
            valor[j] = preco[tipo_bas[j]][0];
        else
        {
            valor[j] = preco[tipo_bas[j]][0] + ((minutos[j] - 90) * preco[tipo_bas[j]][1]);
        }
    }



    printf("\n-------------------- RELATORIO DE CLIENTES ---------------------\n\n");

    for(int i = 0; i < n; i++)
        printf("%s, %d, Tipo %d, Minutos: %d, Conta = %.2f\n",nomes[i], telefone[i], tipo_bas[i], minutos[i], valor[i]);

    return 0;
}
