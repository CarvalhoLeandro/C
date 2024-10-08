/*Calculadora de limite de crédito. Desenvolva um
programa em C que determine se um cliente de uma
loja de departamentos excedeu seu limite de crédito. Os
seguintes fatos estão disponíveis para cada cliente:
a) Número de conta.
b) Saldo no início do mês.
c) Total de todos os encargos desse cliente nesse mês.
d) Total de todos os créditos aplicados à conta desse
cliente nesse mês.
e) Limite de crédito autorizado.
O programa deverá ler cada um desses fatos, calcular o
novo saldo (= saldo inicial + encargos - créditos)
e determinar se o novo saldo é superior ao limite de
crédito do cliente. Para os clientes cujo limite de crédito
foi ultrapassado, o programa deverá exibir o número
de conta do cliente, o limite de crédito, o novo saldo e
a mensagem ‘Limite de crédito ultrapassado’. Veja um
exemplo do diálogo de entrada/saída:*/

int main(){

    int conta = 0;
    double inicial, encargo, credito, limite, novo_saldo;

    printf("\nInforme o numero da conta (-1 para sair): ");
    scanf("%d", &conta);

    while (conta != -1)
    {
        printf("\nInforme o saldo inicial R$: ");
        scanf("%lf", &inicial);
        printf("Informe o total de encargos R$: ");
        scanf("%lf", &encargo);
        printf("Informe o total de creditos R$: ");
        scanf("%lf", &credito);
        printf("Informe o limite de credito R$: ");
        scanf("%lf", &limite);

        novo_saldo = inicial + encargo - credito;

        if(novo_saldo > limite){
            printf("\n\nConta: %d\n", conta);
            printf("Limite de credito R$: %.2lf\n", limite);
            printf("Saldo R$: %.2lf\n", novo_saldo);
            printf("Limite de credito ultrapassado!!\n");
        }
       
        printf("\nInforme o numero da conta (-1 para sair): ");
        scanf("%d", &conta);

    }
    return 0;
}