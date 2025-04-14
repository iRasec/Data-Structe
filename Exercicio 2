#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p1, *p2, *p3;

    p1 = malloc(sizeof(int));
    p2 = malloc(sizeof(int));
    p3 = malloc(sizeof(int));

    printf("Digite 3 numeros inteiros:\n");
    scanf("%d", p1);
    scanf("%d", p2);
    scanf("%d", p3);

    int a = *((int*)p1);
    int b = *((int*)p2);
    int c = *((int*)p3);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Os valores fornecidos nao formam um triangulo.\n");
    }
    return 0;
}
