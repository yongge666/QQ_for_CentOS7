/*** Autogenerated by WIDL 1.9.0 from httprequest.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __httprequest_h__
#define __httprequest_h__

/* Forward declarations */

#ifndef __IWinHttpRequest_FWD_DEFINED__
#define __IWinHttpRequest_FWD_DEFINED__
typedef interface IWinHttpRequest IWinHttpRequest;
#ifdef __cplusplus
interface IWinHttpRequest;
#endif /* __cplusplus */
#endif

#ifndef __WinHttpRequest_FWD_DEFINED__
#define __WinHttpRequest_FWD_DEFINED__
#ifdef __cplusplus
typedef class WinHttpRequest WinHttpRequest;
#else
typedef struct WinHttpRequest WinHttpRequest;
#endif /* defined __cplusplus */
#endif /* defined __WinHttpRequest_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif


DEFINE_GUID(LIBID_WinHttp, 0x662901fc, 0x6951, 0x4854, 0x9e,0xb2, 0xd9,0xa2,0x57,0x0f,0x2b,0x2e);

typedef LONG HTTPREQUEST_PROXY_SETTING;
#define HTTPREQUEST_PROXYSETTING_DEFAULT (0x0)

#define HTTPREQUEST_PROXYSETTING_PRECONFIG (0x0)

#define HTTPREQUEST_PROXYSETTING_DIRECT (0x1)

#define HTTPREQUEST_PROXYSETTING_PROXY (0x2)

typedef LONG HTTPREQUEST_SETCREDENTIALS_FLAGS;
#define HTTPREQUEST_SETCREDENTIALS_FOR_SERVER (0x0)

#define HTTPREQUEST_SETCREDENTIALS_FOR_PROXY (0x1)

typedef enum WinHttpRequestOption {
    WinHttpRequestOption_UserAgentString = 0,
    WinHttpRequestOption_URL = 1,
    WinHttpRequestOption_URLCodePage = 2,
    WinHttpRequestOption_EscapePercentInURL = 3,
    WinHttpRequestOption_SslErrorIgnoreFlags = 4,
    WinHttpRequestOption_SelectCertificate = 5,
    WinHttpRequestOption_EnableRedirects = 6,
    WinHttpRequestOption_UrlEscapeDisable = 7,
    WinHttpRequestOption_UrlEscapeDisableQuery = 8,
    WinHttpRequestOption_SecureProtocols = 9,
    WinHttpRequestOption_EnableTracing = 10,
    WinHttpRequestOption_RevertImpersonationOverSsl = 11,
    WinHttpRequestOption_EnableHttpsToHttpRedirects = 12,
    WinHttpRequestOption_EnablePassportAuthentication = 13,
    WinHttpRequestOption_MaxAutomaticRedirects = 14,
    WinHttpRequestOption_MaxResponseHeaderSize = 15,
    WinHttpRequestOption_MaxResponseDrainSize = 16,
    WinHttpRequestOption_EnableHttp1_1 = 17,
    WinHttpRequestOption_EnableCertificateRevocationCheck = 18,
    WinHttpRequestOption_RejectUserpwd = 19
} WinHttpRequestOption;
typedef enum WinHttpRequestAutoLogonPolicy {
    AutoLogonPolicy_Always = 0,
    AutoLogonPolicy_OnlyIfBypassProxy = 1,
    AutoLogonPolicy_Never = 2
} WinHttpRequestAutoLogonPolicy;
/*****************************************************************************
 * IWinHttpRequest interface
 */
#ifndef __IWinHttpRequest_INTERFACE_DEFINED__
#define __IWinHttpRequest_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWinHttpRequest, 0x016fe2ec, 0xb2c8, 0x45f8, 0xb2,0x3b, 0x39,0xe5,0x3a,0x75,0x39,0x6b);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("016fe2ec-b2c8-45f8-b23b-39e53a75396b")
IWinHttpRequest : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE SetProxy(
        HTTPREQUEST_PROXY_SETTING proxy_setting,
        VARIANT proxy_server,
        VARIANT bypass_list) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCredentials(
        BSTR username,
        BSTR password,
        HTTPREQUEST_SETCREDENTIALS_FLAGS flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Open(
        BSTR method,
        BSTR url,
        VARIANT async) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRequestHeader(
        BSTR header,
        BSTR value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetResponseHeader(
        BSTR header,
        BSTR *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAllResponseHeaders(
        BSTR *headers) = 0;

    virtual HRESULT STDMETHODCALLTYPE Send(
        VARIANT body) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Status(
        LONG *status) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_StatusText(
        BSTR *status) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ResponseText(
        BSTR *body) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ResponseBody(
        VARIANT *body) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ResponseStream(
        VARIANT *body) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Option(
        WinHttpRequestOption option,
        VARIANT *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_Option(
        WinHttpRequestOption option,
        VARIANT value) = 0;

    virtual HRESULT STDMETHODCALLTYPE WaitForResponse(
        VARIANT timeout,
        VARIANT_BOOL *succeeded) = 0;

    virtual HRESULT STDMETHODCALLTYPE Abort(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetTimeouts(
        LONG resolve_timeout,
        LONG connect_timeout,
        LONG send_timeout,
        LONG receive_timeout) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetClientCertificate(
        BSTR certificate) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetAutoLogonPolicy(
        WinHttpRequestAutoLogonPolicy policy) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWinHttpRequest, 0x016fe2ec, 0xb2c8, 0x45f8, 0xb2,0x3b, 0x39,0xe5,0x3a,0x75,0x39,0x6b)
#endif
#else
typedef struct IWinHttpRequestVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWinHttpRequest *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWinHttpRequest *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWinHttpRequest *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IWinHttpRequest *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IWinHttpRequest *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IWinHttpRequest *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IWinHttpRequest *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IWinHttpRequest methods ***/
    HRESULT (STDMETHODCALLTYPE *SetProxy)(
        IWinHttpRequest *This,
        HTTPREQUEST_PROXY_SETTING proxy_setting,
        VARIANT proxy_server,
        VARIANT bypass_list);

    HRESULT (STDMETHODCALLTYPE *SetCredentials)(
        IWinHttpRequest *This,
        BSTR username,
        BSTR password,
        HTTPREQUEST_SETCREDENTIALS_FLAGS flags);

    HRESULT (STDMETHODCALLTYPE *Open)(
        IWinHttpRequest *This,
        BSTR method,
        BSTR url,
        VARIANT async);

    HRESULT (STDMETHODCALLTYPE *SetRequestHeader)(
        IWinHttpRequest *This,
        BSTR header,
        BSTR value);

    HRESULT (STDMETHODCALLTYPE *GetResponseHeader)(
        IWinHttpRequest *This,
        BSTR header,
        BSTR *value);

    HRESULT (STDMETHODCALLTYPE *GetAllResponseHeaders)(
        IWinHttpRequest *This,
        BSTR *headers);

    HRESULT (STDMETHODCALLTYPE *Send)(
        IWinHttpRequest *This,
        VARIANT body);

    HRESULT (STDMETHODCALLTYPE *get_Status)(
        IWinHttpRequest *This,
        LONG *status);

    HRESULT (STDMETHODCALLTYPE *get_StatusText)(
        IWinHttpRequest *This,
        BSTR *status);

    HRESULT (STDMETHODCALLTYPE *get_ResponseText)(
        IWinHttpRequest *This,
        BSTR *body);

    HRESULT (STDMETHODCALLTYPE *get_ResponseBody)(
        IWinHttpRequest *This,
        VARIANT *body);

    HRESULT (STDMETHODCALLTYPE *get_ResponseStream)(
        IWinHttpRequest *This,
        VARIANT *body);

    HRESULT (STDMETHODCALLTYPE *get_Option)(
        IWinHttpRequest *This,
        WinHttpRequestOption option,
        VARIANT *value);

    HRESULT (STDMETHODCALLTYPE *put_Option)(
        IWinHttpRequest *This,
        WinHttpRequestOption option,
        VARIANT value);

    HRESULT (STDMETHODCALLTYPE *WaitForResponse)(
        IWinHttpRequest *This,
        VARIANT timeout,
        VARIANT_BOOL *succeeded);

    HRESULT (STDMETHODCALLTYPE *Abort)(
        IWinHttpRequest *This);

    HRESULT (STDMETHODCALLTYPE *SetTimeouts)(
        IWinHttpRequest *This,
        LONG resolve_timeout,
        LONG connect_timeout,
        LONG send_timeout,
        LONG receive_timeout);

    HRESULT (STDMETHODCALLTYPE *SetClientCertificate)(
        IWinHttpRequest *This,
        BSTR certificate);

    HRESULT (STDMETHODCALLTYPE *SetAutoLogonPolicy)(
        IWinHttpRequest *This,
        WinHttpRequestAutoLogonPolicy policy);

    END_INTERFACE
} IWinHttpRequestVtbl;

interface IWinHttpRequest {
    CONST_VTBL IWinHttpRequestVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWinHttpRequest_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWinHttpRequest_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWinHttpRequest_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IWinHttpRequest_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IWinHttpRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IWinHttpRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IWinHttpRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IWinHttpRequest methods ***/
#define IWinHttpRequest_SetProxy(This,proxy_setting,proxy_server,bypass_list) (This)->lpVtbl->SetProxy(This,proxy_setting,proxy_server,bypass_list)
#define IWinHttpRequest_SetCredentials(This,username,password,flags) (This)->lpVtbl->SetCredentials(This,username,password,flags)
#define IWinHttpRequest_Open(This,method,url,async) (This)->lpVtbl->Open(This,method,url,async)
#define IWinHttpRequest_SetRequestHeader(This,header,value) (This)->lpVtbl->SetRequestHeader(This,header,value)
#define IWinHttpRequest_GetResponseHeader(This,header,value) (This)->lpVtbl->GetResponseHeader(This,header,value)
#define IWinHttpRequest_GetAllResponseHeaders(This,headers) (This)->lpVtbl->GetAllResponseHeaders(This,headers)
#define IWinHttpRequest_Send(This,body) (This)->lpVtbl->Send(This,body)
#define IWinHttpRequest_get_Status(This,status) (This)->lpVtbl->get_Status(This,status)
#define IWinHttpRequest_get_StatusText(This,status) (This)->lpVtbl->get_StatusText(This,status)
#define IWinHttpRequest_get_ResponseText(This,body) (This)->lpVtbl->get_ResponseText(This,body)
#define IWinHttpRequest_get_ResponseBody(This,body) (This)->lpVtbl->get_ResponseBody(This,body)
#define IWinHttpRequest_get_ResponseStream(This,body) (This)->lpVtbl->get_ResponseStream(This,body)
#define IWinHttpRequest_get_Option(This,option,value) (This)->lpVtbl->get_Option(This,option,value)
#define IWinHttpRequest_put_Option(This,option,value) (This)->lpVtbl->put_Option(This,option,value)
#define IWinHttpRequest_WaitForResponse(This,timeout,succeeded) (This)->lpVtbl->WaitForResponse(This,timeout,succeeded)
#define IWinHttpRequest_Abort(This) (This)->lpVtbl->Abort(This)
#define IWinHttpRequest_SetTimeouts(This,resolve_timeout,connect_timeout,send_timeout,receive_timeout) (This)->lpVtbl->SetTimeouts(This,resolve_timeout,connect_timeout,send_timeout,receive_timeout)
#define IWinHttpRequest_SetClientCertificate(This,certificate) (This)->lpVtbl->SetClientCertificate(This,certificate)
#define IWinHttpRequest_SetAutoLogonPolicy(This,policy) (This)->lpVtbl->SetAutoLogonPolicy(This,policy)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IWinHttpRequest_QueryInterface(IWinHttpRequest* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IWinHttpRequest_AddRef(IWinHttpRequest* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IWinHttpRequest_Release(IWinHttpRequest* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static FORCEINLINE HRESULT IWinHttpRequest_GetTypeInfoCount(IWinHttpRequest* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static FORCEINLINE HRESULT IWinHttpRequest_GetTypeInfo(IWinHttpRequest* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static FORCEINLINE HRESULT IWinHttpRequest_GetIDsOfNames(IWinHttpRequest* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static FORCEINLINE HRESULT IWinHttpRequest_Invoke(IWinHttpRequest* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IWinHttpRequest methods ***/
static FORCEINLINE HRESULT IWinHttpRequest_SetProxy(IWinHttpRequest* This,HTTPREQUEST_PROXY_SETTING proxy_setting,VARIANT proxy_server,VARIANT bypass_list) {
    return This->lpVtbl->SetProxy(This,proxy_setting,proxy_server,bypass_list);
}
static FORCEINLINE HRESULT IWinHttpRequest_SetCredentials(IWinHttpRequest* This,BSTR username,BSTR password,HTTPREQUEST_SETCREDENTIALS_FLAGS flags) {
    return This->lpVtbl->SetCredentials(This,username,password,flags);
}
static FORCEINLINE HRESULT IWinHttpRequest_Open(IWinHttpRequest* This,BSTR method,BSTR url,VARIANT async) {
    return This->lpVtbl->Open(This,method,url,async);
}
static FORCEINLINE HRESULT IWinHttpRequest_SetRequestHeader(IWinHttpRequest* This,BSTR header,BSTR value) {
    return This->lpVtbl->SetRequestHeader(This,header,value);
}
static FORCEINLINE HRESULT IWinHttpRequest_GetResponseHeader(IWinHttpRequest* This,BSTR header,BSTR *value) {
    return This->lpVtbl->GetResponseHeader(This,header,value);
}
static FORCEINLINE HRESULT IWinHttpRequest_GetAllResponseHeaders(IWinHttpRequest* This,BSTR *headers) {
    return This->lpVtbl->GetAllResponseHeaders(This,headers);
}
static FORCEINLINE HRESULT IWinHttpRequest_Send(IWinHttpRequest* This,VARIANT body) {
    return This->lpVtbl->Send(This,body);
}
static FORCEINLINE HRESULT IWinHttpRequest_get_Status(IWinHttpRequest* This,LONG *status) {
    return This->lpVtbl->get_Status(This,status);
}
static FORCEINLINE HRESULT IWinHttpRequest_get_StatusText(IWinHttpRequest* This,BSTR *status) {
    return This->lpVtbl->get_StatusText(This,status);
}
static FORCEINLINE HRESULT IWinHttpRequest_get_ResponseText(IWinHttpRequest* This,BSTR *body) {
    return This->lpVtbl->get_ResponseText(This,body);
}
static FORCEINLINE HRESULT IWinHttpRequest_get_ResponseBody(IWinHttpRequest* This,VARIANT *body) {
    return This->lpVtbl->get_ResponseBody(This,body);
}
static FORCEINLINE HRESULT IWinHttpRequest_get_ResponseStream(IWinHttpRequest* This,VARIANT *body) {
    return This->lpVtbl->get_ResponseStream(This,body);
}
static FORCEINLINE HRESULT IWinHttpRequest_get_Option(IWinHttpRequest* This,WinHttpRequestOption option,VARIANT *value) {
    return This->lpVtbl->get_Option(This,option,value);
}
static FORCEINLINE HRESULT IWinHttpRequest_put_Option(IWinHttpRequest* This,WinHttpRequestOption option,VARIANT value) {
    return This->lpVtbl->put_Option(This,option,value);
}
static FORCEINLINE HRESULT IWinHttpRequest_WaitForResponse(IWinHttpRequest* This,VARIANT timeout,VARIANT_BOOL *succeeded) {
    return This->lpVtbl->WaitForResponse(This,timeout,succeeded);
}
static FORCEINLINE HRESULT IWinHttpRequest_Abort(IWinHttpRequest* This) {
    return This->lpVtbl->Abort(This);
}
static FORCEINLINE HRESULT IWinHttpRequest_SetTimeouts(IWinHttpRequest* This,LONG resolve_timeout,LONG connect_timeout,LONG send_timeout,LONG receive_timeout) {
    return This->lpVtbl->SetTimeouts(This,resolve_timeout,connect_timeout,send_timeout,receive_timeout);
}
static FORCEINLINE HRESULT IWinHttpRequest_SetClientCertificate(IWinHttpRequest* This,BSTR certificate) {
    return This->lpVtbl->SetClientCertificate(This,certificate);
}
static FORCEINLINE HRESULT IWinHttpRequest_SetAutoLogonPolicy(IWinHttpRequest* This,WinHttpRequestAutoLogonPolicy policy) {
    return This->lpVtbl->SetAutoLogonPolicy(This,policy);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IWinHttpRequest_SetProxy_Proxy(
    IWinHttpRequest* This,
    HTTPREQUEST_PROXY_SETTING proxy_setting,
    VARIANT proxy_server,
    VARIANT bypass_list);
void __RPC_STUB IWinHttpRequest_SetProxy_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_SetCredentials_Proxy(
    IWinHttpRequest* This,
    BSTR username,
    BSTR password,
    HTTPREQUEST_SETCREDENTIALS_FLAGS flags);
void __RPC_STUB IWinHttpRequest_SetCredentials_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_Open_Proxy(
    IWinHttpRequest* This,
    BSTR method,
    BSTR url,
    VARIANT async);
void __RPC_STUB IWinHttpRequest_Open_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_SetRequestHeader_Proxy(
    IWinHttpRequest* This,
    BSTR header,
    BSTR value);
void __RPC_STUB IWinHttpRequest_SetRequestHeader_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_GetResponseHeader_Proxy(
    IWinHttpRequest* This,
    BSTR header,
    BSTR *value);
void __RPC_STUB IWinHttpRequest_GetResponseHeader_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_GetAllResponseHeaders_Proxy(
    IWinHttpRequest* This,
    BSTR *headers);
void __RPC_STUB IWinHttpRequest_GetAllResponseHeaders_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_Send_Proxy(
    IWinHttpRequest* This,
    VARIANT body);
void __RPC_STUB IWinHttpRequest_Send_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_get_Status_Proxy(
    IWinHttpRequest* This,
    LONG *status);
void __RPC_STUB IWinHttpRequest_get_Status_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_get_StatusText_Proxy(
    IWinHttpRequest* This,
    BSTR *status);
void __RPC_STUB IWinHttpRequest_get_StatusText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_get_ResponseText_Proxy(
    IWinHttpRequest* This,
    BSTR *body);
void __RPC_STUB IWinHttpRequest_get_ResponseText_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_get_ResponseBody_Proxy(
    IWinHttpRequest* This,
    VARIANT *body);
void __RPC_STUB IWinHttpRequest_get_ResponseBody_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_get_ResponseStream_Proxy(
    IWinHttpRequest* This,
    VARIANT *body);
void __RPC_STUB IWinHttpRequest_get_ResponseStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_get_Option_Proxy(
    IWinHttpRequest* This,
    WinHttpRequestOption option,
    VARIANT *value);
void __RPC_STUB IWinHttpRequest_get_Option_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_put_Option_Proxy(
    IWinHttpRequest* This,
    WinHttpRequestOption option,
    VARIANT value);
void __RPC_STUB IWinHttpRequest_put_Option_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_WaitForResponse_Proxy(
    IWinHttpRequest* This,
    VARIANT timeout,
    VARIANT_BOOL *succeeded);
void __RPC_STUB IWinHttpRequest_WaitForResponse_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_Abort_Proxy(
    IWinHttpRequest* This);
void __RPC_STUB IWinHttpRequest_Abort_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_SetTimeouts_Proxy(
    IWinHttpRequest* This,
    LONG resolve_timeout,
    LONG connect_timeout,
    LONG send_timeout,
    LONG receive_timeout);
void __RPC_STUB IWinHttpRequest_SetTimeouts_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_SetClientCertificate_Proxy(
    IWinHttpRequest* This,
    BSTR certificate);
void __RPC_STUB IWinHttpRequest_SetClientCertificate_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWinHttpRequest_SetAutoLogonPolicy_Proxy(
    IWinHttpRequest* This,
    WinHttpRequestAutoLogonPolicy policy);
void __RPC_STUB IWinHttpRequest_SetAutoLogonPolicy_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IWinHttpRequest_INTERFACE_DEFINED__ */

/*****************************************************************************
 * WinHttpRequest coclass
 */

DEFINE_GUID(CLSID_WinHttpRequest, 0x2087c2f4, 0x2cef, 0x4953, 0xa8,0xab, 0x66,0x77,0x9b,0x67,0x04,0x95);

#ifdef __cplusplus
class DECLSPEC_UUID("2087c2f4-2cef-4953-a8ab-66779b670495") WinHttpRequest;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(WinHttpRequest, 0x2087c2f4, 0x2cef, 0x4953, 0xa8,0xab, 0x66,0x77,0x9b,0x67,0x04,0x95)
#endif
#endif

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __httprequest_h__ */
