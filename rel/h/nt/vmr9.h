/*
 *  vmr9.h      DirectX 9 Video Mixing Renderer (VMR) interfaces
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

#include <rpc.h>
#include <rpcndr.h>
#ifndef COM_NO_WINDOWS_H
    #include <windows.h>
    #include <ole2.h>
#endif

#ifndef __vmr9_h__
#define __vmr9_h__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
typedef interface IVMRSurfaceAllocatorNotify9   IVMRSurfaceAllocatorNotify9;
typedef interface IVMRImageCompositor9          IVMRImageCompositor9;

/* VMR string lengths */
#define VMR9DEVICENAMELEN           32
#define VMR9DEVICEDESCRIPTIONLEN    512

/* VMR presentation flags */
typedef enum {
    VMR9Sample_SyncPoint        = 0x00000001,
    VMR9Sample_Preroll          = 0x00000002,
    VMR9Sample_Discontinuity    = 0x00000004,
    VMR9Sample_TimeValid        = 0x00000008,
    VMR9Sample_SrcDstRectsValid = 0x00000010
} VMR9PresentationFlags;

/* VMR presentation information */
typedef struct _VMR9PresentationInfo {
    DWORD               dwFlags;
    IDirect3DSurface9   *lpSurf;
    REFERENCE_TIME      rtStart;
    REFERENCE_TIME      rtEnd;
    SIZE                szAspectRatio;
    RECT                rcSrc;
    RECT                rcDst;
    DWORD               dwReserved1;
    DWORD               dwReserved2;
} VMR9PresentationInfo;

/* VMR surface allocation flags */
typedef enum {
    VMR9AllocFlag_3DRenderTarget    = 0x00000001,
    VMR9AllocFlag_DXVATarget        = 0x00000002,
    VMR9AllocFlag_TextureSurface    = 0x00000004,
    VMR9AllocFlag_OffscreenSurface  = 0x00000008,
    VMR9AllocFlag_RGBDynamicSwitch  = 0x00000010,
    VMR9AllocFlag_UsageMask         = 0x000000FF
} VMR9SurfaceAllocationFlags;

/* VMR allocation information */
typedef struct _VMR9AllocationInfo {
    DWORD       dwFlags;
    DWORD       dwWidth;
    DWORD       dwHeight;
    D3DFORMAT   Format;
    D3DPOOL     Pool;
    DWORD       MinBuffers;
    SIZE        szAspectRatio;
    SIZE        szNativeSize;
} VMR9AllocationInfo;

/* VMR aspect ratio modes */
typedef enum {
    VMR9ARMode_None         = 0,
    VMR9ARMode_LetterBox    = 1
} VMR9AspectRatioMode;

/* VMR mixer preferences */
typedef enum {
    MixerPref9_NoDecimation             = 0x00000001,
    MixerPref9_DecimateOutput           = 0x00000002,
    MixerPref9_ARAdjustXorY             = 0x00000004,
    MixerPref9_NonSquareMixing          = 0x00000008,
    MixerPref9_DecimateMask             = 0x0000000F,
    MixerPref9_BiLinearFiltering        = 0x00000010,
    MixerPref9_PointFiltering           = 0x00000020,
    MixerPref9_AnisotropicFiltering     = 0x00000040,
    MixerPref9_PyramidalQuadFiltering   = 0x00000080,
    MixerPref9_GaussianQuadFiltering    = 0x00000100,
    MixerPref9_FilteringMask            = 0x00000FF0,
    MixerPref9_RenderTargetRGB          = 0x00001000,
    MixerPref9_RenderTargetYUV          = 0x00002000,
    MixerPref9_RenderTargerMask         = 0x000FF000,
    MixerPref9_DynamicSwitchToBOB       = 0x00100000,
    MixerPref9_DyanmicDecimateBy2       = 0x00200000,
    MixerPref9_DynamicMask              = 0x00F00000
} VMR9MixerPrefs;

/* VMR normalized rectangle */
typedef struct _VMR9NormalizedRect {
    float   left;
    float   top;
    float   right;
    float   bottom;
} VMR9NormalizedRect;

/* VMR process amplificiation control flags */
typedef enum {
    ProcAmpControl9_Brightness  = 0x00000001,
    ProcAmpControl9_Contrast    = 0x00000002,
    ProcAmpControl9_Hue         = 0x00000004,
    ProcAmpContorl9_Saturation  = 0x00000008,
    ProcAmpControl9_Mask        = 0x0000000F
} VMR9ProcAmpControlFlags;

/* VMR process amplification control information */
typedef struct _VMR9ProcAmpControl {
    DWORD   dwSize;
    DWORD   dwFlags;
    float   Brightness;
    float   Contrast;
    float   Hue;
    float   Saturation;
} VMR9ProcAmpControl;

/* VMR process amplification control range */
typedef struct _VMR9ProcAmpControlRange {
    DWORD                   dwSize;
    VMR9ProcAmpControlFlags dwProperty;
    float                   MinValue;
    float                   MaxValue;
    float                   DefaultValue;
    float                   StepSize;
} VMR9ProcAmpControlRange;

/* VMR alpha bitmap */
typedef struct _VMR9AlphaBitmap {
    DWORD               dwFlags;
    HDC                 hdc;
    IDirect3DSurface9   *pDDS;
    RECT                rSrc;
    VMR9NormalizedRect  rDest;
    FLOAT               fAlpha;
    COLORREF            clrSrcKey;
    DWORD               dwFilterMode;
} VMR9AlphaBitmap;

/* VMR alpha bitmap flags */
typedef enum {
    VMR9AlphaBitmap_Disable     = 0x00000001,
    VMR9AlphaBitmap_hDC         = 0x00000002,
    VMR9AlphaBitmap_EntireDDS   = 0x00000004,
    VMR9AlphaBitmap_SrcColorKey = 0x00000008,
    VMR9AlphaBitmap_SrcRect     = 0x00000010,
    VMR9AlphaBitmap_FilterMode  = 0x00000020
} VMR9AlphaBitmapFlags;

/* VMR render preferences */
typedef enum {
    RenderPrefs9_DoNotRenderBorder  = 0x00000001,
    RenderPrefs9_Mask               = 0x00000001
} VMR9RenderPrefs;

/* VMR modes */
typedef enum {
    VMR9Mode_Windowed   = 0x00000001,
    VMR9Mode_Windowless = 0x00000002,
    VMR9Mode_Renderless = 0x00000004,
    VMR9Mode_Mask       = 0x00000007
} VMR9Mode;

/* VMR monitor information */
typedef struct _VMR9MonitorInfo {
    UINT            uDevID;
    RECT            rcMonitor;
    HMONITOR        hMon;
    DWORD           dwFlags;
    wchar_t         szDevice[VMR9DEVICENAMELEN];
    wchar_t         szDescription[VMR9DEVICEDESCRIPTIONLEN];
    LARGE_INTEGER   liDriverVersion;
    DWORD           dwVendorId;
    DWORD           dwDeviceId;
    DWORD           dwSubSysId;
    DWORD           dwRevision;
} VMR9MonitorInfo;

/* VMR deinterlace preferences */
typedef enum {
    DeinterlacePref9_NextBest   = 0x01,
    DeinterlacePref9_BOB        = 0x02,
    DeinterlacePref9_Weave      = 0x04,
    DeinterlacePref9_Mask       = 0x07
} VMR9DeinterlacePrefs;

/* VMR deinterlace technologies */
typedef enum {
    DeinterlaceTech9_Unknown                = 0x0000,
    DeinterlaceTech9_BOBLineReplicate       = 0x0001,
    DeinterlaceTech9_BOBVerticalStretch     = 0x0002,
    DeinterlaceTech9_MedianFiltering        = 0x0004,
    DeinterlaceTech9_EdgeFiltering          = 0x0010,
    DeinterlaceTech9_FieldAdaptive          = 0x0020,
    DeinterlaceTech9_PixelAdaptive          = 0x0040,
    DeinterlaceTech9_MotionVectorSteered    = 0x0080
} VMR9DeinterlaceTech;

/* VMR frequency */
typedef struct _VMR9Frequency {
    DWORD   dwNumerator;
    DWORD   dwDenominator;
} VMR9Frequency;

/* VMR sample formats */
typedef enum _VMR9_SampleFormat {
    VMR9_SampleProgressiveFormat            = 2,
    VMR9_SampleFieldInterleavedEvenFirst    = 3,
    VMR9_SampleFieldInterleavedOddFirst     = 4,
    VMR9_SampleFieldSingleEven              = 5,
    VMR9_SampleFieldSingleOdd               = 6
} VMR9_SampleFormat;

/* VMR video description */
typedef struct _VMR9VideoDesc {
    DWORD               dwSize;
    DWORD               dwSampleWidth;
    DWORD               dwSampleHeight;
    VMR9_SampleFormat   SampleFormat;
    DWORD               dwFourCC;
    VMR9Frequency       InputSampleFreq;
    VMR9Frequency       OutputFrameFreq;
} VMR9VideoDesc;

/* VMR deinterlace capabilities */
typedef struct _VMR9DeinterlaceCaps {
    DWORD               dwSize;
    DWORD               dwNumPreviousOutputFrames;
    DWORD               dwNumForwardRefSamples;
    DWORD               dwNumBackwardRefSamples;
    VMR9DeinterlaceTech DeinterlaceTechnology;
} VMR9DeinterlaceCaps;

/* VMR video stream information */
typedef struct _VMR9VideoStreamInfo {
    IDirect3DSurface9   *pddsVideoSurface;
    DWORD               dwWidth;
    DWORD               dwHeight;
    DWORD               dwStrmID;
    FLOAT               fAlpha;
    VMR9NormalizedRect  rNormal;
    REFERENCE_TIME      rtStart;
    REFERENCE_TIME      rtEnd;
    VMR9_SampleFormat   SampleFormat;
} VMR9VideoStreamInfo;
/* IVMRImagePresenter9 interface */
#undef INTERFACE
#define INTERFACE   IVMRImagePresenter9
DECLARE_INTERFACE_( IVMRImagePresenter9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRImagePresenter9 methods */
    STDMETHOD( StartPresenting )( THIS_ DWORD_PTR ) PURE;
    STDMETHOD( StopPresenting )( THIS_ DWORD_PTR ) PURE;
    STDMETHOD( PresentImage )( THIS_ DWORD_PTR, VMR9PresentationInfo * ) PURE;
};

/* IVMRSurfaceAllocator9 interface */
#undef INTERFACE
#define INTERFACE   IVMRSurfaceAllocator9
DECLARE_INTERFACE_( IVMRSurfaceAllocator9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRSurfaceAllocator9 methods */
    STDMETHOD( InitializeDevice )( THIS_ DWORD_PTR, VMR9AllocationInfo *, DWORD * ) PURE;
    STDMETHOD( TerminateDevice )( THIS_ DWORD_PTR ) PURE;
    STDMETHOD( GetSurface )( THIS_ DWORD_PTR, DWORD, DWORD, IDirect3DSurface9 ** ) PURE;
    STDMETHOD( AdviseNotify )( THIS_ IVMRSurfaceAllocatorNotify9 * ) PURE;
};

/* IVMRSurfaceAllocatorEx9 interface */
#undef INTERFACE
#define INTERFACE   IVMRSurfaceAllocatorEx9
DECLARE_INTERFACE_( IVMRSurfaceAllocatorEx9, IVMRSurfaceAllocator9 ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRSurfaceAllocator9 methods */
    STDMETHOD( InitializeDevice )( THIS_ DWORD_PTR, VMR9AllocationInfo *, DWORD * ) PURE;
    STDMETHOD( TerminateDevice )( THIS_ DWORD_PTR ) PURE;
    STDMETHOD( GetSurface )( THIS_ DWORD_PTR, DWORD, DWORD, IDirect3DSurface9 ** ) PURE;
    STDMETHOD( AdviseNotify )( THIS_ IVMRSurfaceAllocatorNotify9 * ) PURE;

    /* IVMRSurfaceAllocatorEx9 methods */
    STDMETHOD( GetSurfaceEx )( THIS_ DWORD_PTR, DWORD, DWORD, IDirect3DSurface9 **, RECT * ) PURE;
};

/* IVMRSurfaceAllocatorNotify9 interface */
#undef INTERFACE
#define INTERFACE   IVMRSurfaceAllocatorNotify9
DECLARE_INTERFACE_( IVMRSurfaceAllocatorNotify9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRSurfaceAllocator9 methods */
    STDMETHOD( AdviseSurfaceAllocator )( THIS_ DWORD_PTR, IVMRSurfaceAllocator9 * ) PURE;
    STDMETHOD( SetD3DDevice )( THIS_ IDirect3DDevice9 *, HMONITOR ) PURE;
    STDMETHOD( ChangeD3DDevice )( THIS_ IDirect3DDevice9 *, HMONITOR ) PURE;
    STDMETHOD( AllocateSurfaceHelper )( THIS_ VMR9AllocationInfo *, DWORD *, IDirect3DDevice9 ** ) PURE;
    STDMETHOD( NotifyEvent )( THIS_ LONG, LONG_PTR, LONG_PTR ) PURE;
};

/* IVMRWindowslessControl9 interface */
#undef INTERFACE
#define INTERFACE   IVMRWindowlessControl9
DECLARE_INTERFACE_( IVMRWindowlessControl9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRWindowlessControl9 methods */
    STDMETHOD( GetNativeVideoSize )( THIS_ LONG *, LONG *, LONG *, LONG * ) PURE;
    STDMETHOD( GetMinIdealVideoSize )( THIS_ LONG *, LONG * ) PURE;
    STDMETHOD( GetMaxIdealVideoSize )( THIS_ LONG *, LONG * ) PURE;
    STDMETHOD( SetVideoPosition )( THIS_ LPRECT, LPRECT ) PURE;
    STDMETHOD( GetVideoPosition )( THIS_ LPRECT, LPRECT ) PURE;
    STDMETHOD( GetAspectRatioMode )( THIS_ DWORD * ) PURE;
    STDMETHOD( SetAspectRatioMode )( THIS_ DWORD ) PURE;
    STDMETHOD( SetVideoClippingWindow )( THIS_ HWND ) PURE;
    STDMETHOD( RepaintVideo )( THIS_ HWND, HDC ) PURE;
    STDMETHOD( DisplayModeChanged )( THIS ) PURE;
    STDMETHOD( GetCurrentImage )( THIS_ BYTE ** ) PURE;
    STDMETHOD( SetBorderColor )( THIS_ COLORREF ) PURE;
    STDMETHOD( GetBorderColor )( THIS_ COLORREF * ) PURE;
};

/* IVMRMixerControl9 interface */
#undef INTERFACE
#define INTERFACE   IVMRMixerControl9
DECLARE_INTERFACE_( IVMRMixerControl9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRMixerControl9 methods */
    STDMETHOD( SetAlpha )( THIS_ DWORD, float ) PURE;
    STDMETHOD( GetAlpha )( THIS_ DWORD, float * ) PURE;
    STDMETHOD( SetZOrder )( THIS_ DWORD, DWORD ) PURE;
    STDMETHOD( GetZOrder )( THIS_ DWORD, DWORD * ) PURE;
    STDMETHOD( SetOutputRect )( THIS_ DWORD, const VMR9NormalizedRect * ) PURE;
    STDMETHOD( GetOutputRect )( THIS_ DWORD, VMR9NormalizedRect * ) PURE;
    STDMETHOD( SetBackgroundClr )( THIS_ COLORREF ) PURE;
    STDMETHOD( GetBackgroundClr )( THIS_ COLORREF * ) PURE;
    STDMETHOD( SetMixingPrefs )( THIS_ DWORD ) PURE;
    STDMETHOD( GetMixingPrefs )( THIS_ DWORD * ) PURE;
    STDMETHOD( SetProcAmpControl )( THIS_ DWORD, VMR9ProcAmpControl * ) PURE;
    STDMETHOD( GetProcAmpControl )( THIS_ DWORD, VMR9ProcAmpControl * ) PURE;
    STDMETHOD( GetProcAmpControlRange )( THIS_ DWORD, VMR9ProcAmpControlRange * ) PURE;
};

/* IVMRMixerBitmap9 interface */
#undef INTERFACE
#define INTERFACE   IVMRMixerBitmap9
DECLARE_INTERFACE_( IVMRMixerBitmap9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRMixerBitmap9 methods */
    STDMETHOD( SetAlphaBitmap )( THIS_ const VMR9AlphaBitmap * ) PURE;
    STDMETHOD( UpdateAlphaBitmapParameters )( THIS_ const VMR9AlphaBitmap * ) PURE;
    STDMETHOD( GetAlphaBitmapParameters )( THIS_ VMR9AlphaBitmap * ) PURE;
};

/* IVMRSurface9 interface */
#undef INTERFACE
#define INTERFACE   IVMRSurface9
DECLARE_INTERFACE_( IVMRSurface9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRSurface9 methods */
    STDMETHOD( IsSurfaceLocked )( THIS ) PURE;
    STDMETHOD( LockSurface )( THIS_ BYTE ** ) PURE;
    STDMETHOD( UnlockSurface )( THIS ) PURE;
    STDMETHOD( GetSurface )( THIS_ IDirect3DSurface9 ** ) PURE;
};

/* IVMRImagePresenterConfig9 interface */
#undef INTERFACE
#define INTERFACE   IVMRImagePresenterConfig9
DECLARE_INTERFACE_( IVMRImagePresenterConfig9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRImagePresenterConfig9 methods */
    STDMETHOD( SetRenderingPrefs )( THIS_ DWORD ) PURE;
    STDMETHOD( GetRenderingPrefs )( THIS_ DWORD * ) PURE;
};

/* IVMRVideoStreamControl9 interface */
#undef INTERFACE
#define INTERFACE   IVMRVideoStreamControl9
DECLARE_INTERFACE_( IVMRVideoStreamControl9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRVideoStreamControl9 methods */
    STDMETHOD( SetStreamActiveState )( THIS_ BOOL ) PURE;
    STDMETHOD( GetStreamActiveState )( THIS_ BOOL * ) PURE;
};

/* IVMRFilterConfig9 interface */
#undef INTERFACE
#define INTERFACE   IVMRFilterConfig9
DECLARE_INTERFACE_( IVMRFilterConfig9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRFilterConfig9 methods */
    STDMETHOD( SetImageCompositor )( THIS_ IVMRImageCompositor9 * ) PURE;
    STDMETHOD( SetNumberOfStreams )( THIS_ DWORD ) PURE;
    STDMETHOD( GetNumberOfStreams )( THIS_ DWORD * ) PURE;
    STDMETHOD( SetRenderingPrefs )( THIS_ DWORD ) PURE;
    STDMETHOD( GetRenderingPrefs )( THIS_ DWORD * ) PURE;
    STDMETHOD( SetRenderingMode )( THIS_ DWORD ) PURE;
    STDMETHOD( GetRenderingMode )( THIS_ DWORD * ) PURE;
};

/* IVMRAspectRatioControl9 interface */
#undef INTERFACE
#define INTERFACE   IVMRAspectRatioControl9
DECLARE_INTERFACE_( IVMRAspectRatioControl9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRAspectRatioControl9 methods */
    STDMETHOD( GetAspectRatioMode )( THIS_ LPDWORD ) PURE;
    STDMETHOD( SetAspectRatioMode )( THIS_ DWORD ) PURE;
};

/* IVMRMonitorConfig9 interface */
#undef INTERFACE
#define INTERFACE   IVMRMonitorConfig9
DECLARE_INTERFACE_( IVMRMonitorConfig9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRMonitorConfig9 methods */
    STDMETHOD( SetMonitor )( THIS_ UINT ) PURE;
    STDMETHOD( GetMonitor )( THIS_ UINT * ) PURE;
    STDMETHOD( SetDefaultMonitor )( THIS_ UINT ) PURE;
    STDMETHOD( GetDefaultMonitor )( THIS_ UINT * ) PURE;
    STDMETHOD( GetAvailableMonitors )( THIS_ VMR9MonitorInfo *, DWORD, DWORD * ) PURE;
};

/* IVMRDeinterlaceControl9 interface */
#undef INTERFACE
#define INTERFACE   IVMRDeinterlaceControl9
DECLARE_INTERFACE_( IVMRDeinterlaceControl9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRDeinterlaceControl9 methods */
    STDMETHOD( GetNumberOfDeinterlaceModes )( THIS_ VMR9VideoDesc *, LPDWORD, LPGUID ) PURE;
    STDMETHOD( GetDeinterlaceModeCaps )( THIS_ LPGUID, VMR9VideoDesc *, VMR9DeinterlaceCaps * ) PURE;
    STDMETHOD( GetDeinterlaceMode )( THIS_ DWORD, LPGUID ) PURE;
    STDMETHOD( SetDeinterlaceMode )( THIS_ DWORD, LPGUID ) PURE;
    STDMETHOD( GetDeinterlacePrefs )( THIS_ LPDWORD ) PURE;
    STDMETHOD( SetDeinterlacePrefs )( THIS_ DWORD ) PURE;
    STDMETHOD( GetActualDeinterlaceMode )( THIS_ DWORD, LPGUID ) PURE;
};

/* IVMRImageCompositor9 interface */
#undef INTERFACE
#define INTERFACE   IVMRImageCompositor9
DECLARE_INTERFACE_( IVMRImageCompositor9, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IVMRImageCompositor9 methods */
    STDMETHOD( InitCompositionDevice )( THIS_ IUnknown * ) PURE;
    STDMETHOD( TermCompositionDevice )( THIS_ IUnknown * ) PURE;
    STDMETHOD( SetStreamMediaType )( THIS_ DWORD, AM_MEDIA_TYPE *, BOOL ) PURE;
    STDMETHOD( CompositeImage )( THIS_ IUnknown *, IDirect3DSurface9 *, AM_MEDIA_TYPE *, REFERENCE_TIME, REFERENCE_TIME, D3DCOLOR, VMR9VideoStreamInfo *, UINT ) PURE;
};

/* C object macros */
#if (!defined( __cplusplus ) || defined( CINTERFACE )) && defined( COBJMACROS )
    #define IVMRImagePresenter9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRImagePresenter9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRImagePresenter9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRImagePresenter9_StartPresenting( x, p ) \
        (x)->lpVtbl->StartPresenting( x, p )
    #define IVMRImagePresenter9_StopPresenting( x, p ) \
        (x)->lpVtbl->StopPresenting( x, p )
    #define IVMRImagePresenter9_PresentImage( x, p1, p2 ) \
        (x)->lpVtbl->PresentImage( x, p1, p2 )
    #define IVMRSurfaceAllocator9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRSurfaceAllocator9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRSurfaceAllocator9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRSurfaceAllocator9_InitializeDevice( x, p1, p2, p3 ) \
        (x)->lpVtbl->InitializeDevice( x, p1, p2, p3 )
    #define IVMRSurfaceAllocator9_TerminateDevice( x, p ) \
        (x)->lpVtbl->TerminateDevice( x, p )
    #define IVMRSurfaceAllocator9_GetSurface( x, p1, p2, p3, p4 ) \
        (x)->lpVtbl->GetSurface( x, p1, p2, p3, p4 )
    #define IVMRSurfaceAllocator9_AdviseNotify( x, p ) \
        (x)->lpVtbl->AdviseNotify( x, p )
    #define IVMRSurfaceAllocatorEx9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRSurfaceAllocatorEx9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRSurfaceAllocatorEx9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRSurfaceAllocatorEx9_InitializeDevice( x, p1, p2, p3 ) \
        (x)->lpVtbl->InitializeDevice( x, p1, p2, p3 )
    #define IVMRSurfaceAllocatorEx9_TerminateDevice( x, p ) \
        (x)->lpVtbl->TerminateDevice( x, p )
    #define IVMRSurfaceAllocatorEx9_GetSurface( x, p1, p2, p3, p4 ) \
        (x)->lpVtbl->GetSurface( x, p1, p2, p3, p4 )
    #define IVMRSurfaceAllocatorEx9_AdviseNotify( x, p ) \
        (x)->lpVtbl->AdviseNotify( x, p )
    #define IVMRSurfaceAllocatorEx9_GetSurfaceEx( x, p1, p2, p3, p4, p5 ) \
        (x)->lpVtbl->GetSurfaceEx( x, p1, p2, p3, p4, p5 )
    #define IVMRSurfaceAllocatorNotify9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRSurfaceAllocatorNotify9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRSurfaceAllocatorNotify9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRSurfaceAllocatorNotify9_AdviseSurfaceAllocator( x, p1, p2 ) \
        (x)->lpVtbl->AdviseSurfaceAllocator( x, p1, p2 )
    #define IVMRSurfaceAllocatorNotify9_SetD3DDevice( x, p1, p2 ) \
        (x)->lpVtbl->SetD3DDevice( x, p1, p2 )
    #define IVMRSurfaceAllocatorNotify9_ChangeD3DDevice( x, p1, p2 ) \
        (x)->lpVtbl->ChangeD3DDevice( x, p1, p2 )
    #define IVMRSurfaceAllocatorNotify9_AllocateSurfaceHelper( x, p1, p2, p3 ) \
        (x)->lpVtbl->AllocateSurfaceHelper( x, p1, p2, p3 )
    #define IVMRSurfaceAllocatorNotify9_NotifyEvent( x, p1, p2, p3 ) \
        (x)->lpVtbl->NotifyEvent( x, p1, p2, p3 )
    #define IVMRWindowlessControl9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRWindowlessControl9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRWindowlessControl9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRWindowlessControl9_GetNativeVideoSize( x, p1, p2, p3, p4 ) \
        (x)->lpVtbl->GetNativeVideoSize( x, p1, p2, p3, p4 )
    #define IVMRWindowlessControl9_GetMinIdealVideoSize( x, p1, p2 ) \
        (x)->lpVtbl->GetMinIdealVideoSize( x, p1, p2 )
    #define IVMRWindowlessControl9_GetMaxIdealVideoSize( x, p1, p2 ) \
        (x)->lpVtbl->GetMaxIdealVideoSize( x, p1, p2 )
    #define IVMRWindowlessControl9_SetVideoPosition( x, p1, p2 ) \
        (x)->lpVtbl->SetVideoPosition( x, p1, p2 )
    #define IVMRWindowlessControl9_GetVideoPosition( x, p1, p2 ) \
        (x)->lpVtbl->GetVideoPosition( x, p1, p2 )
    #define IVMRWindowlessControl9_GetAspectRatioMode( x, p ) \
        (x)->lpVtbl->GetAspectRatioMode( x, p )
    #define IVMRWindowlessControl9_SetAspectRatioMode( x, p ) \
        (x)->lpVtbl->SetAspectRatioMode( x, p )
    #define IVMRWindowlessControl9_SetVideoClippingWindow( x, p ) \
        (x)->lpVtbl->SetVideoClippingWindow( x, p )
    #define IVMRWindowlessControl9_RepaintVideo( x, p1, p2 ) \
        (x)->lpVtbl->RepaintVideo( x, p1, p2 )
    #define IVMRWindowlessControl9_DisplayModeChanged( x ) \
        (x)->lpVtbl->DisplayModeChanged( x )
    #define IVMRWindowlessControl9_GetCurrentImage( x, p ) \
        (x)->lpVtbl->GetCurrentImage( x, p )
    #define IVMRWindowlessControl9_SetBorderColor( x, p ) \
        (x)->lpVtbl->SetBorderColor( x, p )
    #define IVMRWindowlessControl9_GetBorderColor( x, p ) \
        (x)->lpVtbl->GetBorderColor( x, p )
    #define IVMRMixerControl9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRMixerControl9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRMixerControl9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRMixerControl9_SetAlpha( x, p1, p2 ) \
        (x)->lpVtbl->SetAlpha( x, p1, p2 )
    #define IVMRMixerControl9_GetAlpha( x, p1, p2 ) \
        (x)->lpVtbl->GetAlpha( x, p1, p2 )
    #define IVMRMixerControl9_SetZOrder( x, p1, p2 ) \
        (x)->lpVtbl->SetZOrder( x, p1, p2 )
    #define IVMRMixerControl9_GetZOrder( x, p1, p2 ) \
        (x)->lpVtbl->GetZOrder( x, p1, p2 )
    #define IVMRMixerControl9_SetOutputRect( x, p1, p2 ) \
        (x)->lpVtbl->SetOutputRect( x, p1, p2 )
    #define IVMRMixerControl9_GetOutputRect( x, p1, p2 ) \
        (x)->lpVtbl->GetOutputRect( x, p1, p2 )
    #define IVMRMixerControl9_SetBackgroundClr( x, p ) \
        (x)->lpVtbl->SetBackgroundClr( x, p )
    #define IVMRMixerContorl9_GetBackgroundClr( x, p ) \
        (x)->lpVtbl->GetBackgroundClr( x, p )
    #define IVMRMixerControl9_SetMixingPrefs( x, p ) \
        (x)->lpVtbl->SetMixingPrefs( x, p )
    #define IVMRMixerControl9_GetMixingPrefs( x, p ) \
        (x)->lpVtbl->GetMixingPrefs( x, p )
    #define IVMRMixerControl9_SetProcAmpControl( x, p1, p2 ) \
        (x)->lpVtbl->SetProcAmpControl( x, p1, p2 )
    #define IVMRMixerControl9_GetProcAmpControl( x, p1, p2 ) \
        (x)->lpVtbl->GetProcAmpControl( x, p1, p2 )
    #define IVMRMixerControl9_GetProcAmpControlRange( x, p1, p2 ) \
        (x)->lpVtbl->GetProcAmpControlRange( x, p1, p2 )
    #define IVMRMixerBitmap9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRMixerBitmap9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRMixerBitmap9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRMixerBitmap9_SetAlphaBitmap( x, p ) \
        (x)->lpVtbl->SetAlphaBitmap( x, p )
    #define IVMRMixerBitmap9_UpdateAlphaBitmapParameters( x, p ) \
        (x)->lpVtbl->UpdateAlphaBitmapParameters( x, p )
    #define IVMRMixerBitmap9_GetAlphaBitmapParameters( x, p ) \
        (x)->lpVtbl->GetAlphaBitmapParameters( x, p )
    #define IVMRSurface9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRSurface9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRSurface9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRSurface9_IsSurfaceLocked( x ) \
        (x)->lpVtbl->IsSurfaceLocked( x )
    #define IVMRSurface9_LockSurface( x, p ) \
        (x)->lpVtbl->LockSurface( x, p )
    #define IVMRSurface9_UnlockSurface( x ) \
        (x)->lpVtbl->UnlockSurface( x )
    #define IVMRSurface9_GetSurface( x, p ) \
        (x)->lpVtbl->GetSurface( x, p )
    #define IVMRImagePresenterConfig9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRImagePresenterConfig9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRImagePresenterConfig9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRImagePresenterConfig9_SetRenderingPrefs( x, p ) \
        (x)->lpVtbl->SetRenderingPrefs( x, p )
    #define IVMRImagePresenterConfig9_GetRenderingPrefs( x, p ) \
        (x)->lpVtbl->GetRenderingPrefs( x, p )
    #define IVMRVideoStreamControl9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRVideoStreamControl9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRVideoStreamControl9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRVideoStreamControl9_SetStreamActiveState( x, p ) \
        (x)->lpVtbl->SetStreamActiveState( x, p )
    #define IVMRVideoStreamControl9_GetStreamActiveState( x, p ) \
        (x)->lpVtbl->GetStreamActiveState( x, p )
    #define IVMRFilterConfig9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRFilterConfig9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRFilterConfig9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRFilterConfig9_SetImageCompositor( x, p ) \
        (x)->lpVtbl->SetImageCompositor( x, p )
    #define IVMRFilterConfig9_SetNumberOfStreams( x, p ) \
        (x)->lpVtbl->SetNumberOfStreams( x, p )
    #define IVMRFilterConfig9_GetNumberOfStreams( x, p ) \
        (x)->lpVtbl->GetNumberOfStreams( x, p )
    #define IVMRFilterConfig9_SetRenderingPrefs( x, p ) \
        (x)->lpVtbl->SetRenderingPrefs( x, p )
    #define IVMRFilterConfig9_GetRenderingPrefs( x, p ) \
        (x)->lpVtbl->GetRenderingPrefs( x, p )
    #define IVMRFilterConfig9_SetRenderingMode( x, p ) \
        (x)->lpVtbl->SetRenderingMode( x, p )
    #define IVMRFilterConfig9_GetRenderingMode( x, p ) \
        (x)->lpVtbl->GetRenderingMode( x, p )
    #define IVMRAspectRatioControl9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRAspectRatioControl9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRAspectRatioControl9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRAspectRatioControl9_GetAspectRatioMode( x, p ) \
        (x)->lpVtbl->GetAspectRatioMode( x, p )
    #define IVMRAspectRatioControl9_SetAspectRatioMode( x, p ) \
        (x)->lpVtbl->SetAspectRatioMode( x, p )
    #define IVMRMonitorConfig9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRMonitorConfig9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRMonitorConfig9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRMonitorConfig9_SetMonitor( x, p ) \
        (x)->lpVtbl->SetMonitor( x, p )
    #define IVMRMonitorConfig9_GetMonitor( x, p ) \
        (x)->lpVtbl->GetMonitor( x, p )
    #define IVMRMonitorConfig9_SetDefaultMonitor( x, p ) \
        (x)->lpVtbl->SetDefaultMonitor( x, p )
    #define IVMRMonitorConfig9_GetDefaultMonitor( x, p ) \
        (x)->lpVtbl->GetDefaultMonitor( x, p )
    #define IVMRMonitorConfig9_GetAvailableMonitors( x, p1, p2, p3 ) \
        (x)->lpVtbl->GetAvailableMonitors( x, p1, p2, p3 )
    #define IVMRDeinterlaceControl9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRDeinterlaceControl9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRDeinterlaceControl9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRDeinterlaceControl9_GetNumberOfDeinterlaceModes( x, p1, p2, p3 ) \
        (x)->lpVtbl->GetNumberOfDeinterlaceModes( x, p1, p2, p3 )
    #define IVMRDeinterlaceControl9_GetDeinterlaceModeCaps( x, p1, p2, p3 ) \
        (x)->lpVtbl->GetDeinterlaceModeCaps( x, p1, p2, p3 )
    #define IVMRDeinterlaceControl9_GetDeinterlaceMode( x, p1, p2 ) \
        (x)->lpVtbl->GetDeinterlaceMode( x, p1, p2 )
    #define IVMRDeinterlaceControl9_SetDeinterlaceMode( x, p1, p2 ) \
        (x)->lpVtbl->SetDeinterlaceMode( x, p1, p2 )
    #define IVMRDeinterlaceControl9_GetDeinterlacePrefs( x, p ) \
        (x)->lpVtbl->GetDeinterlacePrefs( x, p )
    #define IVMRDeinterlaceControl9_SetDeinterlacePrefs( x, p ) \
        (x)->lpVtbl->SetDeinterlacePrefs( x, p )
    #define IVMRDeinterlaceControl9_GetActualDeinterlaceMode( x, p1, p2 ) \
        (x)->lpVtbl->GetActualDeinterlaceMode( x, p1, p2 )
    #define IVMRImageCompositor9_QueryInterface( x, p1, p2 ) \
        (x)->lpVtbl->QueryInterface( x, p1, p2 )
    #define IVMRImageCompositor9_AddRef( x ) \
        (x)->lpVtbl->AddRef( x )
    #define IVMRImageCompositor9_Release( x ) \
        (x)->lpVtbl->Release( x )
    #define IVMRImageCompositor9_InitCompositionDevice( x, p ) \
        (x)->lpVtbl->InitCompositionDevice( x, p )
    #define IVMRImageCompositor9_TermCompositionDevice( x, p ) \
        (x)->lpVtbl->TermCompositionDevice( x, p )
    #define IVMRImageCompositor9_SetStreamMediaType( x, p1, p2, p3 ) \
        (x)->lpVtbl->SetStreamMediaType( x, p1, p2, p3 )
    #define IVMRImageCompositor9_CompositeImage( x, p1, p2, p3, p4, p5, p6, p7, p8 ) \
        (x)->lpVtbl->CompositeImage( x, p1, p2, p3, p4, p5, p6, p7, p8 )
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

/* GUIDs */
EXTERN_C const IID  __cdecl IID_IVMRImagePresenter9;
EXTERN_C const IID  __cdecl IID_IVMRSurfaceAllocator9;
EXTERN_C const IID  __cdecl IID_IVMRSurfaceAllocatorEx9;
EXTERN_C const IID  __cdecl IID_IVMRSurfaceAllocatorNotify9;
EXTERN_C const IID  __cdecl IID_IVMRWindowlessControl9;
EXTERN_C const IID  __cdecl IID_IVMRMixerControl9;
EXTERN_C const IID  __cdecl IID_IVMRMixerBitmap9;
EXTERN_C const IID  __cdecl IID_IVMRSurface9;
EXTERN_C const IID  __cdecl IID_IVMRImagePresenterConfig9;
EXTERN_C const IID  __cdecl IID_IVMRVideoStreamControl9;
EXTERN_C const IID  __cdecl IID_IVMRFilterConfig9;
EXTERN_C const IID  __cdecl IID_IVMRAspectRatioControl9;
EXTERN_C const IID  __cdecl IID_IVMRMonitorConfig9;
EXTERN_C const IID  __cdecl IID_IVMRDeinterlaceControl9;
EXTERN_C const IID  __cdecl IID_IVMRImageCompositor9;

#endif /* __vmr9_h__ */
