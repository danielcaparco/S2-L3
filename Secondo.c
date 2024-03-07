#include <stdio.h>

int main(){

int a, b;
int media;

printf("Calcoliamo la media:\n");

printf("Inserisci il primo numero:\n");
scanf("%d", &a);

printf("Inserisci secondo numero:\n");
scanf("%d", &b);

media = (a + b) /2;

printf("La media è:%2f\n", media);

return 0;
}