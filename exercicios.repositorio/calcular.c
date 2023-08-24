#include<stdio.h>

main(){


  /*
  escreva um programa que recaba dois numeros e mostre a soma, subtração, a mutiplicaçaõ e a divisão desses numeros*/

  int num1, num2, soma, mult;
  float sub, div;

   //entrada de dados 
   printf("digite o primeiro numero");
   scanf("%d",&num1);

   printf("digite o segundo numero");
   scanf("%d", &num2);
 
   // operaçãoes 

   soma= num1 + num2;
   mult = num1 * num2;
   sub = (float) num1 - num2;
   div = (float) num1 / num2;

   // apresentação dos resultados 

   printf("soma: %d", soma);
   printf("multiplicacao; %d", mult);
   printf("subtracao: %f", sub);
   printf("divisao: %f", div);





}