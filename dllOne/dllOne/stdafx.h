// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>
#include "dllOne.h"
#include <stdlib.h>
#include <stdio.h>


extern DLLONE_API int ndllOne;
extern DLLONE_API HHOOK glhHook;         //安装的鼠标勾子句柄 
extern DLLONE_API HINSTANCE glhInstance; //DLL实例句柄
extern DLLONE_API std::string data;
extern DLLONE_API bool ctrldown;
// TODO:  在此处引用程序需要的其他头文件
