#include <stdio.h>
#include "windows.h"
int main()
{
    for (int i = 2; i != 1; i++){
    if( i % 2 == 0)
        printf("baka blu\n");
    else
        printf("blu baka\n");
		fukBlu(i);
		}
    return 0;
}
int fukBlu(int times){
	for(int n = 0;n < times;n++){
		printf("fuck blue\n");
	}
	return 0;
}