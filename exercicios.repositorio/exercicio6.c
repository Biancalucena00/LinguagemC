#include<stdio.h>
#include<math.h>

main (){

    /*
    Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.
    */

   double raio, area, PI= 3.1415;

   printf("digite o valor do raio");
   scanf("%lf", &raio);

   // calculo da area do circulo= pi * (reio * raio)

   area = PI * (raio * raio);
   area= PI * (pow (raio, 2));

   printf("area do circulo e %lf: ", area);
}