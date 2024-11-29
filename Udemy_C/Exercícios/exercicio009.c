#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float pi = 3.14159, raio, altura, volume;

    printf("\n\nDigite o raio da lata: ");
    scanf("%f", &raio);
    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    volume = pi * altura * pow(raio,2);

    printf("\nO volume da lata e %.2fcm cubicos.\n\n", volume);

    system("pause");
    return 0;
    
}