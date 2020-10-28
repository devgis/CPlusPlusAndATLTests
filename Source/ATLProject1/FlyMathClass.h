// FlyMathClass.h: CFlyMathClass 的声明

#pragma once
#include "resource.h"       // 主符号



#include "ATLProject1_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CFlyMathClass

class ATL_NO_VTABLE CFlyMathClass :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CFlyMathClass, &CLSID_FlyMathClass>,
	public IDispatchImpl<IFlyMathClass, &IID_IFlyMathClass, &LIBID_ATLProject1Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CFlyMathClass()
	{
	}

DECLARE_REGISTRY_RESOURCEID(107)


BEGIN_COM_MAP(CFlyMathClass)
	COM_INTERFACE_ENTRY(IFlyMathClass)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	STDMETHOD_(int, TestMethod2)(int a, int b);
	STDMETHOD_(LONG, TestMethods)(LONG a, LONG b);
	STDMETHOD_(LONG, TestRet)(LONG a, LONG b, [out, retval] long* pnVal);
};

OBJECT_ENTRY_AUTO(__uuidof(FlyMathClass), CFlyMathClass)
