#include<stdio.h>

main(){

    float largura, comprimento, area;

     printf("digite largura");
   scanf("%f",&largura);

   printf("digite cumprimento");
   scanf("%f", &comprimento);

   // calcular area

   area= largura * comprimento;

   // apresentacao de saida 

   printf("a area da sala e: %.2fm2", area); 
}