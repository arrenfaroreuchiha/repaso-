#include <stdio.h>
#include <stdlib.h>
int a,j,i,l;
int suma = 0;
int b[100][100];
int c[50];

int main(){
    printf ("Cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("numero:");
            scanf ("%d", &b[i][j]);
            }
        }
    printf ("\n");
    printf ("esta es la matriz \n");    
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("%d \n", b[i][j]);
            }
        }
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            c[l] = b[i][j];
            l = l + 1;
            suma = suma + b[i][j];
            }
        }
    printf ("\n");
    printf ("este es el vector: \n");
    for (i=0; i<(a*a); i++){
        printf ("%d \n", c[i]);
        }
    printf ("\n");
    printf ("Esta es la suma: %d \n", suma);
    printf ("\n");
  
  system("PAUSE");	
  return 0;
}
