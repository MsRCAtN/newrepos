#include <stdio.h>
int pN(int fS)
{
    int r = 2;
    while (fS % r != 0 && r < fS)
    {
        r++;
    }
    if (fS == r)
    {
        return 10;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int obj, fs1, fs2, rS0, n = 0;
    for (obj = 4; obj < 2000; obj = obj + 2)
    {
        for (fs1 = 1, rS0 = 5; rS0 != 10; fs1++)
        {
            fs2 = obj - fs1;
            if (pN(fs1) == 10 && pN(fs2) == 10)
            {
                printf("%d", obj);
                rS0 = 10;
            }
        }
    }
    n++;
    if (n % 5 == 0)
    {
        printf("\n");
        n = 0; 
    }
    system("pause");
    return 0;
}