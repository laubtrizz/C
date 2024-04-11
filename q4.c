#include<stdio.h>
#include<locale.h>

//Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão
//para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte fórmula:
//𝐹 = (𝐶 × 1,8) + 32

int main(){
float c;
setlocale(LC_ALL, "Portuguese");
printf ("Informe a temperatura em °C\n");
scanf("%f", &c);

printf("%.1fC° é = %.1fF°\n" , c, c = (c * 1.8) + 32);

    return 0;
}