#include<stdio.h>
#include<stdlib.h>

/*Em uma escola a professora necessita de um programa que leia as 3 notas escolares de um aluno, calcule a media e apresente-a, depois devera informar se o aluno foi: "Aprovado" ou "reprovado", baseando´-se na media da escola que é 6.

obs: O programa deve fazer a pergunta: "Deseja digitar as notas de outro aluno(s/n)?"
*/

int main(){

   
    float num = 0, soma = 0, media = 0;
    char sentinela = 's', enter;

   
    while (sentinela == 's')
    {   
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            printf("\nDigite a nota %d: ", i+1);
            scanf("%f", &num);
            soma += num;
        }
        media = soma/3;

        if(media >= 6.0){
            printf("\nO aluno foi Aprovado. Media: %.2f\n", media);
        }
        else if(media < 6.0){
            printf("\nO aluno foi Reprovado. Media: %.2f\n", media);
        }
        
        printf("\nDeseja digitar as notas de outro aluno[s/n]: ");
        scanf("%c%c", &enter, &sentinela);
        soma = 0;
        printf("\n\n");
        
    }
    system("pause");
    return 0;
    
}