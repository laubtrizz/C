#include<stdio.h>
#include<locale.h>

//Você foi procurado por uma nutricionista para automatizar o cálculo do Índice de
//Massa Corpórea (IMC) de seus pacientes. Para isto, crie um programa que solicita e
//lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais
//após a vírgula. O IMC é calculado por meio da seguinte fórmula:
//𝐼𝑀𝐶 = 𝑝𝑒𝑠𝑜
//     𝑎𝑙𝑡𝑢𝑟𝑎2

int main(){
float p, a, r;
setlocale(LC_ALL, "Portuguese");
printf("Informe o seu peso: \n");
scanf("%f", &p);
printf("Informe a sua altura: \n");
scanf("%f", &a);
r = p / (a * a);
printf("O seu IMC é de: %.1f\n", r);
    return 0;
}