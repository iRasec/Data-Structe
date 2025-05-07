#include <stdio.h>
#include <stdlib.h>

int mdc(a,b)
{
    if(b == 0)
    {
        return a;
    }
    else if(b > 0)
    {
        return mdc(b, a%b);
    }
}

int main()
{
    int a2 = 5, b2 = 10, res;

    res = mdc(a2,b2);
    printf("%d", res);

    return 0;
}
