#include "stdio.h"
#include "string.h"
char getUsername(char chars[])
{
    int l, m;
    char username[20];
    char temp[20];
    for (l = 0, m = 0; l < strlen(chars); l++)
    {
        if (('chars[l]' > 'a' && 'chars[l]' < 'z') || ('chars[l]' > 'A' && 'chars[l]' < 'Z'))
        {
            temp[m] = chars[l];
            m++;
        }
    }
    for (l = 0, m = 0; (l + 1) % 2 != 0; l++)
    {
        username[m] = temp[l];
    }
    return (username);
}
char getPasswd(char chars[])
{
    char password[20];
    char temp[20];
    int i, m;
    for (i = 0, m = 0; i < strlen(chars); i++)
    {
        if ('chars[i]' < '9' && 'chars[i]' > '0')
        {
            temp[m] = chars[i];
            m++;
        }
        for (l = 0, m = 0; (l + 1) % 2 == 0; l++)
        {
            password[m] = temp[l];
        }
    }
    return (password);
}
)
int main()
{
    char Username[20];
    char password[20];
    printf("Enter username string\n");
    scanf("%s", Username);
    printf("Enter password string\n");
    scanf("%s", password);
    printf("Username is %s", getUsername(Username));
    printf("Password is %s", getPasswd(password));
    return 0;
}