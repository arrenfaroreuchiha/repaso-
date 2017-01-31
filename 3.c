#include <stdio.h>
#include <stdlib.h>
int a,i,j;
int b[100][100]
;
int main(){
    printf ("cantidad de numeros:");
    scanf ("%d",&a);
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("numero:");
            scanf ("%d",&b[i][j]);
            }
        }
    for (i=0; i<a; i++){
        for (j=0; j<a; j++){
            printf ("%d \n", b[i][j]);
            }
        }
  
  system("PAUSE");	
  return 0;
}
