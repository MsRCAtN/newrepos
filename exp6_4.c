#include <stdio.h>
#include <string.h>
/*void main()
{
    char str[20];
    int i, j = 0;
    scanf("&s", &str);
    for (i = 0; i < strlen(str); i++)
        if (str[i] == ' ')
        {
            i++;
        }
        else
        {
            str[j++] = str[i];
        }
    str[j] = '\0';
    printf("%s", str);
    system("pause");
}
*/
int main()
{
    char s1[20];
    scanf("%s", &s1);
    int n = strlen(s1);
    int i = 0;
    int space = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {

        //判断当前字符是否是空格
        if (isspace(s1[i + space]))
        {
            space += 1;
            j = (i + space);

            //判断当前字符后续是否有连续空格
            while (s1[j] == ' ')
            {
                j++;
                space += 1;
            }
        }

        //将后续字符往前挪动
        s1[i] = s1[i + space];
    }
    printf("%s\n", s1);
}
