

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __windows2Emanagement2Edeployment2Epreview_h__
#define __windows2Emanagement2Edeployment2Epreview_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    interface IClassicAppManagerStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    interface IInstalledClassicAppInfo;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)


#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Management {
namespace Deployment {
namespace Preview {
class InstalledClassicAppInfo;
} /*Preview*/
} /*Deployment*/
} /*Management*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IClassicAppManagerStatics[] = L"Windows.Management.Deployment.Preview.IClassicAppManagerStatics";
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Deployment::Preview::IClassicAppManagerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Deployment {
                    namespace Preview {
                        
                        MIDL_INTERFACE("E2FAD668-882C-4F33-B035-0DF7B90D67E6")
                        IClassicAppManagerStatics : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE FindInstalledApp( 
                                /* [in] */ __RPC__in HSTRING appUninstallKey,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo **result) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IClassicAppManagerStatics = __uuidof(IClassicAppManagerStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *FindInstalledApp )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
            /* [in] */ __RPC__in HSTRING appUninstallKey,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl;

    interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FindInstalledApp(This,appUninstallKey,result)	\
    ( (This)->lpVtbl -> FindInstalledApp(This,appUninstallKey,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.IInstalledClassicAppInfo";
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo */
/* [uuid][object] */ 



/* interface ABI::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Management {
                namespace Deployment {
                    namespace Preview {
                        
                        MIDL_INTERFACE("0A7D3DA3-65D0-4086-80D6-0610D760207D")
                        IInstalledClassicAppInfo : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayVersion( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IInstalledClassicAppInfo = __uuidof(IInstalledClassicAppInfo);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayVersion )( 
            __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl;

    interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo
    {
        CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_get_DisplayName(This,value)	\
    ( (This)->lpVtbl -> get_DisplayName(This,value) ) 

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_get_DisplayVersion(This,value)	\
    ( (This)->lpVtbl -> get_DisplayVersion(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Management_Deployment_Preview_ClassicAppManager_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_Preview_ClassicAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_ClassicAppManager[] = L"Windows.Management.Deployment.Preview.ClassicAppManager";
#endif
#ifndef RUNTIMECLASS_Windows_Management_Deployment_Preview_InstalledClassicAppInfo_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_Preview_InstalledClassicAppInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_InstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo";
#endif


/* interface __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emanagement2Edeployment2Epreview_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


