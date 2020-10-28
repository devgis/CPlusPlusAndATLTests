// dllmain.h: 模块类的声明。

class CATLProject1Module : public ATL::CAtlDllModuleT< CATLProject1Module >
{
public :
	DECLARE_LIBID(LIBID_ATLProject1Lib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT1, "{58c3fee0-a418-4792-8c79-7a26c431d1c7}")
};

extern class CATLProject1Module _AtlModule;
