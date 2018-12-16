#include <stdio.h>
int main()
{
    int r, s = 2, k;
    scanf("%d", &r);
    if (r == 2)
    {
        printf("2 is prime number\n");
    }
    else
    {
        while (r % s != 0 && s < r)
        {
            s++;
        }
        if (s == r)
        {
            printf("%d is prime number\n", r);
        }
        else
        {
            printf("%d is non prime number\n", r);
        }
    }

    system("pause");
    return 0;
}