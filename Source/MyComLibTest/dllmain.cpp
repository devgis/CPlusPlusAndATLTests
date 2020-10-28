// dllmain.cpp: DllMain 的实现。

#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "MyComLibTest_i.h"
#include "dllmain.h"
#include "compreg.h"
#include "xdlldata.h"

CMyComLibTestModule _AtlModule;

class CMyComLibTestApp : public CWinApp
{
public:

// 重写
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CMyComLibTestApp, CWinApp)
END_MESSAGE_MAP()

CMyComLibTestApp theApp;

BOOL CMyComLibTestApp::InitInstance()
{
#ifdef _MERGE_PROXYSTUB
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, nullptr))
		return FALSE;
#endif
	return CWinApp::InitInstance();
}

int CMyComLibTestApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
