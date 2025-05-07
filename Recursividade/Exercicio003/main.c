#include <stdio.h>
#include <stdlib.h>

int ocorr(k,n)
{
    if(n == 0 && k != 0)
    {
        return 0;
    }
    else if (n%10 == k)
    {
        return 1 + ocorr(k, n/10);
    }
    else if(n%10 != k)
    {
        return 0 + ocorr(k,n/10);
    }
}

int main()
{
    int k2 = 10, n2 = 100, res;

    res = ocorr(k2,n2);
    printf("%d", res);

    return 0;
}
