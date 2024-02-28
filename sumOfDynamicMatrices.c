#include<stdio.h>
#include<stdlib.h>


int** suma(int ren, int col, int **mat1, int **mat2);


int main()
{
    int ren, col, i, j;
    int **mat3;
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
            scanf("%d ", *(mat1+i)+j);
        }
    }

    int **mat2 = (int**)malloc(ren*sizeof(int*));
    for (i=0; i<ren; i++)
    {
        *(mat2+i) = (int*)malloc(col*sizeof(int));
    }
    for(i=0; i<ren; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", *(mat2+i)+j);
        }
    }
    mat3=suma(ren, col, mat1, mat2);

    for(i=0; i<ren; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", *(*(mat3+i)+j));
        }
        printf("\n");
    }
    free(mat3);
    free(mat2);
    free(mat1);
}

int** suma(int ren, int col, int **mat1, int **mat2)
{
    int i, j;
    int **mat3 = (int**)malloc(ren*sizeof(int*));
    for (i=0; i<ren; i++)
    {
        *(mat3+i) = (int*)malloc(col*sizeof(int));
    }
    for(i=0; i<ren; i++)
    {
        for(j=0; j<col; j++)
        {
            *(*(mat3+i)+j) = *(*(mat1+i)+j)+*(*(mat2+i)+j);
        }
    }
    return (mat3);
}