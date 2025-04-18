#include <stdio.h>
#include <stdlib.h>

int soma(int x,int y)
{
    if(y == 0)
        return x;
    else
        return soma(x,y);
}

int main()
{
    int resultado;

    resultado = soma(3,2);
    printf("Soma: %d", resultado);
}
