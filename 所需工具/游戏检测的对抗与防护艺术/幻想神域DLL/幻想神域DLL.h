// 幻想神域DLL.h : 幻想神域DLL DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// C幻想神域DLLApp
// 有关此类实现的信息，请参阅 幻想神域DLL.cpp
//

class C幻想神域DLLApp : public CWinApp
{
public:
	C幻想神域DLLApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
