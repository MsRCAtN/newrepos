#include <stdio.h>
#include <stdlib.h>
int main()
{
    int line;   // 菱形总行数
    int column; // 菱形总列数
    int i;      // 当前行
    int j;      // 当前列
    scanf("%d", &line);
    if (line % 2 == 0)
    {
        line++;
    }
    column = line; // 总行数和总列数相同
    for (i = 1; i <= line; i++)
    { // 遍历所有行
        if (i < (line + 1) / 2 + 1)
        { // 上半部分（包括中间一行）
            for (j = 1; j <= column; j++)
            { // 遍历上半部分的所有列
                if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        { // 下半部分
            for (j = 1; j <= column; j++)
            { // 遍历下半部分的所有列
                if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}