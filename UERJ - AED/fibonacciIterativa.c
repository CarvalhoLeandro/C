#include <stdio.h>
#include <time.h>
// Função iterativa para calcular o n-ésimo número de Fibonacci
void fibonacciIterativa(int n) {
    
    int a = 0, b = 1, temp;

    printf("\nSequencia de Fibonacci de %d termos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%llu ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    clock_t inicio = clock(); // Início da contagem de tempo

    fibonacciIterativa(n);

    clock_t fim = clock(); // Fim da contagem de tempo
    double tempoGasto = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo gasto para executar o programa: %.6f segundos\n\n", tempoGasto);

    return 0;
}