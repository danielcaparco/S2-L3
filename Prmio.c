#include <stdio.h>



int main(){
    int a, b;
    int prodotto;

    printf("Calcoliamo la moltiplicazione tra due numeri.\n ");

    printf("Inserisci il primo numero\n: ");
 scanf("%d", &a);

 printf("Inserisci il secondo numero\n: ");
 scanf("%d", &b);

 prodotto = a * b;

 printf("Il prodotto dei due numeri é: %d\n",prodotto );
 return 0;
   
}