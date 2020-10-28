

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MyComLibTest.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
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

MIDL_DEFINE_GUID(IID, IID_IComponentRegistrar,0xa817e7a2,0x43fa,0x11d0,0x9e,0x44,0x00,0xaa,0x00,0xb6,0x77,0x0a);


MIDL_DEFINE_GUID(IID, IID_ITestATLClass,0x572271a0,0x5bce,0x4afd,0xa5,0xdd,0xd2,0x09,0x4d,0xcc,0x70,0xc6);


MIDL_DEFINE_GUID(IID, LIBID_MyComLibTestLib,0x9d3afe0c,0x3a10,0x41d8,0xb2,0xc0,0xaf,0xa0,0xc0,0xb5,0xe7,0x5a);


MIDL_DEFINE_GUID(CLSID, CLSID_CompReg,0xd0b9e1c2,0xb341,0x4f46,0x80,0xee,0xeb,0xd9,0xe4,0xad,0x4e,0x19);


MIDL_DEFINE_GUID(CLSID, CLSID_TestATLClass,0xda83ddea,0xa273,0x4147,0x89,0xf9,0x1e,0xb9,0xaf,0x70,0x50,0xa1);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



