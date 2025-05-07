#include <stdio.h>
#include <stdlib.h>

int hs(int n)
{
    if (n == 1){
        return 1;
    }
    else if (n%2 == 0){
        return n+hs(n/2);
    }
    else if (n%2 != 0){
        return n+hs((n*3)+1);
    }
}


int main()
{
    int num = 3, res;

    res = hs(num);

    printf("%d", res);
    return 0;
}
