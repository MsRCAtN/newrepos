#include "stdio.h"
#define R 3
#define C 3
int enterMatrix(int objArray[3][3]) //Enter a 3x3 matrix
{

    for (int n = 0; n < R; n++)
    {
        int k, l, m;
        scanf("%d %d %d", &k, &l, &m);
        objArray[n][0] = k;
        objArray[n][1] = l;
        objArray[n][2] = m;
    }
    return objArray[3][3];
}
int outputArray(int objArray[3][3])//Output a 3x3 matrix
{
    for (int i = 0; i < C; i++)
    {
        printf("%d %d %d\n", objArray[n][0], objArray[n][1], objArray[n][2]);
    }
    return 0;
}
int transpositionMatrix(int objArray[3][3])//Return a current transposed matrix
{
    int m, n, transMatrix[3][3];
    for (m = 0; m < C; m++)
    {
        for (n = 0; n < R; n++)
        {
            transMatrix[n][m] = objArray[m][n];
        }
    }
    return transMatrix;
}
int sumDiagLine(int objArray[3][3]){
    int sum;
    for(int n = 0, sum = 0;n < R;n++){
        sum += objArray[n][n];
    }
    return sum;
}
int main()
{
    int array[3][3];
    array[3][3] = 
}
