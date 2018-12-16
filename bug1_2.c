#include "Windows.h"
#include "WinBase.h"
int main()
{
    ShellExecute(NULL, "open", "cmd", NULL, NULL, SW_SHOWNORMAL);
    return 0;
}
/*ShellExecute(
    hWnd: HWND;{指定父窗口句柄} 
    Operation: PChar;{指定动作, 譬如 : open、runas、print、edit、explore、find} 
    FileName: PChar;{指定要打开的文件或程序} 
    Parameters: PChar;{给要打开的程序指定参数;} 
    Directory: PChar;{缺省目录} 
    ShowCmd: Integer{打开选项})*/
