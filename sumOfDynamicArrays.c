#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, suma=0;
    int *p;
    p=(int*)malloc(n*sizeof(int));
    //printf("Cual es la cantidad de elementos del arreglo? \n");
    scanf("%d ", &n);
    for(i=0; i<n; i++)
    {
        //printf("Cual es el dato %d \n", i+1);
        scanf("%d",(p+i));
    }
    for (i=0; i<n; i++)
    {
        suma+=*(p+i);
    }
    printf("%d", suma);
    free(p);
}