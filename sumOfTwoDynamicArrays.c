#include<stdio.h>
#include<stdlib.h>

int *suma(int *p1, int *p2, int n);

int main()
{
    int *p1, *p2, *p3;
    int n, i, j;
    //printf("Cual es la cantidad de elementos del arreglo? \n");
    scanf("%d", &n);
    p1=(int*)malloc(n*sizeof(int));
    p2=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        //printf("Cual es el dato %d del primer arreglo \n", i+1);
        scanf("%d",(p1+i));
    }

    for(i=0; i<n; i++)
    {
        //printf("Cual es el dato %d del segundo arreglo \n", i+1);
        scanf("%d",(p2+i));
    }

    p3=suma(p1,p2,n);
    for(i=0; i<n; i++)
    {
         printf("%d ",*(p3+i));
    }
    free(p3);
    free(p2);
    free(p1);
    return 0;
}

int *suma(int *p1, int *p2, int n)
{
    int suma, i;
    int *p3;
    p3=(int*)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        *(p3+i)=*(p1+i)+*(p2+n-i-1);
    }
    return (p3);
}