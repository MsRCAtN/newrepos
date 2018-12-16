#include <stdio.h>
void gcd(int x, int y)
{
    int t;
    t = x % y;
    if (t == 0)
    {
        printf("%d", x);
    }
}
int main()
{
    int x, y, t;
    scanf("%d %d", &x, &y);
    for (t = 0; t = !0; x = y, y = t)
    {
        gcd(x, y);
    }
    return 0;
}