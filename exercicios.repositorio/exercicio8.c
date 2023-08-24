#include<stdio.h>

main()
{
   
   /*
   Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
   Calcular e escrever o valor do novo salário.
   */

  //variavel 

  float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

  printf("digite seu salario atual");
  scanf("%f", &salarioAtual);

   printf("digite a porcentagem de reajuste");
  scanf("%f", &porcentagemReajuste);

  reajusteFinal = porcentagemReajuste/100;

  // calcular um novo salario 

  novoSalario= (salarioAtual * reajusteFinal) + salarioAtual;

  printf("novo salario: R$%.2f", novoSalario);





}