#include<stdio.h>
#include<locale.h>

int main(){
int a, b;
setlocale(LC_ALL, "Portuguese");
printf("Digite os valores: \n");
scanf("%i%i" , &a , &b);
printf("O dobro de %i é igual a: %i\nO triplo de %i é igual a: %i\n" , a , a * 2, b, b * 3);

    return 0;
}