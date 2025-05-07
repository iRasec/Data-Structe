#include <stdio.h>
#include <stdlib.h>

int perc(int h,int r)
{
    if(h == 0){
        return 0;
    }
    else
        return h+(h*r)+perc(h*r,r);
}

int main()
{
    int h2 = 5, r2 = 2, res;
    res = perc(h2,r2);
    printf("%d", res);
    return 0;
}
