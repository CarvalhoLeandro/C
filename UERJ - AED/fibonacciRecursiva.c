#include <stdio.h>
#include <time.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0; //Caso base
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    clock_t inicio, fim;
    double tempo_gasto;

    printf("Digite o numero de termos da sequencia de Fibonacci:");
    scanf("%d", &n);

    inicio = clock(); // Inicia a contagem do tempo

    printf("Sequencia de fibonacci de %d termos.\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");

    fim = clock(); // Finaliza a contagem do tempo
     tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo de execucao: %.6f segundos\n\n", tempo_gasto);

    return 0;
}