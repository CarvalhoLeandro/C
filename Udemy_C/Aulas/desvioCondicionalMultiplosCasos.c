/*switch case*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int codigo;

    printf("\n\nDigite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("\n\nPanela\n\n");
        break;
    case 2:
        printf("\n\nPrato\n\n");
        break;
    case 3:
        printf("\n\nFogao\n\n");
        break;
    default:
        printf("\n\nCodigo Invalido!!\n\n");
        break;
    }


    system("pause");
    return 0;
    
}