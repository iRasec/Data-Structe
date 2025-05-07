#include <stdio.h>
#include <stdlib.h>

int proxPrimo(int p) {
    int i, proximo = p + 1;
    int ehPrimo;

    while (1) {
        ehPrimo = 1;
        for (i = 2; i <= proximo/2; i++) {
            if (proximo % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
        if (ehPrimo) {
            return proximo;
        }
        proximo++;
    }
}


int mmc(int a, int b, int p)
{
    if (a == 1 && b == 1){
        return 1;
    }
    else if (a % p == 0 && b % p == 0){
        return p * mmc(a/p, b/p, p);
    }
    else if (a % p == 0){
        return p * mmc(a/p, b, p);
    }
    else if(b % p == 0){
        return p * mmc(a, b/p, p);
    }
    else {
        return mmc(a, b, proxPrimo(p));
    }
}

int main()
{
    int a2 = 5, b2 = 10, p2 = 2, res;

    res = mmc(a2, b2, p2);
    printf("%d", res);

    return 0;
}
