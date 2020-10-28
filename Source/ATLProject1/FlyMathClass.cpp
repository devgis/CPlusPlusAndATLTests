// FlyMathClass.cpp: CFlyMathClass 的实现

#include "pch.h"
#include "FlyMathClass.h"




STDMETHODIMP_(int) CFlyMathClass::TestMethod2(int a, int b)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此处添加分派处理程序代码

	return 0;
}


STDMETHODIMP_(LONG) CFlyMathClass::TestMethods(LONG a, LONG b)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此处添加分派处理程序代码

	return a+b;
}



STDMETHODIMP_(LONG) CFlyMathClass::TestRet(LONG a, LONG b, [out, retval] long* pnVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// TODO: 在此处添加分派处理程序代码

	return 0;
}
