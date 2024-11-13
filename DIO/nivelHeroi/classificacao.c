#include<stdio.h>

int main(){

    char nomeHeroi[20];
    int xp;
    char* nivel;

    printf("\nDigite o nome do heroi: ");
    scanf("%[^\n]", nomeHeroi);
    printf("Digite o XP do heroi: ");
    scanf("%d", &xp);


    if(xp <= 1000){
        nivel = "Ferro";
    }
    else if(xp > 1000 && xp <= 2000){
        nivel = "Bronze";
    }
    else if(xp > 2000 && xp <= 5000){
        nivel = "Prata";
    }
    else if(xp >  5000 && xp <= 7000){
        nivel = "Ouro";
    }
    else if(xp >  7000 && xp <= 8000){
        nivel = "Platina";
    }
    else if(xp >  8000 && xp <= 9000){
        nivel = "Ascendente";
    }
    else if(xp >  9000 && xp <= 10000){
        nivel = "Imortal";
    }
    else{
        nivel = "Radiante";
    }

    printf("\nO heroi de nome %s esta no nivel de %s.\n\n", nomeHeroi, nivel);

    return 0;
}

