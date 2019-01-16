#include "stdio.h"
#include "stdlib.h"
struct Student
{
    char ID[20];
    char name[30];
    int age;
    double score;
};
int CreateFile(struct Student sinfo[], char )
{
    FILE *fp;
    fp = fopen("D:\\info.dat", "ab+");
    if (fp == NULL)
    {
        printf("file error\n");
        exit(1);
    }

}
int main()
{
    struct Student stu[40];
    int i, n;
    for (i = 0; i < 40; i++)
    {
    }
}