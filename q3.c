#include<stdio.h>
#include<locale.h>

//Todos os números naturais possuem antecessor, que é o número que antecede
//(anterior) um valor específico, e sucessor, que é o número que sucede (posterior) um
//valor específico. Sabendo disso, implemente um programa que solicita ao usuário a
//entrada de um número inteiro e apresenta seu antecessor e sucessor. 
        int main(){
        int x;
        setlocale(LC_ALL, "Portuguese");
        printf("Digite um valor a ser verificado");
        scanf("%d", &x);
        printf("o antecessor de %d é %d e o seu sucessor é %d\n" , x, x-1, x+1 );

            return 0;
        }
