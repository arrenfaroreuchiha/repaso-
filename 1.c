#include <stdio.h>
#include <stdlib.h>
int a,i,j;
int b[100][100];
int contador = 0;

int main(){
    printf ("repaso \n");
    printf ("cantidad:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("cual es el numero:");
            scanf ("%d",&b[i][j]);
            }
        }
    
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("%d \n", b[i][j]);
            contador = contador + b[i][j];
            }
        }
    
    printf ("esta es la suma: %d \n", contador);
    
  system("PAUSE");	
  return 0;
}
