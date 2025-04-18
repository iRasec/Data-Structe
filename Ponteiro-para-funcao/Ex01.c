#include <stdio.h>
#include <stdlib.h>

void main()
{
    void *p1, *p2;
    float media;

    p1 = malloc(sizeof(int));
    p2 = malloc(sizeof(int));

    printf("Digite valor do primeiro numero: ");
    scanf("%d", p1);
    printf("Digite valor do segundo numero: ");
    scanf("%d", p2);

    media = (*((int*)p1) + *((int*)p2)) / 2;

    printf("Media = %.1f", media);

}
