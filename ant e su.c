#include<stdio.h>
#include<locale.h>

        int main(){
        int x;
        setlocale(LC_ALL, "Portuguese");
        printf("Digite um valor a ser verificado");
        scanf("%d", &x);
        printf("o antecessor de %d é %d e o seu sucessor é %d\n" , x, x-1, x+1 );

            return 0;
        }