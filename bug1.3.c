#include "stdio.h"
#include <time.h>
#include <stdlib.h>
#define Col 100
#define Row 100
int main()
{
    int m, n;
    int **array;
    array = (int **)malloc(Col * sizeof(int));
    srand(time(0));
    for (n = 0; n < Row; n++)
    {
        for (m = 0; m < Col; m++)
        {
            array[n][m] = rand( ) % 100;
        }
    }
    
}