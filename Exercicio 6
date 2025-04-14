#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto2d Ponto2D;

struct ponto2d
{
    float x, y;
};

float distancia(Ponto2D *ponto1, Ponto2D *ponto2)
{
    return sqrt( pow(ponto2->x - ponto1->x, 2) + pow(ponto2->y - ponto1->y, 2) );
}

void main()
{
    Ponto2D *ponto1, *ponto2;

    ponto1 = malloc(sizeof(Ponto2D));
    ponto2 = malloc(sizeof(Ponto2D));

    printf("Digite primeiro ponto X e Y: ");
    scanf("%f %f", &ponto1->x, &ponto1->y);

    printf("Digite segundo ponto X e Y: ");
    scanf("%f %f", &ponto2->x, &ponto2->y);

    printf("A distancia dos pontos eh: %.2f", distancia(ponto1, ponto2));

}
