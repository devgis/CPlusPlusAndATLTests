

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMyComClass,0x054b8fb7,0x611a,0x40da,0x8c,0x62,0x8d,0xf2,0xd6,0x8d,0x31,0xa8);


MIDL_DEFINE_GUID(IID, IID_IFlyMathClass,0xecf99993,0x07f9,0x4c5c,0x82,0x72,0x1b,0xd7,0x89,0x96,0x63,0x8a);


MIDL_DEFINE_GUID(IID, LIBID_ATLProject1Lib,0x58c3fee0,0xa418,0x4792,0x8c,0x79,0x7a,0x26,0xc4,0x31,0xd1,0xc7);


MIDL_DEFINE_GUID(CLSID, CLSID_MyComClass,0x63e06baf,0x7878,0x4315,0x85,0xe0,0x1a,0xac,0x74,0x25,0xf4,0xd2);


MIDL_DEFINE_GUID(CLSID, CLSID_FlyMathClass,0xc779aaba,0x06f2,0x4608,0xb0,0x9e,0xf8,0xae,0xb2,0x03,0xc7,0x03);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



