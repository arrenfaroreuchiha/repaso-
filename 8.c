#include <stdio.h>
#include <stdlib.h>
int i,a,b,s;
int d = 0;
int c[100][100];
int g[100];

int main(){
    printf ("Repaso \n");
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (s=0; s<a; s++){
            printf ("Cual es el numero:");
            scanf ("%d",&c[i][s]);
            g[i] = c[i][s];
            d = d + g[i];
            }
        }
    printf ("\n");
    
    for (i=0; i<a; i++){
        printf ("%d", g[i]);
        }
    printf ("\n");
    for (i=0; i<a; i++){
        for (s=0; s<a; s++){
            printf ("%d", c[i][s]);
            }
        }
    
    printf ("\n");
    printf ("Esta es la suma de los numeros: %d", d);
    
  system("PAUSE");	
  return 0;
}

