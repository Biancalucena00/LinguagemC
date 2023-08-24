#include<stdio.h>


main(){

  /*
 Faça um programa em que o usuário digite o custo de uma determinada mercadoria, 
 em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). 
 Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
*/

//variaveis 
float custo, frete, despesas, valorBruto, valorVenda, lucro; 

printf("digite o valor custo do produto");
scanf("%f", &custo);

printf("digite o valor de frete do produto");
scanf("%f", &frete);

printf("digite o valor das despesas do produto");
scanf("%f", &despesas);

//calcular o valor bruto do produto

// valor bruto = custo + frete+ despesas

valorBruto = custo + frete+ despesas;

//informar o valor bruto para o usuario 

printf("o valor bruto do produto e: R$%.2f. digite o valor da venda: ");
scanf("%f", &valorVenda);

// calcular do lucro 
lucro = ((valorVenda - valorBruto) *100) /valorBruto;

// apresentar lucro

printf("sua apresentacao de lucro R$%.2f", lucro );





}