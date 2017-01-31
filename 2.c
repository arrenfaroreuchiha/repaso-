#include <stdio.h>
#include <stdlib.h>
int a,i;
int b[100];
int contador = 0;

int main(){
    printf ("repasando vector \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        printf ("cual es el numero:", i+1);
        scanf ("%d",&b[i]);
        contador = contador + b[i];
        }
    for (i=0; i<a; i++){
        printf ("%d \n",b[i]);
        }
    
    printf ("esta es la suma: %d \n", contador);
  
  system("PAUSE");	
  return 0;
}
