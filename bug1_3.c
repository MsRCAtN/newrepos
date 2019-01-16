#include "stdio.h"
#define S 7
int main()
{
    int a[S] = {1, 2, 3, 4, 5, 6};
    delete (a, 1);
    add(a, 6);
}
int delete (int array[], int N)
{
    for (int i = 0; i < (N - 1); i++)
    {
        array[i] = array[i + 1];
    }
    return array;
}