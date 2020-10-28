

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ATLProject1_i.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   91                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ATLProject1_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ATLProject1_MIDL_TYPE_FORMAT_STRING;

typedef struct _ATLProject1_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ATLProject1_MIDL_PROC_FORMAT_STRING;

typedef struct _ATLProject1_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ATLProject1_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ATLProject1_MIDL_TYPE_FORMAT_STRING ATLProject1__MIDL_TypeFormatString;
extern const ATLProject1_MIDL_PROC_FORMAT_STRING ATLProject1__MIDL_ProcFormatString;
extern const ATLProject1_MIDL_EXPR_FORMAT_STRING ATLProject1__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMyComClass_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyComClass_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFlyMathClass_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFlyMathClass_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ATLProject1_MIDL_PROC_FORMAT_STRING ATLProject1__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure TestMethods */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter b */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TestRet */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 52 */	NdrFcShort( 0x10 ),	/* 16 */
/* 54 */	NdrFcShort( 0x24 ),	/* 36 */
/* 56 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 58 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter a */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter b */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnVal */

/* 78 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ATLProject1_MIDL_TYPE_FORMAT_STRING ATLProject1__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMyComClass, ver. 0.0,
   GUID={0x054b8fb7,0x611a,0x40da,{0x8c,0x62,0x8d,0xf2,0xd6,0x8d,0x31,0xa8}} */

#pragma code_seg(".orpc")
static const unsigned short IMyComClass_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMyComClass_ProxyInfo =
    {
    &Object_StubDesc,
    ATLProject1__MIDL_ProcFormatString.Format,
    &IMyComClass_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMyComClass_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ATLProject1__MIDL_ProcFormatString.Format,
    &IMyComClass_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IMyComClassProxyVtbl = 
{
    0,
    &IID_IMyComClass,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IMyComClass_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMyComClassStubVtbl =
{
    &IID_IMyComClass,
    &IMyComClass_ServerInfo,
    7,
    &IMyComClass_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IFlyMathClass, ver. 0.0,
   GUID={0xecf99993,0x07f9,0x4c5c,{0x82,0x72,0x1b,0xd7,0x89,0x96,0x63,0x8a}} */

#pragma code_seg(".orpc")
static const unsigned short IFlyMathClass_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO IFlyMathClass_ProxyInfo =
    {
    &Object_StubDesc,
    ATLProject1__MIDL_ProcFormatString.Format,
    &IFlyMathClass_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFlyMathClass_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ATLProject1__MIDL_ProcFormatString.Format,
    &IFlyMathClass_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IFlyMathClassProxyVtbl = 
{
    &IFlyMathClass_ProxyInfo,
    &IID_IFlyMathClass,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFlyMathClass::TestMethods */ ,
    (void *) (INT_PTR) -1 /* IFlyMathClass::TestRet */
};


static const PRPC_STUB_FUNCTION IFlyMathClass_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFlyMathClassStubVtbl =
{
    &IID_IFlyMathClass,
    &IFlyMathClass_ServerInfo,
    9,
    &IFlyMathClass_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ATLProject1__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ATLProject1_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IFlyMathClassProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMyComClassProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ATLProject1_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IFlyMathClassStubVtbl,
    ( CInterfaceStubVtbl *) &_IMyComClassStubVtbl,
    0
};

PCInterfaceName const _ATLProject1_InterfaceNamesList[] = 
{
    "IFlyMathClass",
    "IMyComClass",
    0
};

const IID *  const _ATLProject1_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _ATLProject1_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ATLProject1, pIID, n)

int __stdcall _ATLProject1_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ATLProject1, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ATLProject1, 2, *pIndex )
    
}

const ExtendedProxyFileInfo ATLProject1_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ATLProject1_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ATLProject1_StubVtblList,
    (const PCInterfaceName * ) & _ATLProject1_InterfaceNamesList,
    (const IID ** ) & _ATLProject1_BaseIIDList,
    & _ATLProject1_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

