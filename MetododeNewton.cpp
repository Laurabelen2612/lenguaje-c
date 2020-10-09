
#include <stdio.h>
#include <math.h>
#include <conio.h>

int   IntMaximosIntentos,intentos,n=0;
float  floatRaizInicial,Xnp1=0,Xn=0,FdeXn=0,DerivadaFdeXn=0,error=0,tolerancia=0.001, valorvalt, V=0 ;

 
main()

   {

       int a, b;

       printf("resistencia\n");

       scanf("%f", &floatRaizInicial);
       
       printf("voltaje\n");

              scanf("%f", &valorvalt);

       printf("Ingrese el valor del numero maximo de intentos:\n");

       scanf("%d", &IntMaximosIntentos);

  Xn=floatRaizInicial;
  V=valorvalt;
     
  do{
  //Aquí puede depositar su función --- f(x) --- si la va a cambiar.
  FdeXn=(V-0.7)*(V-0.7)/Xn ;
  
  //Aquí puede depositar la derivada de su función --- f'(x) --- si la va a cambiar.
  DerivadaFdeXn=2*(V-0.7)/Xn;
  
  //Este es el algoritmo principal
  Xnp1=(V-0.7)-(FdeXn/DerivadaFdeXn);
  //Este es el algoritmo principal
  
  error=(V-0.7)-Xnp1;  
  
  if(error<0)
  error=Xnp1-(V-0.7);
  intentos++;
  if(intentos==IntMaximosIntentos)
  error=tolerancia;
  V=Xnp1;
  
  }while(error>tolerancia);
  
  printf("\n La raiz mas aproximada es %f, con %d intentos", Xnp1,intentos);
        getch();
 

   }
