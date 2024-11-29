#include<stdio.h>
#include<stdlib.h>

int main(){

    int valorA;

    printf("Digite um numero: ");
    scanf("%d", &valorA);

    if(valorA > 1000)
        printf("\n%d e maior do 1000!!!\n\n", valorA);
    

    system("pause");
    return 0;
    
}