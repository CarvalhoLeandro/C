#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Exercício 15 - O Departamento de trânsito do estado anotou dados de acidentes de trânsito no último ano. Para cada
motorista envolvido no acidente, tem-se as seguintes informações:
- Ano de nascimento;
- Sexo (M - Masculino, F - Feminino)
- Procedência ( 0 - Capital, 1 - Interior, 2 - Outro estado);
Faça um programa em C que :
a) Calcule a porcentagem de motoristas com menos de 21 anos;
b) Calcule quantas mulheres são da capital;
c) Calcule quantos motoristas do interior do estado tem idade maior que 60 anos;
d) Verifique se existe alguma mulher com idade maior que 60 anos;*/

int main()
{
    char sexo;
    float percentual;
    int idade=0, nasci=0, lugar=0, opcao=0;
    float menos_21 = 0, total=0;
    int mul_capital = 0;
    int int_maior_60 = 0;
    int mul_mais_60 = 0;

    printf("********** Cadastro Motoristas **********");

    do{
        printf("\n****** Motorista %.0f ******\n",total+1);
        printf("\nDigite o ano de nascimento: ");
        scanf("%d",&nasci);
        total++;


        printf("\nDigite o sexo ([M] - Masculino [F] - Feminino): ");
        scanf(" %s",&sexo);
        while(sexo != 'm'&& sexo !='M' && sexo != 'f' && sexo !='F'){
            printf("\nDigite o sexo ([M] - Masculino [F] - Feminino): ");
            scanf(" %c",&sexo);
        }

        printf("\nDigite a localidade:\n0 - Capital\n1 - Interior\n2 - Outro estado");
        scanf("%d",&lugar);
        while(lugar != 0 && lugar != 1 && lugar != 2){
            printf("\nDigite a localidade:\n\n0 - Capital\n1 - Interior\n2 - Outro estado\n");
            scanf("%d",&lugar);
        }
        printf("\n0 - Continuar\n1 - Sair / Relatorio\n");
        scanf("%d",&opcao);

        idade = (2024 - nasci);

        if(idade <= 21)
            menos_21++;
        if(lugar == 0 && sexo == 'f' || sexo == 'F')
            mul_capital++;
        if(idade >= 60 && lugar == 1)
            int_maior_60++;
        if(idade >= 60 && sexo == 'f' || sexo == 'F')
            mul_mais_60++;


    }while(opcao == 0);

    printf("\n********** Relatorio Motoristas **********\n");
    printf("Quantidade total de motoristas: %.0f\n",total);

    percentual = menos_21/total*100;

    printf("\nMotoristas com menos de 21 anos: %.2f %%\n",percentual);
    printf("\nMulheres da capital: %02d\n", mul_capital);
    printf("\nMotoristas do interior do estado com mais de 60 anos: %02d\n",int_maior_60);
    printf("\nMotoristas mulheres com mais de 60 anos: %02d\n",mul_mais_60);

    return 0;
}
