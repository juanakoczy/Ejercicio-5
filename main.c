//Escriba una función que intercambie el valor de dos variables enteras utilizando punteros//
// y los muestre antes y después del intercambio por pantalla.
#include <stdio.h>
void intercambiar (int *a, int*b);

int main()
{
int n1, n2;
n1=1;
n2=3;
printf ("Antes de intercambiar: %d,%d\n",n1,n2);
    intercambiar(&n1,&n2);
printf ("Despues de intercambiar: %d,%d\n",n1,n2);
    return 0;
}

void intercambiar (int*a , int*b) {

    int cambio= *a;
    *a=*b;
    *b=cambio;
}


