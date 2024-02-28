#include<stdio.h>
#include<stdlib.h>


int** multiplica(int ren1, int col1, int col2, int **mat1, int **mat2);


int main()
{
    int ren1, col1, ren2, col2, i, j;
    int **mat3;
    scanf("%d ", &ren1);
    scanf("%d ", &col1);
    ren2=col1;
    scanf("%d", &col2);
    int **mat1 = (int**)malloc(ren1*sizeof(int*));
    for (i=0; i<ren1; i++)
    {
        *(mat1+i) = (int*)malloc(col1*sizeof(int));
    }
    for(i=0; i<ren1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d ", *(mat1+i)+j);
        }
    }

    int **mat2 = (int**)malloc(ren2*sizeof(int*));
    for (i=0; i<ren2; i++)
    {
        *(mat2+i) = (int*)malloc(col2*sizeof(int));
    }
    for(i=0; i<ren2; i++)
    {
        for(j=0; j<col2; j++)
        {
            scanf("%d", *(mat2+i)+j);
        }
    }
    mat3=multiplica(ren1,col1, col2, mat1, mat2);

    for(i=0; i<ren1; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d ", *(*(mat3+i)+j));
        }
        printf("\n");
    }
    free(mat3);
    free(mat2);
    free(mat1);
}

int** multiplica(int ren1, int col1, int col2, int **mat1, int **mat2)
{
    int i, j, k;
    int **mat3 = (int**)malloc(ren1*sizeof(int*));
    for (i=0; i<ren1; i++)
    {
        *(mat3+i) = (int*)malloc(col2*sizeof(int));
    }

        for(i=0; i<ren1; i++)
        {
            for(k=0; k<col1; k++)
            {
                *(*(mat3+i)+k) = 0;
            }

        }
        
        for (i=0; i<ren1; i++)
        {
            for (j=0; j<col1; j++)
            {
                for (k=0; k<col2; k++)
                {
                    *(*(mat3+i)+k) =  *(*(mat3+i)+k) + ((*(*(mat1+i)+j))*(*(*(mat2+j)+k)));
                }
            }
        }
   return (mat3);
}