#include "stdio.h"
#define Lenth 10
int search(int objectArray[], int object) //查找指定元素是否在该数组中
{
    int n;
    for (n = 0; n < (Lenth - 1); n++)
    {
        if (objectArray[n] == object)
        {
            break;
        }
        else
        {
            printf("This number isn't exist in this array\n");
        }
    }
    return 0;
}
int outputArrayElements(int objectArray[]) //输出数组
{
    printf("The current array is:");
    for (int n = 0; n < (Lenth - 1); n++)
    {
        printf("%d  ", objectArray[n]);
    }
}
int average(int objectArray[]) //求平均值
{
    int average = 0, sum = 0;
    for (int n = 0; n < (Lenth - 1); n++)
    {
        sum += objectArray[n];
    }
    average = sum / Lenth;
    return average;
}
int maxValue(int objectArray[]) //求最大值
{
    int temp, n;
    for (temp = 0, n = 0; n < (Lenth - 1); n++)
    {
        if (temp < objectArray[n])
        {
            temp = objectArray[n];
        }
    }
    return temp;
}
int minValue(int objectArray[]) //求最小值
{
    int temp, n;
    for (temp = 0, n = 0; n < (Lenth - 1); n++)
    {
        if (temp > objectArray[n])
        {
            temp = objectArray[n];
        }
    }
    return temp;
}
int sort(int objectArray[]) //排序
{
    int i, j, temp;
    for (i = 0; i < (Lenth - 1); i++)
    {
        for (j = (Lenth - 1); j > i; j--)
            if (objectArray[j] < objectArray[j - 1])
            {
                temp = objectArray[j - 1];
                objectArray[j - 1] = objectArray[j];
                objectArray[j] = temp;
            }
    }
}
int main()
{
    int array[10] = {0};
    int b;
    printf("Enter 10 number\n");
    for (int u = 0; u < 10; u++)
    {
        scanf("%d", &array[u]);
    }
    outputArrayElements(array);
    printf("\nKey in a number for following selection:\n1.search\n2.average\n3.maxinum\n4.mininum\n5.sort\n");
    int k = 0;
    scanf("%d", &k);
    switch (k)
    {
    case 1:
        printf("Please enter a number which you want to find\n");
        scanf("%d", &b);
        search(array, b);
        break;
    case 2:
        printf("%d", average(array));
        break;
    case 3:
        printf("%d", maxValue(array));
        break;
    case 4:
        printf("%d", minValue(array));
    break;
    case 5:
        sort(array);
        for (int t = 0; t < 10; t++)
        {
            printf("%d", array[t]);
        }
        break;
    }
    system("pause");
    return 0;
}
/*#include <stdio.h>
#define N 3
int input(int a[N][N]);
int outout(int a[N][N]);
void transpose(int a[N][N]);
int diagSum(int a[N][N]);
int main()
{
    int a[N][N];
    input(a);
    outout(a);
    transpose(a);
    diagSum(a);
    return 0;
}
int input(int a[N][N])
{
    int i, j;
    printf("please input elements:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    return 0;
}
int outout(int a[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void transpose(int a[N][N])
{
    int i, j, t;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < i; j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
}
int diagSum(int a[N][N])
{
    int i;
    int sum = 0;
    for (i = 0; i < 3; ++i)
    {
        sum += a[i][i];
    }
    printf("sum = %d\n", sum);
    return sum;
}*/