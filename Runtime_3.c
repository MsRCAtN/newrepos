#include "stdio.h"
int gRN(int i, int s)
{
    int r;
    r = s % i;
    if (r == 0)
    {
        return i;
    }
    else if (r != 0)
    {
        return gRN(i, r);
    }
}

int main()
{
    int i, s;
    scanf("%d %d", &i, &s);
    printf("%d", gRN(i, s));
    system("pause");
    return 0;
}