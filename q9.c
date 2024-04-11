#include<stdio.h>
#include<locale.h>

//A cotação do dólar influencia na economia brasileira e muitos economistas se
//encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar.
//Você foi contratado por um economista para automatizar a conversão de reais em
//dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
//a ser convertido e, em seguida, calcula e exibe o resultado da conversão. 

int main(){
float cd, vr, r;
setlocale(LC_ALL, "Portuguese");
printf("Qual a cotação do dólar atual? \n");
scanf("%f" , &cd);
printf("Digite o valor em reais a ser convertido: \n");
scanf("%f" , &vr);
r= vr / cd;
printf("O valor convertido em dólar é: %.2f\n", r);
    return 0;
}