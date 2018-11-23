#include "Windows.h"
#include "WinBase.h"
int main(){
    ShellExecute(NULL, "open", "NOTEPAD.EXE", NULL, NULL, SW_SHOWNORMAL);
    return 0;
}