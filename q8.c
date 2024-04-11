#include <stdio.h>
#include <locale.h>

//Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
//de vida, aproximadamente, ele já viveu. Para simplificar o seu trabalho, ignore os
//anos bissextos e use somente a idade, mas deixe o usuário ciente de que o resultado
//apresentado é um valor aproximado.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    printf("Informe a sua idade: ");
    scanf("%i", &i);
    printf("Você já viveu, aproximadamente %i dias\n", i * 365);
    return 0;
}