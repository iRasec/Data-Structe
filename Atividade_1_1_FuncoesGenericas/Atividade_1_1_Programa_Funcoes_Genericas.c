#include <stdio.h>
#include "Atividade_1_1_FuncoesGenericas.h"

//-----------------------
float* alocaFloat(float n)
{
    float* pi = malloc(sizeof(float));
    *pi = n;
    return pi;
}

int* alocaInt(int n)
{
    int* pi = malloc(sizeof(int));
    *pi = n;
    return pi;
}

int   serPar (void* info)
{
    int* p = (int*) info;
    if(*p % 2 == 0)
       return 1;

    return 0;
}

int serPrimo(void* primo)
{
    int* pr = (int*) primo;
    if(*pr < 2 ) return 0;

    for(int i=2; i * i <= *pr; i++)
    {
        if(*pr % i == 0) return 0;
    }

    return 1;
}

int compararInt(void* info1, void* info2)
{
    int* n1 = (int*)info1;
    int* n2 = (int*)info2;

    return (*n1 - *n2);
}

float retornaFloat(void* num)
{
    return *(float*)num;
}

void dobra(void* num)
{
    int* n = (int*) num;
    return *n *= 2;
}

struct CartaVira
{
    char naipe;
    int  valor;
};


int regraValorENaipe(struct CartaBaralho carta, struct CartaBaralho vira)
{
    if((carta.valor == vira.valor +1)&&(carta.naipe == vira.naipe))
        return 1;
    else
        return 0;
}
//--------------------------
void main()
{
    struct CartaBaralho baralho[] = {
        {'P', 3},
        {'E', 4},
        {'O', 5},
        {'P', 6},
        {'C', 7}
    };

    int tamanho = sizeof(baralho) / sizeof(baralho[0]);

    struct CartaBaralho vira = {'E', 2};

    printf("Carta vira: Naipe = %c, Valor = %d\n", vira.naipe, vira.valor);

    identificarCoringa(baralho, tamanho, vira, regraValorENaipe);

    printf("Carta coringa encontrada: Naipe = %c, Valor = %d\n",
                   (baralho)->naipe, (baralho)->valor);

    /*float* v[5];
    v[0] = alocaFloat(4.2);
    v[1] = alocaFloat(8.6);
    v[2] = alocaFloat(9);
    v[3] = alocaFloat(8);
    v[4] = alocaFloat(11);*/

    /*int* v[5];
    v[0] = alocaInt(4);
    v[1] = alocaInt(8);
    v[2] = alocaInt(9);
    v[3] = alocaInt(8);
    v[4] = alocaInt(11);*/

    //int* contador = contar(v, 5, serPar);
    //printf("Quantos pares? %d", contador);

    //int* contador = contar(v, 5, serPrimo);
    //printf("Quantos primos? %d\n", contador);

    //int* resultado = encontrarMaior(v, 5, compararInt);
    //printf("Maior numero: %d", *resultado);

    //float media = calcularMedia(v, 5, retornaFloat);
    //printf("Media: %.2f", media);

    /*int i;
    int tam;
    tam = 5;

    aplicarOperacao(v, 5, dobra);

    for(i=0; i<tam; i++)
    {
        printf("Dobrado: %d\n", *v[i]);
    }*/

}
