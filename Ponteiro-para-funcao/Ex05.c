#include <stdio.h>
#include <stdlib.h>

typedef struct data Data;

struct data
{
    int dia, mes, ano;
};

int diferencaDias(Data *data1, Data *data2)
{
    int dias1 = data1->dia + (data1->mes * 30) + (data1->ano * 365);
    int dias2 = data2->dia + (data2->mes * 30) + (data2->ano * 365);

    return abs(dias1 - dias2);
}

void main()
{
    Data *data1, *data2;

    data1 = malloc(sizeof(Data));
    data2 = malloc(sizeof(Data));

    printf("Digite primeira data DD/MM/AAAA: ");
    scanf("%d/%d/%d", &data1->dia, &data1->mes, &data1->ano);

    printf("Digite segunda data DD/MM/AAAA: ");
    scanf("%d/%d/%d", &data2->dia, &data2->mes, &data2->ano);

    printf("A diferenca das datas sao de: %d dias", diferencaDias(data1, data2));

}
