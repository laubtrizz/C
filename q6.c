#include<stdio.h>
#include<locale.h>

//Faça um programa que solicita e lê temperatura em Fahrenheit, faz a conversão para
//Celsius e exibe tal resultado. Para isto, utilize a seguinte fórmula:
//𝐶 = (𝐹 − 32)
    //   1,8

int main(){
float n, f;
printf ("Informe a temperatura em °F\n");
scanf("%f", &n);
f=(n - 32)/1.8;
printf("%.1fF° é = %.1fC°\n" , n, f );

    return 0;
}