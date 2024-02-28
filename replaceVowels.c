#include<stdlib.h>
#include<string.h>

int main()
{
    int n, i,f, ban, sum=0;
    char *p;
    p = (char*)malloc(n*sizeof(char));
    //printf("Cuantos elementos tendra el arreglo?\n");
    scanf("%d \n", &n);
    ban=0;
    for(i=0; i<n; i++)
    {
        //printf("Cual es el caracter? \n");
        //fflush(stdin);
        scanf("%c", &*(p+i));
        sum++;
        if(*(p+i)== '\n')
        {
            break;
        }
    }
    f=sum;

    for(i=0; i<n; i++)
    {
        if(*(p+i)== 'A' || *(p+i)=='a' || *(p+i)=='E' || *(p+i)=='e' || *(p+i)=='I' || *(p+i)=='i' || *(p+i)=='O' || *(p+i)=='o' || *(p+i)=='U' || *(p+i)=='u')
        {
            *(p+i)= '*';
        }
    }
//    for(i=0; i<f; i++)
//    {
//        printf("%c", *(p+i));
//    }
    printf("%s", p);

    free(p);
}