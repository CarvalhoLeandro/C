#include<stdio.h>
#include<stdlib.h>

int main(){

    int valorA;

    printf("Digite um numero: ");
    scanf("%d", &valorA);

    if(valorA > 0)
        printf("\n\n%d eh POSITIVO!!\n\n",valorA);
    else
        printf("\n\n%d eh NEGATIVO!!\n\n",valorA);
       
    system("pause");
    return 0;
    
}