#include <stdio.h>
#include <stdlib.h>

int perfeito(int *n)
{
    int i;
    int *soma;

    soma = malloc(sizeof(int));
    *soma = 0;
    for(i= 1; i<*n; i++)
    {
        if(*n % i == 0)
        {
            *soma += i;
        }
    }

    if(*soma == *n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int *num;

    printf("Numero: ");
    num = malloc(sizeof(int));
    scanf("%d", num);

    if(perfeito(num)== 1)
    {
        printf("Numero %d eh perfeito.", *num);
    }
    else
    {
        printf("Numero %d nao eh perfeito.", *num);
    }
}
