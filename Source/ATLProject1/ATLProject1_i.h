

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ATLProject1.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLProject1_i_h__
#define __ATLProject1_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMyComClass_FWD_DEFINED__
#define __IMyComClass_FWD_DEFINED__
typedef interface IMyComClass IMyComClass;

#endif 	/* __IMyComClass_FWD_DEFINED__ */


#ifndef __IFlyMathClass_FWD_DEFINED__
#define __IFlyMathClass_FWD_DEFINED__
typedef interface IFlyMathClass IFlyMathClass;

#endif 	/* __IFlyMathClass_FWD_DEFINED__ */


#ifndef __MyComClass_FWD_DEFINED__
#define __MyComClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyComClass MyComClass;
#else
typedef struct MyComClass MyComClass;
#endif /* __cplusplus */

#endif 	/* __MyComClass_FWD_DEFINED__ */


#ifndef __FlyMathClass_FWD_DEFINED__
#define __FlyMathClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class FlyMathClass FlyMathClass;
#else
typedef struct FlyMathClass FlyMathClass;
#endif /* __cplusplus */

#endif 	/* __FlyMathClass_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyComClass_INTERFACE_DEFINED__
#define __IMyComClass_INTERFACE_DEFINED__

/* interface IMyComClass */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyComClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("054b8fb7-611a-40da-8c62-8df2d68d31a8")
    IMyComClass : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IMyComClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyComClass * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyComClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyComClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyComClass * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyComClass * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyComClass * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyComClass * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IMyComClassVtbl;

    interface IMyComClass
    {
        CONST_VTBL struct IMyComClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyComClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyComClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyComClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyComClass_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyComClass_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyComClass_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyComClass_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyComClass_INTERFACE_DEFINED__ */


#ifndef __IFlyMathClass_INTERFACE_DEFINED__
#define __IFlyMathClass_INTERFACE_DEFINED__

/* interface IFlyMathClass */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFlyMathClass;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ecf99993-07f9-4c5c-8272-1bd78996638a")
    IFlyMathClass : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestMethods( 
            LONG a,
            LONG b) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestRet( 
            LONG a,
            LONG b,
            /* [retval][out] */ long *pnVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFlyMathClassVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFlyMathClass * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFlyMathClass * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFlyMathClass * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFlyMathClass * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFlyMathClass * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFlyMathClass * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFlyMathClass * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TestMethods )( 
            IFlyMathClass * This,
            LONG a,
            LONG b);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TestRet )( 
            IFlyMathClass * This,
            LONG a,
            LONG b,
            /* [retval][out] */ long *pnVal);
        
        END_INTERFACE
    } IFlyMathClassVtbl;

    interface IFlyMathClass
    {
        CONST_VTBL struct IFlyMathClassVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFlyMathClass_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFlyMathClass_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFlyMathClass_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFlyMathClass_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFlyMathClass_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFlyMathClass_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFlyMathClass_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFlyMathClass_TestMethods(This,a,b)	\
    ( (This)->lpVtbl -> TestMethods(This,a,b) ) 

#define IFlyMathClass_TestRet(This,a,b,pnVal)	\
    ( (This)->lpVtbl -> TestRet(This,a,b,pnVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFlyMathClass_INTERFACE_DEFINED__ */



#ifndef __ATLProject1Lib_LIBRARY_DEFINED__
#define __ATLProject1Lib_LIBRARY_DEFINED__

/* library ATLProject1Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProject1Lib;

EXTERN_C const CLSID CLSID_MyComClass;

#ifdef __cplusplus

class DECLSPEC_UUID("63e06baf-7878-4315-85e0-1aac7425f4d2")
MyComClass;
#endif

EXTERN_C const CLSID CLSID_FlyMathClass;

#ifdef __cplusplus

class DECLSPEC_UUID("c779aaba-06f2-4608-b09e-f8aeb203c703")
FlyMathClass;
#endif
#endif /* __ATLProject1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


