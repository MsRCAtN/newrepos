#include <stdio.h>
void DrawTriangle(int n, char c)
{
    int p, k, i, s, e;
    for (i = 1,e = n; i != n + 1; i++, e--)
    {
        for (k = e; k - 1 != 0; k--)
        {
            printf(" ");
        }
        for (s = 2 * i; s - 1 > 0; s--)
        {
            printf("%c", c);
        }
        if (s = -1)
        {
            printf("\n");
        }
    }
}
int main()
{
    DrawTriangle(60, '*');
    system("pause");
    return 0;
}

