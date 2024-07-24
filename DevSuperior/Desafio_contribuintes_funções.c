#include<stdio.h>
#include<stdlib.h>


//Parametros:
//  quantia: valor recebido como salario
//Efeito: retorna o imposto a ser pago sobre o salario

float imposto_sobre_salario(float quantia)
{
    if(quantia < 36000)
    {
        return 0;
    }
    else if((quantia >= 36000) && (quantia < 60000))
    {
        return quantia * 0.1;
    }
    else if(quantia >= 60000)
    {
        return quantia  * 0.2;
    }
}

//Parametros:
//  quantia: valor recebido com prestação de serviços
//Efeito: retorna o imposto a ser pago sobre prestação de serviços
float prestacao_servico(float quantia)
{
    if(quantia > 0)
        return quantia * 0.15;
    else
        return 0;

}

//Parametros:
//  quantia: valor recebido como ganho de capital
//Efeito: retorna o imposto a ser pago sobre ganhos de capital
float imposto_sobre_gc(float quantia)
{
    if(quantia > 0)
        return quantia * 0.2;
    else
        return 0;
}

//Parametros:
//  salario: valor recebido como salario
//  servicos: valor recebido com prestação de serviços
//  gc: valor recebido como ganho de capital
//Efeito: retorna o imposto bruto total a ser pago
float imposto_bruto_total(float salario, float service, float gc)
{
    return salario + service + gc;
}

//Parametros:
// imp_bruto: soma dos impostos devidos já calculados
// gastos_med: valor gastos com medicos
// gatos_educ: valor gastos educação
//Efeito: retorna valor a ser abatido do imposto bruto total
float abatimento(float imp_bruto, float gastos_med, float gastos_educ)
{
    float abate30, gastos;

    gastos = gastos_med + gastos_educ;
    abate30 = imp_bruto * 0.3;

    if(gastos >= abate30)
        return abate30;
    else
        return gastos;
}



int main()
{
    float salario, prest_serv, capital;
    float gastos_medicos, gastos_educacionais;
    float imp_salario, imp_prest_serv, imp_capital, bruto_total;
    float desconto;

    printf("Digite os dados do contribuinte:\n");
    printf("Renda anual com salario R$: ");
    scanf("%f", &salario);

    printf("Renda anual com prestacao de servico R$: ");
    scanf("%f", &prest_serv);

    printf("Renda anual com ganho de capital R$: ");
    scanf("%f", &capital);

    printf("Gastos medicos R$: ");
    scanf("%f", &gastos_medicos);

    printf("Gastos educacionais R$: ");
    scanf("%f", &gastos_educacionais);


    printf("\n\nRELATORIO:\n");
    imp_salario = imposto_sobre_salario(salario);
    printf("Imposto sobre o salario R$: %.2f\n", imp_salario);

    imp_prest_serv = prestacao_servico(prest_serv);
    printf("Imposto sobre prestacao de servicos R$: %.2f\n", imp_prest_serv);

    imp_capital =  imposto_sobre_gc(capital);
    printf("Imposto sobre ganho de capital R$: %.2f\n", imp_capital);

    bruto_total = imposto_bruto_total(imp_salario,imp_prest_serv,imp_capital);
    printf("Imposto bruto total R$: %.2f\n", bruto_total);

    desconto = abatimento(bruto_total,gastos_medicos,gastos_educacionais);
    printf("Abatimento R$: %.2f\n", desconto);

    printf("Imposto devido R$: %.2f\n\n", bruto_total - desconto);

    return 0;
}
