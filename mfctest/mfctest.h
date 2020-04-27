
// mfctest.h : main header file for the mfctest application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CmfctestApp:
// See mfctest.cpp for the implementation of this class
//

class CmfctestApp : public CWinApp
{
public:
	CmfctestApp();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmfctestApp theApp;
