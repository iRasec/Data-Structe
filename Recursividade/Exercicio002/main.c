#include <stdio.h>
#include <stdlib.h>

int mult(int a,int b)
{
    if(b == 0)
        return 0;
    else
      return a + mult(a,b - 1);
}

int main()
{
    int a2 = 5, b2 = 3, res;

    res = mult(a2,b2);
    printf("%d", res);
    return 0;
}
