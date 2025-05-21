#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/*
    Arredondar pra baixo (piso) -> floor(x)
    Arredondar pra cima (teto) -> ceil(x)
    Excluir a parte decimal -> int(x) ou trun(x)
*/


/*A função abaixo recebe um inteiro n e devolve o piso do log na base 2 de n*/
int lgt (int n){
    int x = 0;
    x = floor(log2(n));

    return x;
}

int main(){

    int n = 0, lg = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    lg = lgt(n);
    
    printf("%d", lg);
    
    return 0;

}
