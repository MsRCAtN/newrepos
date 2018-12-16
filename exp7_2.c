#include "stdio.h"
#include "string.h"
char getUsername(char chars[])
{
    int l, m;
    char username[20];
    char temp[20];
    for (l = 0, m = 0; l < strlen(chars); l++)
    {
        if ('chars[l]' > 'a' || 'chars[l]' || 'z' && 'chars[l]' || 'A' || 'chars[l]' < 'Z')
        {
            temp[m] = chars[l];
            m++;
        }
    }
    for (l = 0, m = 0; (l + 1) % 2 != 0; l++)
    {
        username[m] = temp[l];
    }
    return username;
}
int getPasswd(char passwd[]){

}
)
int main()
{

    return 0;
}
