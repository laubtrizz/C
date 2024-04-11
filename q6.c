#include<stdio.h>
#include<locale.h>

int main(){
float n, f;
printf ("Informe a temperatura em °F\n");
scanf("%f", &n);
f=(n - 32)/1.8;
printf("%.1fF° é = %.1fC°\n" , n, f );

    return 0;
}