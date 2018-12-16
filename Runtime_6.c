/*#include <stdio.h>
void narcissisticNumber(int n)
{
    int a, b, c, h;
    a = n % 10;
    b = n / 10 % 10;
    c = n % 100;
    if (a * a * a + b * b * b + c * c * c == n)
    {
        printf("%5d", n);
    }
}
int main()
{
    int a, b, c, h, n;
    for (n = 100; n < 1000; n++)
    {
        narcissisticNumber(n);
    }

    system("pause");
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int i,j,k,n;
    for(i=100;i<1000;i++)
    {
        j=i%10;
        k=i/10%10;
        n=i/100;
        if(j*j*j+k*k*k+n*n*n==i)
            printf("%d  ",i);
    }
    getchar( );
    return 0;
}