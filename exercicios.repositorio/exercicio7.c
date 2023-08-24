#include<stdio.h>


main()

{
    /*
    Faça um algoritmo que leia a idade de uma pessoa expressa em anos, 
    meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
    Considerar ano com 365 dias e mês com 30 dias.
    */

   // variaiveis 

   int anos, meses, dias, idadeDias; 

   printf("digite sua idade em nos, meses e dias");
   scanf ("%d, %d, %d", &anos, &meses, &dias);
   idadeDias= (anos * 365) + (meses* 30) + (dias);
   printf("dias vividos: %d", idadeDias);
}
