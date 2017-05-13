/*
 *  cmnquery.h  Common query interfaces
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2016 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef __cmnquery_h
#define __cmnquery_h

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
typedef interface IPersistQuery IPersistQuery;

/* Query form flags */
#define QUERYFORM_CHANGESFORMLIST       0x00000001L
#define QUERYFORM_CHANGESOPTFORMLIST    0x00000002L

/* Common query form flags */
#define CQFF_NOGLOBALPAGES  0x00000001L
#define CQFF_ISOPTIONAL     0x00000002L

/* Common query page messages */
#define CQPM_INITIALIZE             0x00000001
#define CQPM_RELEASE                0x00000002
#define CQPM_ENABLE                 0x00000003
#define CQPM_GETPARAMETERS          0x00000005
#define CQPM_CLEARFORM              0x00000006
#define CQPM_PERSIST                0x00000007
#define CQPM_HELP                   0x00000008
#define CQPM_SETDEFAULTPARAMETERS   0x00000009
#define CQPM_HANDLERSPECIFIC        0x10000000

/* Common query flags */
#define OQWF_OKCANCEL           0x00000001L
#define OQWF_DEFAULTFORM        0x00000002L
#define OQWF_SINGLESELECT       0x00000004L
#define OQWF_LOADQUERY          0x00000008L
#define OQWF_REMOVESCOPES       0x00000010L
#define OQWF_REMOVEFORMS        0x00000020L
#define OQWF_ISSUEONOPEN        0x00000040L
#define OQWF_SHOWOPTIONAL       0x00000080L
#define OQWF_SAVEQUERYONOK      0x00000200L
#define OQWF_HIDEMENUS          0x00000400L
#define OQWF_HIDESEARCHUI       0x00000800L
#define OQWF_PARAMISPROPERTYBAG 0x80000000L

/* Common query form information */
typedef struct {
    DWORD   cbStruct;
    DWORD   dwFlags;
    CLSID   clsid;
    HICON   hIcon;
    LPCWSTR pszTitle;
} CQFORM;
typedef CQFORM  *LPCQFORM;

/* Query form callbacks */
typedef HRESULT (CALLBACK *LPCQADDFORMSPROC)( LPARAM, LPCQFORM );
typedef HRESULT (CALLBACK *LPCQADDPAGESPROC)( LPARAM, REFCLSID, struct _cqpage * );
typedef HRESULT (CALLBACK *LPCQPAGEPROC)( struct _cqpage *, HWND, UINT, WPARAM, LPARAM );

/* Common query page information */
typedef struct _cqpage {
    DWORD           cbStruct;
    DWORD           dwFlags;
    LPCQPAGEPROC    pPageProc;
    HINSTANCE       hInstance;
    INT             idPageName;
    INT             idPageTemplate;
    DLGPROC         pDlgProc;
    LPARAM          lParam;
} CQPAGE;
typedef CQPAGE  *LPCQPAGE;

/* ICommonQuery::OpenQueryWindow() parameters */
typedef struct {
    DWORD           cbStruct;
    DWORD           dwFlags;
    CLSID           clsidHandler;
    LPVOID          pHandlerParameters;
    CLSID           clsidDefaultForm;
    IPersistQuery   *pPersistQuery;
    union {
        void            *pFormParameters;
        IPropertyBag    *ppbFormParameters;
    };
} OPENQUERYWINDOW;
typedef OPENQUERYWINDOW *LPOPENQUERYWINDOW;

/* IQueryForm interface */
#undef INTERFACE
#define INTERFACE   IQueryForm
DECLARE_INTERFACE_( IQueryForm, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IQueryForm methods */
    STDMETHOD( Initialize )( THIS_ HKEY ) PURE;
    STDMETHOD( AddForms )( THIS_ LPCQADDFORMSPROC, LPARAM ) PURE;
    STDMETHOD( AddPages )( THIS_ LPCQADDPAGESPROC, LPARAM ) PURE;
};

/* IPersistQuery interface */
#undef INTERFACE
#define INTERFACE   IPersistQuery
DECLARE_INTERFACE_( IPersistQuery, IPersist ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;
    
    /* IPersist methods */
    STDMETHOD( GetClassID )( THIS_ CLSID * ) PURE;

    /* IPersistQuery methods */
    STDMETHOD( WriteString )( THIS_ LPCWSTR, LPCWSTR, LPCWSTR ) PURE;
    STDMETHOD( ReadString )( THIS_ LPCWSTR, LPCWSTR, LPWSTR, INT ) PURE;
    STDMETHOD( WriteInt )( THIS_ LPCWSTR, LPCWSTR, INT ) PURE;
    STDMETHOD( ReadInt )( THIS_ LPCWSTR, LPCWSTR, LPINT ) PURE;
    STDMETHOD( WriteStruct )( THIS_ LPCWSTR, LPCWSTR, LPVOID, DWORD ) PURE;
    STDMETHOD( ReadStruct )( THIS_ LPCWSTR, LPCWSTR, LPVOID, DWORD ) PURE;
    STDMETHOD( Clear )( THIS ) PURE;
};

/* ICommonQuery interface */
#undef INTERFACE
#define INTERFACE   ICommonQuery
DECLARE_INTERFACE_( ICommonQuery, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* ICommonQuery methods */
    STDMETHOD( OpenQueryWindow )( THIS_ HWND, LPOPENQUERYWINDOW, IDataObject ** ) PURE;
};

#ifdef __cplusplus
} /* extern "C" */
#endif

/* GUIDs */
EXTERN_C const IID      __cdecl IID_IQueryForm;
EXTERN_C const IID      __cdecl IID_IPersistQuery;
EXTERN_C const IID      __cdecl IID_ICommonQuery;
EXTERN_C const CLSID    __cdecl CLSID_CommonQuery;

#endif /* __cmnquery_h */
