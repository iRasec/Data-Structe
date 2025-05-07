#include <stdio.h>
#include <stdlib.h>

russa(int a, int b){
    if(a == 1){
        return b;
    }
    else if (a > 1 && a%2 == 0){
            return russa(a/2, b *2);
    }
    else if (a > 1 && a%2 != 0){
        return b+russa(a/2, b*2);
    }
}

int main()
{
    int a2 = 27, b2 = 82, res;

    res = russa(a2,b2);

    printf("%d", res);

    return 0;
}
