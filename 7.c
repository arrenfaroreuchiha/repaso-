#include <stdio.h>
#include <stdlib.h>
int i,j,a,b,z;
int c[100][100];
int d[100];
int primo = 0;
int x[100];

int main(){
    printf ("Super Codigo: \n");
    printf ("cantidad de numeros:");
    scanf ("%d", &a);
    for(i=0; i<a; i++){
             for (j=0; j<a; j++){
                 printf ("numero:");
                 scanf ("%d",&b);
                 c[i][j]= b;
                 primo = b % 2;
                 z = z + b;
                 if (primo == 0){
                           d[i] = b;
                       }
                 else{
                      x[i] = b;
                      } 
                 }
             }
    for(i=0; i<a; i++){
             for(j=0; j<a; j++){
                      printf ("%d \n", c[i][j]);
                      }
             }
    printf ("este es el vector de los no primos \n");
    for(i=0; i<a; i++){
             printf ("%d \n", x[i]);
             }
    printf ("este es el vector de los primos \n");
    for(i=0; i<a; i++){
             printf ("%d \n", d[i]);
             }
    printf ("Esta es la suma: %d \n", z);
 
  system("PAUSE");	
  return 0;
}
