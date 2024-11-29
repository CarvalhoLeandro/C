#include<stdio.h>
#include<stdlib.h>

int main(){

    int valorA;

    printf("Digite um numero: ");
    scanf("%d", &valorA);

    if(valorA > 0)
        printf("\n%d e POSITIVO!!\n\n", valorA);
    

    system("pause");
    return 0;
    
}