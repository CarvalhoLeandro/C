

#include<stdio.h>
#include<stdlib.h>

int main(){

    float comprimento,largura,altura,volume;

    printf("Digite o comprimento do paralelepipedo: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do paralelepipedo: ");
    scanf("%f", &largura);
    printf("Digite a altura do paralelepipedo: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("\n\nO volume do paralelepipedo e de: %.2fcm cubicos.\n\n", volume);
}