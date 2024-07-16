#include<stdio.h>
#include<stdlib.h>

/*Fazer a leitura dos dados de um conjunto de clientes de uma companhia
telef�nica, informando, para cada um, o seu nome, o n�mero do seu telefone,
o tipo de assinatura (0, 1 ou 2) e o n�mero de minutos consumidos no m�s
(n�o � para fazer a leitura do valor da conta, pois este ser� calculado
automaticamente mais tarde). Veja o exemplo abaixo:

                Nome Telefone Tipo Minutos ValorDaConta
                Maria Jos� 3222-1234 1 120
                XY Inform�tica 3223-6666 2 457
                Joaquim Silva 3222-3344 1 50
                Ant�nio Carlos 3212-6622 0 134

Cada coluna da tabela deve ser armazenada em um VETOR.
Fazer a leitura tamb�m dos tr�s tipos de assinatura, sendo que cada
tipo de assinatura possui um pre�o b�sico, e o pre�o do minuto excedente.
Utilizar uma MATRIZ 3x2 para armazen�-los, sendo que a primeira coluna
corresponde ao pre�o b�sico da assinatura e a segunda coluna corresponde
ao pre�o do minuto excedente, conforme mostrado no exemplo abaixo:
    0   1
0 25.5 0.10
1 35.0 0.12
2 60.0 0.15

(certifique-se de que voc� entendeu a matriz acima. Por exemplo: a matriz diz,
por exemplo, que o pre�o b�sico da assinatura tipo 1 � 35 reais e que cada
minuto excedente deste tipo custa 12 centavos)

Depois de ler os dados dos clientes, bem como os dados dos tr�s tipos de
assinatura, calcular o valor da conta de cada cliente e mostrar uma tabela
conforme exemplo abaixo. A regra de c�lculo da conta de um cliente � a seguinte:
se o n�mero de minutos consumidos for menor ou igual a 90, ent�o o valor da conta
� simplesmente o pre�o b�sico da assinatura; caso contr�rio, o valor da conta � o
pre�o b�sico mais o valor total dos minutos excedentes a 90. Por exemplo: se um
cliente tem uma assinatura tipo 1 e consumiu 120 minutos, repare que ele excedeu 30
minutos al�m dos 90. Assim, o pre�o da conta dele ser� 35.0 + (30 * 0.12), que ser�
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
