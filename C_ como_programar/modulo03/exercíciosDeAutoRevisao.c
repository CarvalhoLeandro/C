#include<stdio.h>

int main(){
    /*Escreva uma única instrução em C que possibilite realizar
    as seguintes tarefas:*/

    int x = 5, y = 5, z = 5,  produto = 5, contador = 11 , total = 5, q = 5;

    /*a) atribuir a soma de x e y a z e incrementar o valor de
    x em 1 após o cálculo.*/
    z = y + x++;
    printf("\n%d\n\n", z);

    /*b) multiplicar a variável produto por 2 usando o operador *=. */
    produto *= 2;

    /*c) multiplicar a variável produto por 2 usando os operadores = e * .*/
    produto = produto * 2;

    /* d) testar se o valor da variável contador é maior do que 10. Se for, imprimir ‘Contador é maior do que 10’. */
    contador > 10? printf("Contador e maior que 10"): printf("Nao e maior que 10");  

    /* e) decrementar a variável x em 1, depois subtraí-la da variável total.*/
    total -= --x;

    /* f) somar a variável x à variável total, depois decrementar x por 1.*/
    total += x--;

    /* g) calcular o resto após q ser dividido por divisor e atribuir o resultado a q; escreva essa instrução de duas maneiras diferentes.*/
    q %= 2;
    q = q % 2;

    /* h) imprimir o valor 123.4567 com 2 dígitos de precisão.Que valor é impresso? */
    printf("\n%.2f", 123.4567);

    /* i) imprimir o valor de ponto flutuante 3.14159 com três dígitos à direita do ponto decimal. Que valor é impresso? */
    printf("\n%.2f", 3.14159);

    return 0;
}