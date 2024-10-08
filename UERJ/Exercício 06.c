#include<stdio.h>

/*Exercício 06 - Um motorista acaba de retornar de um feriado prolongado. Em cada parada de reabastecimento ele
registrou a leitura de seu odômetro, a quantidade de gasolina comprada (suponha que ele tenha enchido o
tanque cada vez) e o preço pago. Além disso, suponha também que ele tenha enchido o tanque antes de
partir e imediatamente após retornar. Escreva um programa em C para ler, em primeiro lugar, o número total
de reabastecimentos feitos (incluindo o primeiro e o último) e, a seguir, os dados relativos à compra de
gasolina e calcular :
a) a quilometragem obtida por litro de gasolina entre cada par de paradas de reabastecimento;
b) a quilometragem obtida por litro de gasolina em toda a viagem
c) custo do combustível por quilometro rodado em toda a viagem*/


int main() {

    int abastecimentos;
    int quilometragemTotal = 0;
    int litrosTotais = 0;
    int custoTotal = 0;
    int consumoEntreparadas, quilometragemPorLitroViagem, custoPorQuilometro;
	int i;


    printf("Quantidade de abastecimentos (incluindo o primeiro e o ultimo): ");
    scanf("%d", &abastecimentos);

    if (abastecimentos < 2) {
        printf("Pelo menos dois abastecimentos devem ser feitos para calcular a quilometragem e o custo.\n");

    }

    for ( i = 1; i <= abastecimentos; i++) {
        int quilometros, litros, custo;

        printf("\n\nKm no abastecimento %d: ", i);
        scanf("%d", &quilometros);

        if (i != abastecimentos) {
            printf("Quantidade de litros abastecimento %d: ", i);
            scanf("%d", &litros);
        } else {
            litros = 0;
        }

        printf("Valor do combustivel no abastecimento %d: ", i);
        scanf("%d", &custo);

        quilometragemTotal += quilometros;
        litrosTotais += litros;
        custoTotal += custo;
    }

    consumoEntreparadas = (quilometragemTotal * 100) / litrosTotais; // Multiplica por 100 para obter duas casas decimais
    quilometragemPorLitroViagem = (quilometragemTotal * 100) / litrosTotais; // Multiplica por 100 para obter duas casas decimais
    custoPorQuilometro = (custoTotal * 100) / quilometragemTotal; // Multiplica por 100 para obter duas casas decimais

    printf("\na) Autonomia entre paradas: %d.%02d km/l\n", consumoEntreparadas / 100,consumoEntreparadas % 100);
    printf("b) Autonomia em toda a viagem: %d.%02d km/l\n", quilometragemPorLitroViagem / 100, quilometragemPorLitroViagem % 100);
    printf("c) Custo do combustivel por quilometro rodado: R$ %d.%02d/km\n", custoPorQuilometro / 100, custoPorQuilometro % 100);

    return 0;
}

