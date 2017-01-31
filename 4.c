#include <stdio.h>
#include <stdlib.h>
int i,a,j;
int b[100][100];
int c[100];
int s = 0;

int main(){
    printf ("repaso de matriz a vector \n");
    printf ("cantidad:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("numero:");
            scanf ("%d", &b[i][j]);    
            }
        }
    printf ("aqui se imprime la matrix \n");
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("%d", b[i][j]);
            }
        }
    printf ("\n");
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            c[s] = b[i][j];
            s = s + 1; 
            }
        }
    printf ("aqui se convirtio la matrix en un  vector \n");   
    for (i=0; i<(a*a); i++){
        printf ("%d", c[i]);
        }
    printf ("\n");
    
  system("PAUSE");	
  return 0;
}
