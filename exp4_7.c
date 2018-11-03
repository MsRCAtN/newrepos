#include "stdio.h"
int GCD(int r, int s)
{
    int t = r % s;
    if (t != 0)
    {
        return GCD(s, t);
    }
    else
    {
        return s;
    }
}
int main()
{
    printf("Please input 2 interge number\n");
    int r = 0;
    int s = 0;
    scanf("%i %i", &r, &s);
    if (r < 0 || s < 10)
    {
        printf("Wrong input\n");
    }
    else
    {
        printf("%d", GCD(r, s));
    }
    system("pause");
    return 0;
}
