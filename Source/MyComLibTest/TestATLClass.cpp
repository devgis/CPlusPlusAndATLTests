// TestATLClass.cpp: CTestATLClass 的实现

#include "pch.h"
#include "TestATLClass.h"


// CTestATLClass



STDMETHODIMP_(LONG) CTestATLClass::AddMethod(LONG a, LONG b)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    // TODO: 在此处添加分派处理程序代码

    return a+b;
}


STDMETHODIMP_(LONG) CTestATLClass::AddAndRet(LONG a, LONG b, LONG* rt)
{
    AFX_MANAGE_STATE(AfxGetStaticModuleState());

    // TODO: 在此处添加分派处理程序代码

    return *rt=a+b;
}
