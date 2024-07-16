#include<stdio.h>
#include<stdlib.h>

/*Fazer a leitura dos dados de um conjunto de clientes de uma companhia
telefônica, informando, para cada um, o seu nome, o número do seu telefone,
o tipo de assinatura (0, 1 ou 2) e o número de minutos consumidos no mês
(não é para fazer a leitura do valor da conta, pois este será calculado
automaticamente mais tarde). Veja o exemplo abaixo:

                Nome Telefone Tipo Minutos ValorDaConta
                Maria José 3222-1234 1 120
                XY Informática 3223-6666 2 457
                Joaquim Silva 3222-3344 1 50
                Antônio Carlos 3212-6622 0 134

Cada coluna da tabela deve ser armazenada em um VETOR.
Fazer a leitura também dos três tipos de assinatura, sendo que cada
tipo de assinatura possui um preço básico, e o preço do minuto excedente.
Utilizar uma MATRIZ 3x2 para armazená-los, sendo que a primeira coluna
corresponde ao preço básico da assinatura e a segunda coluna corresponde
ao preço do minuto excedente, conforme mostrado no exemplo abaixo:
    0   1
0 25.5 0.10
1 35.0 0.12
2 60.0 0.15

(certifique-se de que você entendeu a matriz acima. Por exemplo: a matriz diz,
por exemplo, que o preço básico da assinatura tipo 1 é 35 reais e que cada
minuto excedente deste tipo custa 12 centavos)

Depois de ler os dados dos clientes, bem como os dados dos três tipos de
assinatura, calcular o valor da conta de cada cliente e mostrar uma tabela
conforme exemplo abaixo. A regra de cálculo da conta de um cliente é a seguinte:
se o número de minutos consumidos for menor ou igual a 90, então o valor da conta
é simplesmente o preço básico da assinatura; caso contrário, o valor da conta é o
preço básico mais o valor total dos minutos excedentes a 90. Por exemplo: se um
cliente tem uma assinatura tipo 1 e consumiu 120 minutos, repare que ele excedeu 30
minutos além dos 90. Assim, o preço da conta dele será 35.0 + (30 * 0.12), que será
igual a 38.60.*/

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
        printf("%s, %d, Tipo %d, Minutos: %d, Conta R$: %.2f\n",nomes[i], telefone[i], tipo_bas[i], minutos[i], valor[i]);

    return 0;
}
