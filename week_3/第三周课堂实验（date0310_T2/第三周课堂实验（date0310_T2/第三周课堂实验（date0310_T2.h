﻿
// 第三周课堂实验（date0310_T2.h: 第三周课堂实验（date0310_T2 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 主符号


// C第三周课堂实验date0310T2App:
// 有关此类的实现，请参阅 第三周课堂实验（date0310_T2.cpp
//

class C第三周课堂实验date0310T2App : public CWinApp
{
public:
	C第三周课堂实验date0310T2App() noexcept;


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C第三周课堂实验date0310T2App theApp;
