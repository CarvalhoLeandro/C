#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;

    printf("\n\nDigite um numero entre 0 e 10: ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("\n%d - Zero\n",num);
        break;
    case 1:
        printf("\n%d - Um\n",num);
        break;
    case 2:
        printf("\n%d - Dois\n",num);
        break;
    case 3:
        printf("\n%d - Tres\n",num);
        break;
    case 4:
        printf("\n%d - Quatro\n",num);
        break;
    case 5:
        printf("\n%d - Cinco\n",num);
        break;    
    case 6:
        printf("\n%d - Seis\n",num);
        break;
    case 7:
        printf("\n%d - Sete\n",num);
        break;
    case 8:
        printf("\n%d - Oito\n",num);
        break;
    case 9:
        printf("\n%d - Nove\n",num);
        break;
    case 10:
        printf("\n%d - Dez\n",num);
        break;
    default:
        printf("\nNumero Invalido!!\n");
        break;
    }
    
       
    system("pause");
    return 0;
    
}