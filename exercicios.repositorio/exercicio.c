#include<stdio.h>

main(){ 
   
    /*
    1 - declaração de variaveis 
    2 - entrada de dados para armazenamento 
    3 - apresentacão de dados
    4 - escrever algoritimo 
    */

   int idade; 
   double peso;
   float salario;

   printf ("digite sua idade: ");
   scanf ("%d", &idade);
   printf ("\n digite seu peso: ");
   scanf ("%lf", &peso);
   printf ("\n digite seu salario: ");
   scanf ("%f", &salario);

   print("as informações inseridas foram  idade; %d, peso: %lf, salario;%f");
}