// dllOne.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"

DLLONE_API  LRESULT  CALLBACK  KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	char ch = 0;

	/*
	KBDLLHOOKSTRUCT *key = (KBDLLHOOKSTRUCT*)lParam;
	if (wParam == WM_KEYDOWN) { //按下Ctrl
	switch (key->vkCode) {
	case 0x11: // ctrl
	case 0xa2: // left ctrl
	case 0xa3: // right ctrl
	ctrldown = true;  return 0;
	}
	}
	if (wParam == WM_KEYUP) {  //松开Ctrl
	switch (key->vkCode) {
	case 0x11: // ctrl
	case 0xa2: // left ctrl
	case 0xa3: // right ctrl
	ctrldown = false;
	}
	}
	if (ctrldown)  //按下Ctrl的前提下，第二个按键
	{
	//比如 + C  + V
	}
	*/
	
	if (((DWORD)lParam & 0x40000000) && (HC_ACTION == nCode)) //有键按下
	{

		if (wParam == VK_F2)
		{
			//F12就去读剪切板，把一个个的字符模拟按键出来
			char * str = get_clipboard();
			Input(str);
		}

	}

	return CallNextHookEx(glhHook, nCode, wParam, lParam);
}
DLLONE_API BOOL Input(char* str)
{
	DWORD   sc, shift;
	unsigned   char   vkey;
	char   a;
	for (int i = 0; i < strlen(str); i++)//模拟键盘输出str中的字符
	{
		a = *(str + i);

		if (a == '\n')
		{
			continue;
		}
		
		sc = OemKeyScan(a);
		shift = sc >> 16;
		vkey = MapVirtualKey(sc & 0xffff, 1);
		if (vkey == VK_TAB)
		{
// 			keybd_event(VK_SPACE, 0, 0, 0);
// 			keybd_event(VK_SPACE, 0, 0, 0);
// 			keybd_event(VK_SPACE, 0, 0, 0);
// 			keybd_event(VK_SPACE, 0, 0, 0);
			continue;
		}
		if (shift)
			keybd_event(VK_SHIFT, 0, 0, 0);
		keybd_event(vkey, 0, 0, 0);
		keybd_event(vkey, 0, KEYEVENTF_KEYUP, 0);
		if (shift)
			keybd_event(VK_SHIFT, 0, KEYEVENTF_KEYUP, 0);
	}
	return TRUE;
}
DLLONE_API char * get_clipboard()
{
	char * lpStr = NULL;
	if (::OpenClipboard(NULL))
	{
		//获得剪贴板数据
		HGLOBAL hMem = GetClipboardData(CF_TEXT);
		if (NULL != hMem)
		{
			lpStr = (char*)::GlobalLock(hMem);
			if (NULL != lpStr)
			{
				//MessageBox(0, ()lpStr, "", 0);
				::GlobalUnlock(hMem);
			}
		}
		::CloseClipboard();
	}
	return lpStr;
}
DLLONE_API WPARAM char_to_key(wchar_t ch)
{
	WPARAM wpram;
	switch (ch)
	{
	case 'a':
		break;
	case 'b':
		break;
	case 'c':
		break;
	case 'd':
		break;
	case 'e':
		break;
	case 'f':
		break;
	case 'g':
		break;
	case 'h':
		break;
	case 'i':
		break;
	case 'j':
		break;
	case 'k':
		break;
	case 'l':
		break;
	case 'm':
		break;
	case 'n':
		break;
	case 'o':
		break;
	case 'p':
		break;
	case 'q':
		break;
	case 'r':
		break;
	case 's':
		break;
	case 't':
		break;
	case 'u':
		break;
	case 'v':
		break;
	case 'w':
		break;
	case 'x':
		break;
	case 'y':
		break;
	case 'z':
		break;
	case 'A':
		break;
	case 'B':
		break;
	case 'C':
		break;
	case 'D':
		break;
	case 'E':
		break;
	case 'F':
		break;
	case 'G':
		break;
	case 'H':
		break;
	case 'I':
		break;
	case 'J':
		break;
	case 'K':
		break;
	case 'L':
		break;
	case 'M':
		break;
	case 'N':
		break;
	case 'O':
		break;
	case 'P':
		break;
	case 'Q':
		break;
	case 'R':
		break;
	case 'S':
		break;
	case 'T':
		break;
	case 'U':
		break;
	case 'V':
		break;
	case 'W':
		break;
	case 'X':
		break;
	case 'Y':
		break;
	case 'Z':
		break;
	case '0':
		break;
	case '1':
		break;
	case '2':
		break;
	case '3':
		break;
	case '4':
		break;
	case '5':
		break;
	case '6':
		break;
	case '7':
		break;
	case '8':
		break;
	case '9':
		break;
	case '\"':
		break;
	case '\'':
		break;
	case ';':
		break;
	case ':':
		break;
	case '[':
		break;
	case '{':
		break;
	case ']':
		break;
	case '}':
		break;
	case '\?':
		break;
	case '/':
		break;
	case '\\':
		break;
	case ',':
		break;
	case '<':
		break;
	case '.':
		break;
	case '>':
		break;
	case '|':
		break;
	case '!':
		break;
	case '*':
		break;
	case '-':
		break;
	case '+':
		break;
	case '#':
		break;
	case '$':
		break;
	case '%':
		break;
	case '^':
		break;
	case '&':
		break;
	case '(':
		break;
	case ')':
		break;
	case '_':
		break;
	case '=':
		break;
	case '`':
		break;
	case '~':
		break;
	case '\n':  //enter
		break;
	case '\t':  //tab
		break;
	case '\v':  //垂直制表符
		break;
	case '\0':
		break;
	case ' ':  //空格
		break;
	default:
		break;
	}
	return wpram;
}
// 这是导出变量的一个示例

// 这是导出函数的一个示例。

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 dllOne.h
CdllOne::CdllOne()
{
    return;
}
CdllOne::~CdllOne()
{
	if (glhHook)
		UnhookWindowsHookEx(glhHook);
}

BOOL CdllOne::startHook()
{
	BOOL bResult = FALSE;
	if (glhInstance != NULL)
	{
		glhHook = SetWindowsHookEx(WH_KEYBOARD, KeyboardProc, glhInstance, 0);
		if (glhHook != NULL)
			bResult = TRUE;
	}
	return bResult;
}
BOOL CdllOne::stopHook()
{
	BOOL bResult = FALSE;
	if (glhHook)
	{
		bResult = UnhookWindowsHookEx(glhHook);
		if (bResult)
			glhHook = NULL;
	}
	return bResult;
}

