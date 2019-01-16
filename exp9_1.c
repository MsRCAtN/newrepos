#include "stdio.h"
#include "stdlib.h"
int main(int argc, char const *argv[])
{
    FILE *fp;
    char ch, sh
    fp = fopen("D:\\f1.txt", "w+");
    if(fp == NULL){
        printf("File Error\n")
        exit(1);
    }
    printf("Enter a text end with '#'"\n);
    ch = getchar( );
    while(ch != '#'){
        fputc(ch, fp);
        ch = getchar( );
    }
    while((sh = fgetc(fp)) != EOF){
        putchar(sh);
    }
    putchar('\n');
    fclose("D:\\f1.txt");
    return 0;
}
