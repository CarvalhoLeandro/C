#include<stdio.h>
#include<stdlib.h>

/*Escreva um programa que leia numeros inteiros
No final apresentar:

    -> A media dos numeros lidos
    
obs: O programa deve fazer a pergunta: "Deseja digitar outro numero? (s/n):"
    -> Se o usuário responder 's', ficar dentro do laço de repetição
    -> Se o usuario responder 'n', ou qualquer outra letra diferente de 's', sair do laço de repetição e então vai calcular a média e apresentar o resultado da média dos números lidos.
    
*/

int main(){

    int  cont = 0;
    float num = 0, soma = 0, media = 0;
    char sentinela = 's', enter;

   
    while (sentinela == 's')
    {
        printf("\nDigite um numero: ");
        scanf("%f", &num);
        soma += num;
        cont++;
        
        printf("\nDeseja digitar outro numero[s/n]?");
        scanf("%c%c", &enter ,&sentinela);
        
        
    }

    media = soma / cont;

    printf("\n\nMedia dos numeros digitados: %.1f\n\n", media);
       

    system("pause");
    return 0;
    
}