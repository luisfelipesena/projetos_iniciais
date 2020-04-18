#include <stdio.h>
#include<stdlib.h>
int main(){
 char nome[30];
 float peso,altura,imc;
 //pedindo nome,altura e peso
 printf("Insira seu Nome:\n");
 scanf("%[^\n]*s",&nome);
 printf("Digite seu Peso em Kg:\n");
 scanf("%f",&peso);
 printf("Digite sua altura em metro:\n");
 scanf("%f",&altura);
  //conversão e media
 imc=peso/(altura*altura);
 printf("seu imc eh:%.2f\n",imc);
  if(imc<18.5){
    printf("\n %s,voce esta abaixo do peso,va ao medico urgentemente\n",nome);
  }
 else
  if(imc>=18.5&&imc<=24.9){
    printf("%s,vc esta no seu peso normal\n",nome);
  }
 else
   if(imc>=25&&imc<=29.9){
    printf("%s,vc esta com sobrepeso\n",nome);
   }
 else
   if(imc>=30&&imc<=34.9){
    printf("%s,vc esta com obesidade grau 1\n",nome);
   }
 else
   if(imc>=35&&imc<=39.9){
    printf("%s,vc esta com obesidade grau 2\n",nome);
   }
 else{
    printf("%s,vc esta com obesidade grau 3, por favor busque ajuda medica\n",nome);
 }
if(imc>24.9){
    printf("%s,voce esta %.2f kg acima do peso normal\n",nome,(imc-24.9)*altura*altura);
}
 else
   if
(imc<18.5){
    ;printf("%s,voce esta %.2f kg abaixo do peso normal\n",nome,(18.5-imc)*altura*altura);
}
 else{
    return 0;
 }
system("pause");
  }

