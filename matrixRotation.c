#include<stdio.h>
#include<stdlib.h>


int** rotacion(int ren, int col, int **mat1);


int main()
{
    int ren, col, i, j;
    int **mat2;
    scanf("%d ", &ren);
    scanf("%d", &col);
    int **mat1 = (int**)malloc(ren*sizeof(int*));
    for (i=0; i<ren; i++)
    {
        *(mat1+i) = (int*)malloc(col*sizeof(int));
    }
    for(i=0; i<ren; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", *(mat1+i)+j);
        }
    }

    mat2=rotacion(ren, col, mat1);

    for(i=0; i<ren; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", *(*(mat2+i)+j));
        }
        printf("\n");
    }
    free(mat2);
    free(mat1);
}

int** rotacion(int ren, int col, int** mat1)
{
    int i, j, a, b;
    int **mat2 = (int**)malloc(ren*sizeof(int*));
    for (i=0; i<ren; i++)
    {
        *(mat2+i) = (int*)malloc(col*sizeof(int));
    }
    for(i=0; i<ren; i++)
    {
        a=ren-i-1;
        for(j=0; j<col; j++)
        {
            b=col-j-1;
            *(*(mat2+i)+j) = *(*(mat1+a)+b);
        }
    }
    return (mat2);
}