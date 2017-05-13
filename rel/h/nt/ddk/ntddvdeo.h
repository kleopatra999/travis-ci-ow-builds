/*
 *  ntddvdeo.h  Video device I/O control codes
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

#ifndef _NTDDVDEO_
#define _NTDDVDEO_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <tvout.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Video device name */
#define VIDEO_DEVICE_NAME   "DISPLAY%d"
#define WVIDEO_DEVICE_NAME  L"DISPLAY%d"

/* Video device I/O control codes */
#define IOCTL_VIDEO_DISABLE_VDM \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0001, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_REGISTER_VDM \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0002, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_OUTPUT_DEVICE_POWER_STATE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0003, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_GET_OUTPUT_DEVICE_POWER_STATE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0004, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_MONITOR_DEVICE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0005, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_ENUM_MONITOR_PDO \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0006, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_INIT_WIN32K_CALLBACKS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0007, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_IS_VGA_DEVICE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0009, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_USE_DEVICE_IN_SESSION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x000A, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_PREPARE_FOR_EARECOVERY \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x000B, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_ENABLE_VDM \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0000, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SAVE_HARDWARE_STATE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0080, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_RESTORE_HARDWARE_STATE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0081, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_HANDLE_VIDEOPARAMETERS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0008, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_AVAIL_MODES \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0100, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_NUM_AVAIL_MODES \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0101, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_CURRENT_MODE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0102, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_CURRENT_MODE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0103, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_RESET_DEVICE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0104, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_LOAD_AND_SET_FONT \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0105, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_PALETTE_REGISTERS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0106, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_COLOR_REGISTERS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0107, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_ENABLE_CURSOR \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0108, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_DISABLE_CURSOR \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0109, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_CURSOR_ATTR \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x010A, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_CURSOR_ATTR \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x010B, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_CURSOR_POSITION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x010C, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_CURSOR_POSITION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x010D, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_ENABLE_POINTER \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x010E, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_DISABLE_POINTER \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x010F, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_POINTER_ATTR \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0110, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_POINTER_ATTR \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0111, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_POINTER_POSITION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0112, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_POINTER_POSITION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0113, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_POINTER_CAPABILITIES \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0114, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_GET_BANK_SELECT_CODE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0115, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_MAP_VIDEO_MEMORY \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0116, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_UNMAP_VIDEO_MEMORY \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0117, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_PUBLIC_ACCESS_RANGES \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0118, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_FREE_PUBLIC_ACCESS_RANGES \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0119, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_COLOR_CAPABILITIES \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x011A, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_POWER_MANAGEMENT \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x011B, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_GET_POWER_MANAGEMENT \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x011C, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SHARE_VIDEO_MEMORY \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x011D, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_UNSHARE_VIDEO_MEMORY \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x011E, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_COLOR_LUT_DATA \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x011F, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_GET_CHILD_STATE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0120, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_VALIDATE_CHILD_STATE_CONFIGURATION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0121, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_CHILD_STATE_CONFIGURATION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0122, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SWITCH_DUALVIEW \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0123, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_BANK_POSITION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0124, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_SUPPORTED_BRIGHTNESS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0125, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_QUERY_DISPLAY_BRIGHTNESS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0126, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_VIDEO_SET_DISPLAY_BRIGHTNESS \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0127, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_FSVIDEO_COPY_FRAME_BUFFER \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0200, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_FSVIDEO_WRITE_TO_FRAME_BUFFER \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0201, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_FSVIDEO_REVERSE_MOUSE_POINTER \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0202, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_FSVIDEO_SET_CURRENT_MODE \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0203, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_FSVIDEO_SET_SCREEN_INFORMATION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0204, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_FSVIDEO_SET_CURSOR_POSITION \
    CTL_CODE( FILE_DEVICE_VIDEO, 0x0205, METHOD_BUFFERED, FILE_ANY_ACCESS )

/* DirectX WIN32K parameter flags */
#define DXGK_WIN32K_PARAM_FLAG_UPDATEREGISTRY   1L
#define DXGK_WIN32K_PARAM_FLAG_MODESWITCH       2L
#define DXGK_WIN32K_PARAM_FLAG_DISABLEVIEW      4L

/* Video dual view flags */
#define VIDEO_DUALVIEW_REMOVABLE    0x00000001L
#define VIDEO_DUALVIEW_PRIMARY      0x80000000L
#define VIDEO_DUALVIEW_SECONDARY    0x40000000L
#define VIDEO_DUALVIEW_WDDM_VGA     0x20000000L

/* Video child flags */
#define VIDEO_CHILD_ACTIVE              0x00000001L
#define VIDEO_CHILD_DETACHED            0x00000002L
#define VIDEO_CHILD_NOPRUNE_FREQ        0x80000000L
#define VIDEO_CHILD_NOPRUNE_RESOLUTION  0x40000000L

/* Video state flags */
#define VIDEO_STATE_NON_STANDARD_VGA        0x00000001L
#define VIDEO_STATE_UNEMULATED_VGA_STATE    0x00000002L
#define VIDEO_STATE_PACKED_CHAIN4_MODE      0x00000004L

/* Video mode flags */
#define VIDEO_MODE_NO_ZERO_MEMORY   0x80000000L
#define VIDEO_MODE_MAP_MEM_LINEAR   0x40000000L

/* Video mode attribute flags */
#define VIDEO_MODE_COLOR            0x00000001L
#define VIDEO_MODE_GRAPHICS         0x00000002L
#define VIDEO_MODE_PALETTE_DRIVEN   0x00000004L
#define VIDEO_MODE_MANAGED_PALETTE  0x00000008L
#define VIDEO_MODE_INTERLACED       0x00000010L
#define VIDEO_MODE_NO_OFF_SCREEN    0x00000020L
#define VIDEO_MODE_NO_64_BIT_ACCESS 0x00000040L
#define VIDEO_MODE_BANKED           0x00000080L
#define VIDEO_MODE_LINEAR           0x00000100L

/* Video mode pointer flags */
#define VIDEO_MODE_ASYNC_POINTER    0x00000001L
#define VIDEO_MODE_MONO_POINTER     0x00000002L
#define VIDEO_MODE_COLOR_POINTER    0x00000004L
#define VIDEO_MODE_ANIMATE_START    0x00000008L
#define VIDEO_MODE_ANIMATE_UPDATE   0x00000010L

/* Banking flags */
#define PLANAR_HC   0x00000001L

/* Video color capability attribute flags */
#define VIDEO_DEVICE_COLOR          0x00000001L
#define VIDEO_OPTIONAL_GAMMET_TABLE 0x00000002L

/* Video color LUT data formats */
#define VIDEO_COLOR_LUT_DATA_FORMAT_RGB256WORDS     0x00000001L
#define VIDEO_COLOR_LUT_DATA_FORMAT_PRIVATEFORMAT   0x80000000L

/* Display policies */
#define DISPLAYPOLICY_AC    0x00000001L
#define DISPLAYPOLICY_DC    0x00000002L
#define DISPLAYPOLICY_BOTH  (DISPLAYPOLICY_AC | DISPLAYPOLICY_DC)

/* Console character attributes */
#ifndef _WINCON_
    #define FOREGROUND_BLUE             0x00000001L
    #define FOREGROUND_GREEN            0x00000002L
    #define FOREGROUND_RED              0x00000004L
    #define FOREGROUND_INTENSITY        0x00000008L
    #define BACKGROUND_BLUE             0x00000010L
    #define BACKGROUND_GREEN            0x00000020L
    #define BACKGROUND_RED              0x00000040L
    #define BACKGROUND_INTENSITY        0x00000080L
    #define COMMON_LVB_LEADING_BYTE     0x00000100L
    #define COMMON_LVB_TRAILING_BYTE    0x00000200L
    #define COMMON_LVB_GRID_HORIZONTAL  0x00000400L
    #define COMMON_LVB_GRID_LVERTICAL   0x00000800L
    #define COMMON_LVB_GRID_RVERTICAL   0x00001000L
    #define COMMON_LVB_REVERSE_VIDEO    0x00004000L
    #define COMMON_LVB_UNDERSCORE       0x00008000L
    #define COMMON_LVB_SBCSDBCS         0x00000300L
#endif

/* Console character types */
#ifndef _WINCON_
    #define CHAR_TYPE_SBCS      0
    #define CHAR_TYPE_LEADING   2
    #define CHAR_TYPE_TRAILING  3
#endif

/* Bitmap constants */
#ifndef _WINCON_
    #define BITMAP_BITS_BYTE_ALIGN  8
    #define BITMAP_BITS_WORD_ALIGN  16
    #define BITMAP_ARRAY_BYTE       3
    #define BITMAP_PLANES           1
    #define BITMAP_BITS_PIXEL       1
#endif

/* Alignments */
#ifndef _WINCON_
    #define BYTE_ALIGN  sizeof( UCHAR )
    #define WORD_ALIGN  sizeof( USHORT )
#endif

/* Screen buffer pointer macro */
#define SCREEN_BUFFER_POINTER( p1, p2, p3, p4 ) ((((p3) * (p2)) + (p1)) * (ULONG)(p4))

/* Full screen video device name */
#define DD_FULLSCREEN_VIDEO_DEVICE_NAME L"\\Device\\FSVideo"

/* Video reason codes */
#define VIDEO_REASON_NONE               0
#define VIDEO_REASON_POLICY1            1
#define VIDEO_REASON_POLICY2            2
#define VIDEO_REASON_POLICY3            3
#define VIDEO_REASON_POLICY4            4
#define VIDEO_REASON_LOCK               5
#define VIDEO_REASON_FAILED_ROTATION    5
#define VIDEO_REASON_ALLOCATION         6
#define VIDEO_REASON_SCRATCH            8
#define VIDEO_REASON_CONFIGURATION      9
#define VIDEO_MAX_REASON                VIDEO_REASON_CONFIGURATION

/* Video VDM */
typedef struct _VIDEO_VDM {
    HANDLE  ProcessHandle;
} VIDEO_VDM;
typedef VIDEO_VDM   *PVIDEO_VDM;

/* Video register VDM */
typedef struct _VIDEO_REGISTER_VDM {
    ULONG   MinimumStateSize;
} VIDEO_REGISTER_VDM;
typedef VIDEO_REGISTER_VDM  *PVIDEO_REGISTER_VDM;

/* Video monitor device */
typedef struct tagVIDEO_MONITOR_DEVICE {
    ULONG   flag;
    HANDLE  pdo;
    ULONG   HwID;
    BOOLEAN Internal;
} VIDEO_MONITOR_DEVICE;
typedef VIDEO_MONITOR_DEVICE    *PVIDEO_MONITOR_DEVICE;

/* Video monitor descriptor */
typedef struct tagVIDEO_MONITOR_DESCRIPTOR {
    ULONG   DescriptorSize;
    UCHAR   Descriptor[1];
} VIDEO_MONITOR_DESCRIPTOR;
typedef VIDEO_MONITOR_DESCRIPTOR    *PVIDEO_MONITOR_DESCRIPTOR;

/* Video WIN32K callbacks parameters types */
typedef enum _VIDEO_WIN32K_CALLBACKS_PARAMS_TYPE {
    VideoPowerNotifyCallout             = 1,
    VideoDisplaySwitchCallout           = 2,
    VideoEnumChildPdoNotifyCallout      = 3,
    VideoFindAdapterCallout             = 4,
    VideoWakeupCallout                  = 5,
    VideoChangeDisplaySettingsCallout   = 6,
    VideoPnpNotifyCallout               = 7,
    VideoDxgkDisplaySwitchCallout       = 8,
    VideoDxgkMonitorEventCallout        = 9,
    VideoDxgkFindAdapterTdrCallout      = 10
} VIDEO_WIN32K_CALLBACKS_PARAMS_TYPE;

/* DirectX WIN32K parameter data */
typedef struct _DXGK_WIN32K_PARAM_DATA {
    PVOID   PathsArray;
    PVOID   ModesArray;
    ULONG   NumPathArrayElements;
    ULONG   NumModeArrayElements;
    ULONG   SDCFlags;
} DXGK_WIN32K_PARAM_DATA;
typedef DXGK_WIN32K_PARAM_DATA  *PDXGK_WIN32K_PARAM_DATA;

/* Video WIN32K callbacks parameters */
typedef struct _VIDEO_WIN32K_CALLBACKS_PARAMS {
    VIDEO_WIN32K_CALLBACKS_PARAMS_TYPE  CalloutType;
    PVOID                               PhysDisp;
    ULONG_PTR                           Param;
    LONG                                Status;
} VIDEO_WIN32K_CALLBACKS_PARAMS;
typedef VIDEO_WIN32K_CALLBACKS_PARAMS   *PVIDEO_WIN32K_CALLBACKS_PARAMS;

/* Video WIN32K callout */
typedef VOID (NTAPI *PVIDEO_WIN32K_CALLOUT)( PVOID );

/* Video WIN32K callbacks */
typedef struct _VIDEO_WIN32K_CALLBACKS {
    PVOID                   PhysDisp;
    PVIDEO_WIN32K_CALLOUT   Callout;
    ULONG                   bACPI;
    HANDLE                  pPhysDeviceObject;
    ULONG                   DualviewFlags;
} VIDEO_WIN32K_CALLBACKS;
typedef VIDEO_WIN32K_CALLBACKS  *PVIDEO_WIN32K_CALLBACKS;

/* Video device session status */
typedef struct _VIDEO_DEVICE_SESSION_STATUS {
    ULONG   bEnable;
    ULONG   bSuccess;
} VIDEO_DEVICE_SESSION_STATUS;
typedef VIDEO_DEVICE_SESSION_STATUS *PVIDEO_DEVICE_SESSION_STATUS;

/* Video hardware state header */
typedef struct _VIDEO_HARDWARE_STATE_HEADER {
    ULONG   Length;
    UCHAR   PortValue[0x30];
    ULONG   AttribIndexDataState;
    ULONG   BasicSequencerOffset;
    ULONG   BasicCrtContOffset;
    ULONG   BasicGraphContOffset;
    ULONG   BasicAttribContOffset;
    ULONG   BasicDacOffset;
    ULONG   BasicLatchesOffset;
    ULONG   ExtendedSequencerOffset;
    ULONG   ExtendedCrtContOffset;
    ULONG   ExtendedGraphContOffset;
    ULONG   ExtendedAttribContOffset;
    ULONG   ExtendedDacOffset;
    ULONG   ExtendedValidatorStateOffset;
    ULONG   ExtendedMiscDataOffset;
    ULONG   PlaneLength;
    ULONG   Plane1Offset;
    ULONG   Plane2Offset;
    ULONG   Plane3Offset;
    ULONG   Plane4Offset;
    ULONG   VGAStateFlags;
    ULONG   DIBOffset;
    ULONG   DIBBitsPerPixel;
    ULONG   DIBXResolution;
    ULONG   DIBYResolution;
    ULONG   DIBXlatOffset;
    ULONG   DIBXlatLength;
    ULONG   VesaInfoOffset;
    PVOID   FrameBufferData;
} VIDEO_HARDWARE_STATE_HEADER;
typedef VIDEO_HARDWARE_STATE_HEADER *PVIDEO_HARDWARE_STATE_HEADER;

/* Video hardware state */
typedef struct _VIDEO_HARDWARE_STATE {
    PVIDEO_HARDWARE_STATE_HEADER    StateHeader;
    ULONG                           StateLength;
} VIDEO_HARDWARE_STATE;
typedef VIDEO_HARDWARE_STATE    *PVIDEO_HARDWARE_STATE;

/* Number of video modes */
typedef struct _VIDEO_NUM_MODES {
    ULONG   NumModes;
    ULONG   ModeInformationLength;
} VIDEO_NUM_MODES;
typedef VIDEO_NUM_MODES *PVIDEO_NUM_MODES;

/* Video mode */
typedef struct _VIDEO_MODE {
    ULONG   RequestedMode;
} VIDEO_MODE;
typedef VIDEO_MODE  *PVIDEO_MODE;

/* Video mode information */
typedef struct _VIDEO_MODE_INFORMATION {
    ULONG   Length;
    ULONG   ModeIndex;
    ULONG   VisScreenWidth;
    ULONG   VisScreenHeight;
    ULONG   ScreenStride;
    ULONG   NumberOfPlanes;
    ULONG   BitsPerPlane;
    ULONG   Frequency;
    ULONG   XMillimeter;
    ULONG   YMillimeter;
    ULONG   NumberRedBits;
    ULONG   NumberGreenBits;
    ULONG   NumberBlueBits;
    ULONG   RedMask;
    ULONG   GreenMask;
    ULONG   BlueMask;
    ULONG   AttributeFlags;
    ULONG   VideoMemoryBitmapWidth;
    ULONG   VideoMemoryBitmapHeight;
    ULONG   DriverSpecificAttributeFlags;
} VIDEO_MODE_INFORMATION;
typedef VIDEO_MODE_INFORMATION  *PVIDEO_MODE_INFORMATION;

/* Video load font information */
typedef struct _VIDEO_LOAD_FONT_INFORMATION {
    USHORT  WidthInPixels;
    USHORT  HeightInPixels;
    ULONG   FontSize;
    UCHAR   Font[1];
} VIDEO_LOAD_FONT_INFORMATION;
typedef VIDEO_LOAD_FONT_INFORMATION *PVIDEO_LOAD_FONT_INFORMATION;

/* Video palette data */
typedef struct _VIDEO_PALETTE_DATA {
    USHORT  NumEntries;
    USHORT  FirstEntry;
    USHORT  Colors[1];
} VIDEO_PALETTE_DATA;
typedef VIDEO_PALETTE_DATA  *PVIDEO_PALETTE_DATA;

/* Video color register data */
typedef struct _VIDEO_CLUTDATA {
    UCHAR   Red;
    UCHAR   Green;
    UCHAR   Blue;
    UCHAR   Unused;
} VIDEO_CLUTDATA;
typedef VIDEO_CLUTDATA  *PVIDEO_CLUTDATA;

/* Video color registers */
typedef struct {
    USHORT  NumEntries;
    USHORT  FirstEntry;
    union {
        VIDEO_CLUTDATA  RgbArray;
        ULONG           RgbLong;
    } LookupTable[1];
} VIDEO_CLUT;
typedef VIDEO_CLUT  *PVIDEO_CLUT;

/* Video cursor position */
typedef struct _VIDEO_CURSOR_POSITION {
    SHORT   Column;
    SHORT   Row;
} VIDEO_CURSOR_POSITION;
typedef VIDEO_CURSOR_POSITION   *PVIDEO_CURSOR_POSITION;

/* Video cursor attributes */
typedef struct _VIDEO_CURSOR_ATTRIBUTES {
    USHORT  Width;
    USHORT  Height;
    SHORT   Column;
    SHORT   Row;
    UCHAR   Rate;
    UCHAR   Enable;
} VIDEO_CURSOR_ATTRIBUTES;
typedef VIDEO_CURSOR_ATTRIBUTES *PVIDEO_CURSOR_ATTRIBUTES;

/* Video pointer position */
typedef struct _VIDEO_POINTER_POSITION {
    SHORT   Column;
    SHORT   Row;
} VIDEO_POINTER_POSITION;
typedef VIDEO_POINTER_POSITION  *PVIDEO_POINTER_POSITION;

/* Video pointer attributes */
typedef struct _VIDEO_POINTER_ATTRIBUTES {
    ULONG   Flags;
    ULONG   Width;
    ULONG   Height;
    ULONG   WidthInBytes;
    ULONG   Enable;
    SHORT   Column;
    SHORT   Row;
    UCHAR   Pixels[1];
} VIDEO_POINTER_ATTRIBUTES;
typedef VIDEO_POINTER_ATTRIBUTES    *PVIDEO_POINTER_ATTRIBUTES;

/* Video pointer capabilities */
typedef struct _VIDEO_POINTER_CAPABILITIES {
    ULONG   Flags;
    ULONG   MaxWidth;
    ULONG   MaxHeight;
    ULONG   HWPtrBitmapStart;
    ULONG   HWPtrBitmapEnd;
} VIDEO_POINTER_CAPABILITIES;
typedef VIDEO_POINTER_CAPABILITIES  *PVIDEO_POINTER_CAPABILITIES;

/* Video bank select */
typedef struct _VIDEO_BANK_SELECT {
    ULONG   Length;
    ULONG   Size;
    ULONG   BankingFlags;
    ULONG   BankingType;
    ULONG   PlanarHCBankingType;
    ULONG   BitmapWidthInBytes;
    ULONG   BitmapSize;
    ULONG   Granularity;
    ULONG   PlanarHCGranularity;
    ULONG   CodeOffset;
    ULONG   PlanarHCBankCodeOffset;
    ULONG   PlanarHCEnableCodeOffset;
    ULONG   PlanarHCDisableCodeOffset;
} VIDEO_BANK_SELECT;
typedef VIDEO_BANK_SELECT   *PVIDEO_BANK_SELECT;

/* Video bank types */
typedef enum _VIDEO_BANK_TYPE {
    VideoNotBanked      = 0,
    VideoBanked1RW      = 1,
    VideoBanked1R1W     = 2,
    VideoBanked2RW      = 3,
    NumVideoBankTypes   = 4
} VIDEO_BANK_TYPE;
typedef VIDEO_BANK_TYPE *PVIDEO_BANK_TYPE;

/* Video memory */
typedef struct _VIDEO_MEMORY {
    PVOID   RequestedVirtualAddress;
} VIDEO_MEMORY;
typedef VIDEO_MEMORY    *PVIDEO_MEMORY;

/* Video share memory */
typedef struct _VIDEO_SHARE_MEMORY {
    HANDLE  ProcessHandle;
    ULONG   ViewOffset;
    ULONG   ViewSize;
    PVOID   RequestedVirtualAddress;
} VIDEO_SHARE_MEMORY;
typedef VIDEO_SHARE_MEMORY  *PVIDEO_SHARE_MEMORY;

/* Video share memory information */
typedef struct _VIDEO_SHARE_MEMORY_INFORMATION {
    ULONG   SharedViewOffset;
    ULONG   SharedViewSize;
    PVOID   VirtualAddress;
} VIDEO_SHARE_MEMORY_INFORMATION;
typedef VIDEO_SHARE_MEMORY_INFORMATION  *PVIDEO_SHARE_MEMORY_INFORMATION;

/* Video memory information */
typedef struct _VIDEO_MEMORY_INFORMATION {
    PVOID   VideoRamBase;
    ULONG   VideoRamLength;
    PVOID   FrameBufferBase;
    ULONG   FrameBufferLength;
} VIDEO_MEMORY_INFORMATION;
typedef VIDEO_MEMORY_INFORMATION    *PVIDEO_MEMORY_INFORMATION;

/* Video public access ranges */
typedef struct _VIDEO_PUBLIC_ACCESS_RANGES {
    ULONG   InIoSpace;
    ULONG   MappedInIoSpace;
    PVOID   VirtualAddress;
} VIDEO_PUBLIC_ACCESS_RANGES;
typedef VIDEO_PUBLIC_ACCESS_RANGES  *PVIDEO_PUBLIC_ACCESS_RANGES;

/* Video color capabilities */
typedef struct _VIDEO_COLOR_CAPABILITIES {
    ULONG   Length;
    ULONG   AttributeFlags;
    LONG    RedPhosphoreDecay;
    LONG    GreenPhosphoreDecay;
    LONG    BluePhosphoreDecay;
    LONG    WhiteChromaticity_x;
    LONG    WhiteChromaticity_y;
    LONG    WhiteChromaticity_Y;
    LONG    RedChromaticity_x;
    LONG    RedChromaticity_y;
    LONG    GreenChromaticity_x;
    LONG    GreenChromaticity_y;
    LONG    BlueChromaticity_x;
    LONG    BlueChromaticity_y;
    LONG    WhiteGamma;
    LONG    RedGamma;
    LONG    GreenGamma;
    LONG    BlueGamma;
} VIDEO_COLOR_CAPABILITIES;
typedef VIDEO_COLOR_CAPABILITIES    *PVIDEO_COLOR_CAPABILITIES;

/* Video power states */
typedef enum _VIDEO_POWER_STATE {
    VideoPowerUnspecified   = 0,
    VideoPowerOn            = 1,
    VideoPowerStandBy       = 2,
    VideoPowerSuspend       = 3,
    VideoPowerOff           = 4,
    VideoPowerHibernate     = 5,
    VideoPowerShutdown      = 6,
    VideoPowerMaximum       = 7
} VIDEO_POWER_STATE;
typedef VIDEO_POWER_STATE   *PVIDEO_POWER_STATE;

/* Video power management */
typedef struct _VIDEO_POWER_MANAGEMENT {
    ULONG   Length;
    ULONG   DPMSVersion;
    ULONG   PowerState;
} VIDEO_POWER_MANAGEMENT;
typedef VIDEO_POWER_MANAGEMENT  *PVIDEO_POWER_MANAGEMENT;

/* Video color LUT data */
typedef struct _VIDEO_COLOR_LUT_DATA {
    ULONG   Length;
    ULONG   LutDataFormat;
    UCHAR   LutData[1];
} VIDEO_COLOR_LUT_DATA;
typedef VIDEO_COLOR_LUT_DATA    *PVIDEO_COLOR_LUT_DATA;

/* Video LUT RGB 256 words */
typedef struct _VIDEO_LUT_RGB256WORDS {
    USHORT  Red[256];
    USHORT  Green[256];
    USHORT  Blue[256];
} VIDEO_LUT_RGB256WORDS;
typedef VIDEO_LUT_RGB256WORDS   *PVIDEO_LUT_RGB256WORDS;

/* Bank position */
typedef struct _BANK_POSITION {
    ULONG   ReadBankPosition;
    ULONG   WriteBankPosition;
} BANK_POSITION;
typedef BANK_POSITION   *PBANK_POSITION;

/* Display brightness */
typedef struct _DISPLAY_BRIGHTNESS {
    UCHAR   ucDisplayPolicy;
    UCHAR   ucACBrightness;
    UCHAR   ucDCBrightness;
} DISPLAY_BRIGHTNESS;
typedef DISPLAY_BRIGHTNESS  *PDISPLAY_BRIGHTNESS;

/* Video brightness policy */
typedef struct {
    BOOLEAN DefaultToBiosPolicy;
    UCHAR   LevelCount;
    struct {
        UCHAR   BatteryLevel;
        UCHAR   Brightness;
    } Level[1];
} VIDEO_BRIGHTNESS_POLICY;
typedef VIDEO_BRIGHTNESS_POLICY *PVIDEO_BRIGHTNESS_POLICY;

/* Coordinate for use with the console */
#ifndef _WINCON_
typedef struct _COORD {
    SHORT   X;
    SHORT   Y;
} COORD;
typedef COORD   *PCOORD;
#endif

/* Console character information */
#ifndef _WINCON_
typedef struct _CHAR_INFO {
    union {
        WCHAR   UnicodeChar;
        CHAR    AsciiChar;
    } Char;
    USHORT  Attributes;
} CHAR_INFO;
typedef CHAR_INFO   *PCHAR_INFO;
#endif

/* Screen information */
typedef struct _FSCNTL_SCREEN_INFO {
    COORD   Position;
    COORD   ScreenSize;
    ULONG   nNumberOfChars;
} FSCNTL_SCREEN_INFO;
typedef FSCNTL_SCREEN_INFO  *PFSCNTL_SCREEN_INFO;

/* Font image information */
typedef struct _FONT_IMAGE_INFO {
    COORD   FontSize;
    PUCHAR  ImageBits;
} FONT_IMAGE_INFO;
typedef FONT_IMAGE_INFO *PFONT_IMAGE_INFO;

/* Character image information */
typedef struct _CHAR_IMAGE_INFO {
    CHAR_INFO       CharInfo;
    FONT_IMAGE_INFO FontImageInfo;
} CHAR_IMAGE_INFO;
typedef CHAR_IMAGE_INFO *PCHAR_IMAGE_INFO;

/* VGA character */
typedef struct _VGA_CHAR {
    CHAR    Char;
    CHAR    Attributes;
} VGA_CHAR;
typedef VGA_CHAR    *PVGA_CHAR;

/* IOCTL_FSVIDEO_COPY_FRAME_BUFFER parameters */
typedef struct _FSVIDEO_COPY_FRAME_BUFFER {
    FSCNTL_SCREEN_INFO  SrcScreen;
    FSCNTL_SCREEN_INFO  DestScreen;
} FSVIDEO_COPY_FRAME_BUFFER;
typedef FSVIDEO_COPY_FRAME_BUFFER   *PFSVIDEO_COPY_FRAME_BUFFER;

/* IOCTL_FSVIDEO_WRITE_TO_FRAME_BUFFER parameters */
typedef struct _FSVIDEO_WRITE_TO_FRAME_BUFFER {
    PCHAR_IMAGE_INFO    SrcBuffer;
    FSCNTL_SCREEN_INFO  DestScreen;
} FSVIDEO_WRITE_TO_FRAME_BUFFER;
typedef FSVIDEO_WRITE_TO_FRAME_BUFFER   *PFSVIDEO_WRITE_TO_FRAME_BUFFER;

/* IOCTL_FSVIDEO_REVERSE_MOUSE_POINTER parameters */
typedef struct _FSVIDEO_REVERSE_MOUSE_POINTER {
    FSCNTL_SCREEN_INFO  Screen;
    ULONG               dwType;
} FSVIDEO_REVERSE_MOUSE_POINTER;
typedef FSVIDEO_REVERSE_MOUSE_POINTER   *PFSVIDEO_REVERSE_MOUSE_POINTER;

/* Full screen video mode information */
typedef struct _FSVIDEO_MODE_INFORMATION {
    VIDEO_MODE_INFORMATION      VideoMode;
    VIDEO_MEMORY_INFORMATION    VideoMemory;
} FSVIDEO_MODE_INFORMATION;
typedef FSVIDEO_MODE_INFORMATION    *PFSVIDEO_MODE_INFORMATION;

/* Full screen video screen information */
typedef struct _FSVIDEO_SCREEN_INFORMATION {
    COORD   ScreenSize;
    COORD   FontSize;
} FSVIDEO_SCREEN_INFORMATION;
typedef FSVIDEO_SCREEN_INFORMATION  *PFSVIDEO_SCREEN_INFORMATION;

/* Full screen video cursor position */
typedef struct _FSVIDEO_CURSOR_POSITION {
    VIDEO_CURSOR_POSITION   Coord;
    ULONG                   dwType;
} FSVIDEO_CURSOR_POSITION;
typedef FSVIDEO_CURSOR_POSITION *PFSVIDEO_CURSOR_POSITION;

/* Event */
typedef struct _ENG_EVENT {
    PVOID   pKEvent;
    ULONG   fFlags;
} ENG_EVENT;
typedef ENG_EVENT   *PENG_EVENT;
typedef ENG_EVENT   *PEVENT;

/* Video performance counter */
typedef struct _VIDEO_PERFORMANCE_COUNTER {
    UINT64  NbOfAllocationEvicted[VIDEO_MAX_REASON + 1];
    UINT64  NbOfAllocationMarked[VIDEO_MAX_REASON + 1];
    UINT64  NbOfAllocationRestored[VIDEO_MAX_REASON + 1];
    UINT64  KBytesEvicted[VIDEO_MAX_REASON + 1];
    UINT64  KBytesMarked[VIDEO_MAX_REASON + 1];
    UINT64  KBytesRestored[VIDEO_MAX_REASON + 1];
    UINT64  NbProcessCommited;
    UINT64  NbAllocationCommited;
    UINT64  NbAllocationMarked;
    UINT64  KBytesAllocated;
    UINT64  KBytesAvailable;
    UINT64  KBytesCurMarked;
    UINT64  Reference;
    UINT64  Unreference;
    UINT64  TrueReference;
    UINT64  NbOfPageIn;
    UINT64  KBytesPageIn;
    UINT64  NbOfPageOut;
    UINT64  KBytesPageOut;
    UINT64  NbOfRotateOut;
    UINT64  KBytesRotateOut;
} VIDEO_PERFORMANCE_COUNTER;
typedef VIDEO_PERFORMANCE_COUNTER   *PVIDEO_PERFORMANCE_COUNTER;

/* Video query performance counter */
typedef struct _VIDEO_QUERY_PERFORMANCE_COUNTER {
    ULONG                       BufferSize;
    PVIDEO_PERFORMANCE_COUNTER  Buffer;
} VIDEO_QUERY_PERFORMANCE_COUNTER;
typedef VIDEO_QUERY_PERFORMANCE_COUNTER *PVIDEO_QUERY_PERFORMANCE_COUNTER;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTDDVDEO_ */
