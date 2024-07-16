#include<stdio.h>

/*Exercício 18 - Faça um programa em C se imprima os N primeiros números que sejam primos e
façam parte da série de Fibonacci*/

int primo(int num);
int fibonacci(int n);
int fib;
int main() {
    int n, cont = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    int i = 0;
    while (cont < n) {
        fib = fibonacci(i);
        if (primo(fib)) {
            printf("%d ", fib);
            cont++;
        }
        i++;
    }

    printf("\n");
    return 0;
}


// Função para verificar se um número é primo
int primo(int num) {
    int i=0;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
// Função para gerar a sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
