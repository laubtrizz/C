#include<stdio.h>

//Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.

int main(){
int n;
    printf("Informe um número inteiro: ");
    scanf("%d", &n);
    printf("O cubo de %d e: %d", n, n * n * n );
    return 0;
}