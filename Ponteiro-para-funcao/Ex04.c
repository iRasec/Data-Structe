#include <stdio.h>
#include <stdlib.h>

int maior(int *vetor, int tam )
{
    int i;
    int *maior;
    maior = malloc(sizeof(int));
    *maior = *vetor;
    for(i=0; i<tam; i++)
    {
        if(*(vetor + i) > *maior)
        {
            *maior = *(vetor + i);
        }
    }
    return *maior;
}


int main()
{
    int *n, *v;
    int i;

    printf("Quantos numeros deseja alocar de memoria ? ");
    n = malloc(sizeof(int));
    scanf("%d", n);

    v = malloc(sizeof(int)* (*n));
    for(i=0; i< *n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", (v+i));
    }

    for(i=0; i<*n; i++){
        printf("%d \n", *(v+i));
    }
    printf("Maior: %d", maior(v, *n));

    return 0;
}
