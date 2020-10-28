// dllmain.h: 模块类的声明。

class CMyComLibTestModule : public ATL::CAtlDllModuleT< CMyComLibTestModule >
{
public :
	DECLARE_LIBID(LIBID_MyComLibTestLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MYCOMLIBTEST, "{9d3afe0c-3a10-41d8-b2c0-afa0c0b5e75a}")
};

extern class CMyComLibTestModule _AtlModule;
