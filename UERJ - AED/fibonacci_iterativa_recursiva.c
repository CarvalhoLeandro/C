#include <stdio.h>
#include <time.h>
#include <stdlib.h> // Adicionando a biblioteca stdlib.h para usar o system("pause")

// Este programa calcula a sequência de Fibonacci de duas maneiras: iterativa e recursiva.

// Função iterativa para calcular o n-ésimo número de Fibonacci
void fibonacciIterativa(int n) {
    
    int a = 0, b = 1, temp;

    printf("\nSequencia de Fibonacci de %d termos (iterativa):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

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
    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    clock_t inicio_iterativa = clock(); // Início da contagem de tempo da função iterativa

    fibonacciIterativa(n);// Chama a função iterativa para calcular a sequência de Fibonacci

    clock_t fim_iterativa = clock(); // Fim da contagem de tempo da função iterativa
    double tempoGastoIterativa = (double)(fim_iterativa - inicio_iterativa) / CLOCKS_PER_SEC;

    printf("Tempo gasto para executar o programa: %.6f segundos\n\n", tempoGastoIterativa);
    /*----------------------------------------------------------------------*/


    clock_t inicio_recursiva = clock(); // Início da contagem de tempo da função recursiva

    printf("Sequencia de fibonacci de %d termos (recursiva):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Chama a função recursiva para calcular a sequência de Fibonacci
    }
    printf("\n\n");

    clock_t fim_recursiva = clock(); // Fim da contagem de tempo da função recursiva
    double tempoGastoRecursiva = (double)(fim_recursiva - inicio_recursiva) / CLOCKS_PER_SEC;

    printf("Tempo gasto para executar o programa: %.6f segundos\n\n", tempoGastoRecursiva);

    system("pause"); // Pausa o programa para visualizar os resultados
    return 0;
   

}