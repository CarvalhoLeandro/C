#include<stdio.h>
#include<stdlib.h>

/*
    Escreva um programa que leia as coordenadas de um ponto no plano (x,y) e escreva o quadrante ao qual pertence o ponto no plano. 
*/

int main(){

    int coordX, coordY ;

    printf("\n\nDigite as coordenadas (x,y) do ponto:");
    scanf("%d%d", &coordX, &coordY);

    if(coordX > 0 && coordY > 0)
        printf("\n\nO ponto esta no primeiro quadrante!!\n\n");
    else if(coordX < 0 && coordY > 0)
        printf("\n\nO ponto esta no segundo quadrante!!\n\n");
    else if(coordX < 0 && coordY < 0)
        printf("\n\nO ponto esta no terceiro quadrante!!\n\n");
    else if(coordX > 0 && coordY < 0)
        printf("\n\nO ponto esta no quarto quadrante!!\n\n");
    else
        printf("\n\nOrigem!!\n\n");
    
    system("pause");
    return 0;

}