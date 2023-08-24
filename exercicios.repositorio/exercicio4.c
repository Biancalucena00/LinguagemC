#include<stdio.h>

main()
{
    /* 
    dado um valor em reais e a cotação do dolar, converta esse valor para dolares
    */
 float reais, cotacaoDolar, money; 

   printf("digite o valor em reais");
   scanf("%f", &reais);

   printf("digite a cotacao do dolar");
   scanf("%f", &cotacaoDolar);

   money= reais/cotacaoDolar;

   printf("valor em dolar e: %f.2", money);
   




   
}