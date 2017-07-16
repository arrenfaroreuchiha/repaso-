#include <stdio.h>
#include <stdlib.h>
int a, b, c;

// Funcion principal
int main(){
   c = home();
    
   printf("Esta es el area del triangulo: %d \n", c);
  
  system("PAUSE");	
  return 0;
}

int home(){
   a = datosA();
   b = datosB();
   c = area(a, b);
   return c;
}

int datosA(){
    int a;
    
    printf("base:");
    scanf("%d",&a);    
    return a;
}

int datosB(){
    int b;
    
    printf("altura:");
    scanf("%d",&b);
    return b;    
}

int area (int a, int b){
    return a * b / 2;    
}
