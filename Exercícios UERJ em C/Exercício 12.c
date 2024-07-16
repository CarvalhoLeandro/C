#include<stdio.h>
#include<stdlib.h>

/*  Exercício 12 - Escrever um programa em C que leia um valor inteiro
(limite na casa do milhar), e o imprima em forma de caracteres, ou seja,
por extenso. Ex. : 98 = noventa e oito.
*/
void print_number(int num);
void mil_dezmil(int num);
void cem_mil(int num);
void vinte_cem(int num);
void dez_dezenove(int num);
void zero_nove(int num);


int milhar, resto_milhar;
int centena, resto_centena;
int dezena, resto_dezena, resto_dezena2;

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    print_number(n);
}// fim main

void print_number(int num){
    milhar = num / 1000;
    resto_milhar = num % 1000;
    if(milhar > 0 && milhar < 10){
        mil_dezmil(milhar);
    }
    centena = resto_milhar / 100;
    resto_centena = resto_milhar % 100;
    if(centena > 0 && centena < 10){
        cem_mil(centena);
    }

    dezena = resto_centena / 10;
    resto_dezena = resto_centena % 10;
    if(dezena >= 2 && dezena <= 10){
        vinte_cem(dezena);
        if(resto_dezena != 0)
            zero_nove(resto_dezena);
    }
    if(dezena == 1){
        resto_dezena2 = resto_centena % 10;
        dez_dezenove(resto_dezena2);
    }
    if(dezena == 0 && resto_centena != 0){
        resto_dezena2 = resto_centena % 10;
        zero_nove(resto_dezena2);
    }
}//fim print_number


void mil_dezmil(int num){
    switch(num){
    case 1: printf("mil");break;
    case 2: printf("dois mil");break;
    case 3: printf("tres mil");break;
    case 4: printf("quatro mil");break;
    case 5: printf("cinco mil");break;
    case 6: printf("seis mil");break;
    case 7: printf("sete mil");break;
    case 8: printf("oito mil");break;
    case 9: printf("nove mil");break;
    }
}// fim mil_dezmil

void cem_mil(int num){
    switch(num){
    case 1: printf(" cem(nto)");break;
    case 2: printf(" duzentos");break;
    case 3: printf(" trezentos");break;
    case 4: printf(" quatrocentos");break;
    case 5: printf(" quinhentos");break;
    case 6: printf(" seicentos");break;
    case 7: printf(" setecentos");break;
    case 8: printf(" oitocentos");break;
    case 9: printf(" novecentos");break;
    }
}//fim cem_mil

void vinte_cem(int num){
    switch(num){
    case 2: printf(" vinte");break;
    case 3: printf(" trinta");break;
    case 4: printf(" quarenta");break;
    case 5: printf(" cinquenta");break;
    case 6: printf(" sessenta");break;
    case 7: printf(" setenta");break;
    case 8: printf(" oitenta");break;
    case 9: printf(" noventa");break;
    }
}// fim vinte_cem

void dez_dezenove(int num){
    switch(num){
    case 0: printf(" dez");break;
    case 1: printf(" onze");break;
    case 2: printf(" doze");break;
    case 3: printf(" treze");break;
    case 4: printf(" quatorze");break;
    case 5: printf(" quinze");break;
    case 6: printf(" dezesseis");break;
    case 7: printf(" dezesete");break;
    case 8: printf(" dezoito");break;
    case 9: printf(" dezenove");break;
    }
}//fim dez_dezenove

void zero_nove(int num){
    switch(num){
    case 0: printf(" zero");break;
    case 1: printf(" um");break;
    case 2: printf(" dois");break;
    case 3: printf(" tres");break;
    case 4: printf(" quatro");break;
    case 5: printf(" cinco");break;
    case 6: printf(" seis");break;
    case 7: printf(" sete");break;
    case 8: printf(" oito");break;
    case 9: printf(" nove");break;
    }
}//fim zero_nove






































