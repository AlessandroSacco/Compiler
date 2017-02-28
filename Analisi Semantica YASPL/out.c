#include <stdio.h> 
int main() 
{
int input,n1,n2,n;	
void sum()
{
int sum,i;
sum=n1;
i=1;
while(i<=n2) { 	 
sum=sum+1;
i=i+1;
}
printf("Il risultato della somma dei due numeri è: %d ",sum);
}
void mult()
{
int mult;
mult=n1;
while(n2>1) { 	 
mult=mult+n1;
n2=n2-1;
}
printf("Il risultato della moltiplicazione dei due numeri è: %d ",mult);
}
void div()
{
int q,div;
q=n1;
while(q>0) { 	 
q=q-n2;
div=div+1;
}
printf("Il risultato della divisione tra i due numeri è: %d ",div);
}
void pow()
{
int pow;
pow=n1;
while(n2>1) { 	 
pow=pow*n1;
n2=n2-1;
}
printf("Il risultato dell'elevamento a potenza è: %d ",pow);
}
void fib()
{
int a,b,c,i;
if(n<=2){ 	
printf("Il numero di fibonacci è: 1");}
a=1;
b=1;
i=0;
while(i<n-2) { 	 
c=a+b;
b=a;
a=c;
i=i+1;
}
printf("Il numero di fibonacci è: %d ",c);
}
printf("Inserire 1 per effettuare la somma tra interi\n2 per la moltiplicazione di due numeri utilizzando la somma,\n3 per la divisione intera fra due numeri positivi,\n4 per l’elevamento a potenza,\n5 per la successione di Fibonacci\n");
scanf("%d",&input);
if(input==1){ 	 
printf("Inserisci i due numeri\n");
scanf("%d %d",&n1,&n2);
sum();
}
else { 	 
if(input==2){ 	 
printf("Inserisci i due numeri\n");
scanf("%d %d",&n1,&n2);
mult();
}
else { 	 
if(input==3){ 	 
printf("Inserisci i due numeri\n");
scanf("%d %d",&n1,&n2);
div();
}
else { 	 
if(input==4){ 	 
printf("Inserisci i due numeri\n");
scanf("%d %d",&n1,&n2);
pow();
}
else { 	 
if(input==5){ 	 
printf("Inserisci il numero\n");
scanf("%d",&n);
fib();
}
else { 	 
printf("Il numero inserito è errato\n");
}
}
}
}
}
return 0; 
}