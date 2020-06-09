#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
 char nome[30],operacao;
 int opcao;
 float a,b,c,x,y,resultado,imc;
 double af,bf,cf,delta,solso,solsub,xv,yv;
  printf("Ola visitante, insira seu nome abaixo:\n");
  scanf("%[^\n]*s",&nome);
  printf("Prazer em te conhecer %s, digite uma das opcoes abaixo de acordo com o que voce queira:\n",nome);
  susu:
  printf("Opcao 01 eh a calculadora comum\nOpcao 02 eh a calculadora de imc\nOpcao 03 eh relacionada a funcao do 2 grau\nOpcao 04 eh pra contar decrecentemente 3 num\nOpcao 05 eh\n");
  scanf("%d",&opcao);
  //tambem poderia ter botado while(opcao<01||opcao>04) em vez de goto susu
  switch(opcao)
  {
      //case 01=calculadora base do base
   case 01:{
       printf("%s,faca seus calculos:\n",nome);
       printf("%s,aperte 0x0 pra sair\n\n",nome);
       retorno:
       scanf("%f%c%f",&a,&operacao,&b);
         if(a==0&&operacao=='x'&&b==0)
    {
    printf("Saindo");
    return 0;
   }
        if(operacao=='+')
        {
            printf("=%.1f\n",a+b);
        }
        else
         if(operacao=='-')
        {
            printf("=%.1f\n",a-b);
        }
        else
         if(operacao=='*')
        {
            printf("=%.1f\n",a*b);
        }
        else
         if(operacao=='/')
        {
            if(a==0&&b==0)
            {
                printf("Indeterminacao ne bb...\n");
            }
            else
            if(b==0)
                {
                printf("Divisao por zero n existe ne bb...\n");
            }
            else
            {
              printf("=%.1f\n",a/b);
            }

        }
        else
        {
            printf("=operacao invalida\n");
            return 0;
        }
        printf("Faca outro calculo:\n");
        goto retorno;
        break;}
     //case 02=imc
     //a=altura;b=peso;
   case 02:{
     printf("%s,insira sua altura(em metros)e massa(em quilos)\n",nome);
     scanf("%f\n%f",&a,&b);
      imc=b/(a*a);
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
     printf("%s,voce esta %.2f kg acima do peso normal\n",nome,(imc-24.9)*a*a);
}
    else
    if
(imc<18.5){
    ;printf("%s,voce esta %.2f kg abaixo do peso normal\n",nome,(18.5-imc)*a*a);
}
    else{
     return 0;
 }
     break;}
  //case 03=funcoes do 2 grau
  //af,bf,cf= a da funcao,b da funcao e c da funcao;
   case 03:{
 printf("%s,Insira o a,b,c da funcao do 2 grau:f(x)=ax^2+bx+c\n",nome);
 scanf("%lf%lf%lf",&af,&bf,&cf);
if(af==0){
    printf("Isso nao eh uma funcao do 2 grau");
    return 0;
 }
//delta
    else{
    delta=((bf*bf)-4*af*cf);
    printf("Delta da funcao eh:%.1lf\n",delta);
    }
//delta condicionais
  if(delta<0){
    printf("a funcao f(x)=%.1lfx^2+(%.1lfx)+(%.1lf) nao possui solucoes reais\n",af,bf,cf);
    return 0;
 }
  else
  if(delta==0){
       printf("a funcao f(x)=%.1lfx^2+(%.1lfx)+(%.1lf) possui 2 solucoes reais iguais-> ",af,bf,cf);
 }
  else{
    printf("a funcao f(x)=%.1lfx^2+(%.1lfx)+(%.1lf) possui 2 solucoes reais distintas-> ",af,bf,cf);
 }
 //solso=solucao somando e solsub=solucao subtraindo
solso=(-bf)+ sqrt(delta)/2*af;
solsub=(-bf)- sqrt(delta)/2*af;
 printf("Solucoes da funcao:%.2lf e %.2lf\n",solso,solsub);
//xv e yv (olhar a outra forma)
xv=(-bf)/2*af;
yv=(-delta)/4*af;
printf("x do vertice eh %.1lf e y do vertice eh %.1lf\n",xv,yv);
if(af>0){
    printf("logo o ponto mais baixo da parabola eh (%.1lf,%.1lf)\n",xv,yv);
}
else{
    printf("logo o ponto mais alto da parabola eh (%.1lf,%.1lf)\n",xv,yv);
}
   }
   //ordem decrescente
   case 04:{
    printf("Insira 3 numeros\n");
    scanf("%f%f%f",&a,&b,&c);
    //vai ser printado em ordem decrescente necessariamente o a o b e o c, logo reorganizaremos os valores inseridos
     if (a <= b)//temos q botar q o b sera igual ao a, logo x=a,a=b,b=x{faz o caso contrário}
    {
	    x = a;
	    a = b;
	    b = x;
    }
     if (b <= c)//
    {
    	y = b;
	    b = c;
	    c = y;
    }
     if (a <= b)//necessario repetir para confirmacao, pd ser q haja um a=c
    {
	    x = a;
	    a = b;
    	b = x;
    }
    printf("%.1f\n%.1f\n%.1f\n",a,b,c);
}
   //
   case 05:{





   }
   //volta para o susu:
   default:{
       printf("\nEscolha uma das opcoes mostradas:\n\n");
    goto susu;
    break;}
}
getchar();
return 0;
}
