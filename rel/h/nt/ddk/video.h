/*
 *  video.h     Video port functions
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

#ifndef __VIDEO_H__
#define __VIDEO_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <videoagp.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Macro to specify video port */
#define VIDEOPORT_API   __declspec(dllimport)

/* Primitive data types */
typedef LONG        VP_STATUS;
typedef VP_STATUS   *PVP_STATUS;
typedef ULONG       DMA_EVENT_FLAGS;

/* Video range constants */
#define VIDEO_RANGE_PASSIVE_DECODE  0x01
#define VIDEO_RANGE_10_BIT_DECODE   0x02

/* DMA event flags */
#define SET_USER_EVENT      0x01
#define SET_DISPLAY_EVENT   0x02

/* Event types */
#define EVENT_TYPE_MASK         1
#define SYNCHRONIZATION_EVENT   0
#define NOTIFICATION_EVENT      1

/* Initial event states */
#define INITIAL_EVENT_STATE_MASK    2
#define INITIAL_EVENT_NOT_SIGNALED  0
#define INITIAL_EVENT_SIGNALED      2

/* Device identifiers */
#define DISPLAY_ADAPTER_HW_ID   0xFFFFFFFFL
#define VIDEO_INVALID_CHILD_ID  0xFFFFFFFFL

/* Video port AGP interface version numbers */
#define VIDEO_PORT_AGP_INTERFACE_VERSION_1  1
#define VIDEO_PORT_AGP_INTERFACE_VERSION_2  2

/* Video port I2C interface version numbers */
#define VIDEO_PORT_I2C_INTERFACE_VERSION_1  1
#define VIDEO_PORT_I2C_INTERFACE_VERSION_2  2

/* Video port interrupt 10 interface version number */
#define VIDEO_PORT_INT10_INTERFACE_VERSION_1    1

/* Video port WC memory protection interface version number */
#define VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE_VERSION_1   1

/* Video memory flags */
#define VIDEO_MEMORY_SPACE_MEMORY       0x00
#define VIDEO_MEMORY_SPACE_IO           0x01
#define VIDEO_MEMORY_SPACE_USER_MODE    0x02
#define VIDEO_MEMORY_SPACE_DENSE        0x04
#define VIDEO_MEMORY_SPACE_P6CACHE      0x08

/* Video enumeration status codes */
#define VIDEO_ENUM_MORE_DEVICES     ERROR_CONTINUE
#define VIDEO_ENUM_NO_MORE_DEVICES  ERROR_NO_MORE_DEVICES
#define VIDEO_ENUM_INVALID_DEVICE   ERROR_INVALID_NAME

/* VGA status flags */
#define DEVICE_VGA_ENABLED  1

/* VideoPortCheckForDeviceExistence() flags */
#define CDE_USE_SUBSYSTEM_IDS   0x00000001L
#define CDE_USE_REVISION        0x00000002L

/* Video debug report maximum size */
#define VIDEO_DEBUG_REPORT_MAX_SIZE 0x8000

/* Video port debug report interface version number */
#define VIDEO_PORT_DEBUG_REPORT_INTERFACE_VERSION_1 1

/* Opaque data types */
typedef struct _VIDEO_PORT_SPIN_LOCK    *PSPIN_LOCK;
typedef struct __DMA_PARAMETERS         *PDMA;
typedef struct __VP_DMA_ADAPTER         *PVP_DMA_ADAPTER;
typedef struct _VIDEO_DEBUG_REPORT      *PVIDEO_DEBUG_REPORT;

/* Video synchronize priorities */
typedef enum VIDEO_SYNCHRONIZE_PRIORITY {
    VpLowPriority       = 0,
    VpMediumPriority    = 1,
    VpHighPriority      = 2
} VIDEO_SYNCHRONIZE_PRIORITY;
typedef VIDEO_SYNCHRONIZE_PRIORITY  *PVIDEO_SYNCHRONIZE_PRIORITY;

/* Video device data types */
typedef enum _VIDEO_DEVICE_DATA_TYPE {
    VpMachineData       = 0,
    VpCmosData          = 1,
    VpBusData           = 2,
    VpControllerData    = 3,
    VpMonitorData       = 4
} VIDEO_DEVICE_DATA_TYPE;
typedef VIDEO_DEVICE_DATA_TYPE  *PVIDEO_DEVICE_DATA_TYPE;

/* Video port pool types */
typedef enum _VP_POOL_TYPE {
    VpNonPagedPool              = 0,
    VpPagedPool                 = 1,
    VpNonPagedPoolCacheAligned  = 4,
    VpPagedPoolCacheAligned     = 5
} VP_POOL_TYPE;
typedef VP_POOL_TYPE    *PVP_POOL_TYPE;

/* Video hardware configuration data */
typedef struct _VIDEO_HARDWARE_CONFIGURATION_DATA {
    INTERFACE_TYPE  InterfaceType;
    ULONG           BusNumber;
    USHORT          Version;
    USHORT          Revision;
    USHORT          Irql;
    USHORT          Vector;
    ULONG           ControlBase;
    ULONG           ControlSize;
    ULONG           CursorBase;
    ULONG           FrameBase;
    ULONG           FrameSize;
} VIDEO_HARDWARE_CONFIGURATION_DATA;
typedef VIDEO_HARDWARE_CONFIGURATION_DATA   *PVIDEO_HARDWARE_CONFIGURATION_DATA;

/* Video x86 BIOS arguments */
typedef struct _VIDEO_X86_BIOS_ARGUMENTS {
    ULONG   Eax;
    ULONG   Ebx;
    ULONG   Ecx;
    ULONG   Edx;
    ULONG   Esi;
    ULONG   Edi;
    ULONG   Ebp;
} VIDEO_X86_BIOS_ARGUMENTS;
typedef VIDEO_X86_BIOS_ARGUMENTS    *PVIDEO_X86_BIOS_ARGUMENTS;

/* Interrupt 10 BIOS arguments */
typedef struct _INT10_BIOS_ARGUMENTS {
    ULONG   Eax;
    ULONG   Ebx;
    ULONG   Ecx;
    ULONG   Edx;
    ULONG   Esi;
    ULONG   Edi;
    ULONG   Ebp;
    USHORT  SegDs;
    USHORT  SegEs;
} INT10_BIOS_ARGUMENTS;
typedef INT10_BIOS_ARGUMENTS    *PINT10_BIOS_ARGUMENTS;

/* Video debug levels */
typedef enum VIDEO_DEBUG_LEVEL {
    Error   = 0,
    Warn    = 1,
    Trace   = 2,
    Info    = 3
} VIDEO_DEBUG_LEVEL;
typedef VIDEO_DEBUG_LEVEL   *PVIDEO_DEBUG_LEVEL;

/* Driver I/O port callbacks */
typedef VP_STATUS (NTAPI *PDRIVER_IO_PORT_UCHAR)( ULONG_PTR, ULONG, UCHAR, PUCHAR );
typedef VP_STATUS (NTAPI *PDRIVER_IO_PORT_UCHAR_STRING)( ULONG_PTR, ULONG, UCHAR, PUCHAR, ULONG );
typedef VP_STATUS (NTAPI *PDRIVER_IO_PORT_USHORT)( ULONG_PTR, ULONG, UCHAR, PUSHORT );
typedef VP_STATUS (NTAPI *PDRIVER_IO_PORT_USHORT_STRING)( ULONG_PTR, ULONG, UCHAR, PUSHORT, ULONG );
typedef VP_STATUS (NTAPI *PDRIVER_IO_PORT_ULONG)( ULONG_PTR, ULONG, UCHAR, PULONG );
typedef VP_STATUS (NTAPI *PDRIVER_IO_PORT_ULONG_STRING)( ULONG_PTR, ULONG, UCHAR, PULONG, ULONG );

/* Status block */
typedef struct _STATUS_BLOCK {
    union {
        VP_STATUS   Status;
        PVOID       Pointer;
    };
    ULONG_PTR   Information;
} STATUS_BLOCK;
typedef STATUS_BLOCK    *PSTATUS_BLOCK;

/* Video request packet */
typedef struct _VIDEO_REQUEST_PACKET {
    ULONG           IoControlCode;
    PSTATUS_BLOCK   StatusBlock;
    PVOID           InputBuffer;
    ULONG           InputBufferLength;
    PVOID           OutputBuffer;
    ULONG           OutputBufferLength;
} VIDEO_REQUEST_PACKET;
typedef VIDEO_REQUEST_PACKET    *PVIDEO_REQUEST_PACKET;

/* Scatter/gather data */
typedef struct __VRB_SG {
    __int64 PhysicalAddress;
    ULONG   Length;
} VRB_SG;
typedef VRB_SG  *PVRB_SG;

/* Video port lock operations */
typedef enum _VP_LOCK_OPERATION {
    VpReadAccess    = 0,
    VpWriteAccess   = 1,
    VpModifyAccess  = 2
} VP_LOCK_OPERATION;

/* Video port device description */
typedef struct _VP_DEVICE_DESCRIPTION {
    BOOLEAN ScatterGather;
    BOOLEAN Dma32BitAddresses;
    BOOLEAN Dma64BitAddresses;
    ULONG   MaximumLength;
} VP_DEVICE_DESCRIPTION;
typedef VP_DEVICE_DESCRIPTION   *PVP_DEVICE_DESCRIPTION;

/* Video port scatter/gather element */
typedef struct _VP_SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS    Address;
    ULONG               Length;
    ULONG_PTR           Reserved;
} VP_SCATTER_GATHER_ELEMENT;
typedef VP_SCATTER_GATHER_ELEMENT   *PVP_SCATTER_GATHER_ELEMENT;

/* Video port scatter/gather list */
typedef struct _VP_SCATTER_GATHER_LIST {
    ULONG                       NumberOfElements;
    ULONG_PTR                   Reserved;
    VP_SCATTER_GATHER_ELEMENT   Elements[];
} VP_SCATTER_GATHER_LIST;
typedef VP_SCATTER_GATHER_LIST  *PVP_SCATTER_GATHER_LIST;

/* Video access range */
typedef struct _VIDEO_ACCESS_RANGE {
    PHYSICAL_ADDRESS    RangeStart;
    ULONG               RangeLength;
    UCHAR               RangeInIoSpace;
    UCHAR               RangeVisible;
    UCHAR               RangeShareable;
    UCHAR               RangePassive;
} VIDEO_ACCESS_RANGE;
typedef VIDEO_ACCESS_RANGE  *PVIDEO_ACCESS_RANGE;

/* Video port get procedure address callback */
typedef PVOID (NTAPI *PVIDEO_PORT_GET_PROC_ADDRESS)( PVOID, PUCHAR );

/* Video port configuration information */
typedef struct _VIDEO_PORT_CONFIG_INFO {
    ULONG                           Length;
    ULONG                           SystemIoBusNumber;
    INTERFACE_TYPE                  AdapterInterfaceType;
    ULONG                           BusInterruptLevel;
    ULONG                           BusInterruptVector;
    KINTERRUPT_MODE                 InterruptMode;
    ULONG                           NumEmulatorAccessEntries;
    PEMULATOR_ACCESS_ENTRY          EmulatorAccessEntries;
    ULONG_PTR                       EmulatorAccessEntriesContext;
    PHYSICAL_ADDRESS                VdmPhysicalVideoMemoryAddress;
    ULONG                           VdmPhysicalVideoMemoryLength;
    ULONG                           HardwareStateSize;
    ULONG                           DmaChannel;
    ULONG                           DmaPort;
    UCHAR                           DmaShareable;
    UCHAR                           InterruptShareable;
    BOOLEAN                         Master;
    DMA_WIDTH                       DmaWidth;
    DMA_SPEED                       DmaSpeed;
    BOOLEAN                         bMapBuffers;
    BOOLEAN                         NeedPhysicalAddresses;
    BOOLEAN                         DemandMode;
    ULONG                           MaximumTransferLength;
    ULONG                           NumberOfPhysicalBreaks;
    BOOLEAN                         ScatterGather;
    ULONG                           MaximumScatterGatherChunkSize;
    PVIDEO_PORT_GET_PROC_ADDRESS    VideoPortGetProcAddress;
    PWSTR                           DriverRegistryPath;
    ULONGLONG                       SystemMemorySize;
} VIDEO_PORT_CONFIG_INFO;
typedef VIDEO_PORT_CONFIG_INFO  *PVIDEO_PORT_CONFIG_INFO;

/* Compatibility structure sizes */
#define SIZE_OF_NT4_VIDEO_PORT_CONFIG_INFO  FIELD_OFFSET(VIDEO_PORT_CONFIG_INFO, Master)
#define SIZE_OF_WXP_VIDEO_PORT_CONFIG_INFO  sizeof( VIDEO_PORT_CONFIG_INFO )

/* Hardware DMA return values */
typedef enum _HW_DMA_RETURN {
    DmaAsyncReturn  = 0,
    DmaSyncReturn   = 1
} HW_DMA_RETURN;
typedef HW_DMA_RETURN   *PHW_DMA_RETURN;

/* DMA flags */
typedef enum {
    VideoPortUnlockAfterDma     = 1,
    VideoPortKeepPagesLocked    = 2,
    VideoPortDmaInitOnly        = 3
} DMA_FLAGS;

/* Video child enumeration information */
typedef struct _VIDEO_CHILD_ENUM_INFO {
    ULONG   Size;
    ULONG   ChildDescriptorSize;
    ULONG   ChildIndex;
    ULONG   ACPIHwId;
    PVOID   ChildHwDeviceExtension;
} VIDEO_CHILD_ENUM_INFO;
typedef VIDEO_CHILD_ENUM_INFO   *PVIDEO_CHILD_ENUM_INFO;

/* Video child types */
typedef enum {
    Monitor         = 1,
    NonPrimaryChip  = 2,
    VideoChip       = 3,
    Other           = 4
} VIDEO_CHILD_TYPE;
typedef VIDEO_CHILD_TYPE    *PVIDEO_CHILD_TYPE;

/* Video child state */
typedef struct _VIDEO_CHILD_STATE {
    ULONG   Id;
    ULONG   State;
} VIDEO_CHILD_STATE;
typedef VIDEO_CHILD_STATE   *PVIDEO_CHILD_STATE;

/* Video child state configuration */
typedef struct _VIDEO_CHILD_STATE_CONFIGURATION {
    ULONG               Count;
    VIDEO_CHILD_STATE   ChildStateArray[ANYSIZE_ARRAY];
} VIDEO_CHILD_STATE_CONFIGURATION;
typedef VIDEO_CHILD_STATE_CONFIGURATION *PVIDEO_CHILD_STATE_CONFIGURATION;

/* Query interface */
typedef struct _QUERY_INTERFACE {
    CONST GUID  *InterfaceType;
    USHORT      Size;
    USHORT      Version;
    PINTERFACE  Interface;
    PVOID       InterfaceSpecificData;
} QUERY_INTERFACE;
typedef QUERY_INTERFACE *PQUERY_INTERFACE;

/* Video hardware callbacks */
typedef VP_STATUS (NTAPI *PVIDEO_HW_FIND_ADAPTER)( PVOID, PVOID, PWSTR, PVIDEO_PORT_CONFIG_INFO, PUCHAR );
typedef BOOLEAN (NTAPI *PVIDEO_HW_INITIALIZE)( PVOID );
typedef BOOLEAN (NTAPI *PVIDEO_HW_INTERRUPT)( PVOID );
typedef VOID (NTAPI *PVIDEO_HW_LEGACYRESOURCES)( ULONG, ULONG, PVIDEO_ACCESS_RANGE *, PULONG );
typedef HW_DMA_RETURN (NTAPI *PVIDEO_HW_START_DMA)( PVOID, PDMA );
typedef VOID (NTAPI *PEXECUTE_DMA)( PVOID, PVP_DMA_ADAPTER, PVP_SCATTER_GATHER_LIST, PVOID );
typedef VP_STATUS (NTAPI *PVIDEO_HW_GET_CHILD_DESCRIPTOR)( PVOID, PVIDEO_CHILD_ENUM_INFO, PVIDEO_CHILD_TYPE, PUCHAR, PULONG, PULONG );
typedef VP_STATUS (NTAPI *PVIDEO_HW_POWER_SET)( PVOID, ULONG, PVIDEO_POWER_MANAGEMENT );
typedef VP_STATUS (NTAPI *PVIDEO_HW_POWER_GET)( PVOID, ULONG, PVIDEO_POWER_MANAGEMENT );
typedef VP_STATUS (NTAPI *PVIDEO_HW_QUERY_INTERFACE)( PVOID, PQUERY_INTERFACE );
typedef VP_STATUS (NTAPI *PVIDEO_HW_CHILD_CALLBACK)( PVOID, PVOID );
typedef BOOLEAN (NTAPI *PVIDEO_HW_START_IO)( PVOID, PVIDEO_REQUEST_PACKET );
typedef BOOLEAN (NTAPI *PVIDEO_HW_RESET_HW)( PVOID, ULONG, ULONG );
typedef VOID (NTAPI *PVIDEO_HW_TIMER)( PVOID );

/* Video hardware initialization data */
typedef struct _VIDEO_HW_INITIALIZATION_DATA {
    ULONG                           HwInitDataSize;
    INTERFACE_TYPE                  AdapterInterfaceType;
    PVIDEO_HW_FIND_ADAPTER          HwFindAdapter;
    PVIDEO_HW_INITIALIZE            HwInitialize;
    PVIDEO_HW_INTERRUPT             HwInterrupt;
    PVIDEO_HW_START_IO              HwStartIO;
    ULONG                           HwDeviceExtensionSize;
    ULONG                           StartingDeviceNumber;
    PVIDEO_HW_RESET_HW              HwResetHw;
    PVIDEO_HW_TIMER                 HwTimer;
    PVIDEO_HW_START_DMA             HwStartDma;
    PVIDEO_HW_POWER_SET             HwSetPowerState;
    PVIDEO_HW_POWER_GET             HwGetPowerState;
    PVIDEO_HW_GET_CHILD_DESCRIPTOR  HwGetVideoChildDescriptor;
    PVIDEO_HW_QUERY_INTERFACE       HwQueryInterface;
    ULONG                           HwChildDeviceExtensionSize;
    PVIDEO_ACCESS_RANGE             HwLegacyResourceList;
    ULONG                           HwLegacyResourceCount;
    PVIDEO_HW_LEGACYRESOURCES       HwGetLegacyResources;
    BOOLEAN                         AllowEarlyEnumeration;
    ULONG                           Reserved;
} VIDEO_HW_INITIALIZATION_DATA;
typedef VIDEO_HW_INITIALIZATION_DATA    *PVIDEO_HW_INITIALIZATION_DATA;

/* Compatibility structure sizes */
#define SIZE_OF_NT4_VIDEO_HW_INITIALIZATION_DATA    FIELD_OFFSET( VIDEO_HW_INITIALIZATION_DATA, HwStartDma )
#define SIZE_OF_W2K_VIDEO_HW_INITIALIZATION_DATA    FIELD_OFFSET( VIDEO_HW_INITIALIZATION_DATA, Reserved )
#define SIZE_OF_WXP_VIDEO_HW_INITIALIZATION_DATA    (SIZE_OF_W2K_VIDEO_HW_INITIALIZATION_DATA + sizeof( ULONG ))

/* I2C callbacks */
typedef VOID (NTAPI *PVIDEO_WRITE_CLOCK_LINE)( PVOID, UCHAR );
typedef VOID (NTAPI *PVIDEO_WRITE_DATA_LINE)( PVOID, UCHAR );
typedef BOOLEAN (NTAPI *PVIDEO_READ_CLOCK_LINE)( PVOID );
typedef BOOLEAN (NTAPI *PVIDEO_READ_DATA_LINE)( PVOID );
typedef VOID (NTAPI *PVIDEO_WAIT_VSYNC_ACTIVE)( PVOID );

/* I2C function table */
typedef struct _I2C_FNC_TABLE {
    ULONG                       Size;
    PVIDEO_WRITE_CLOCK_LINE     WriteClockLine;
    PVIDEO_WRITE_DATA_LINE      WriteDataLine;
    PVIDEO_READ_CLOCK_LINE      ReadClockLine;
    PVIDEO_READ_DATA_LINE       ReadDataLine;
    PVIDEO_WAIT_VSYNC_ACTIVE    WaitVsync;
    PVOID                       Reserved;
} I2C_FNC_TABLE;
typedef I2C_FNC_TABLE   *PI2C_FNC_TABLE;

/* I2C callbacks */
typedef struct _I2C_CALLBACKS {
    PVIDEO_WRITE_CLOCK_LINE WriteClockLine;
    PVIDEO_WRITE_DATA_LINE  WriteDataLine;
    PVIDEO_READ_CLOCK_LINE  ReadClockLine;
    PVIDEO_READ_DATA_LINE   ReadDataLine;
} I2C_CALLBACKS;
typedef I2C_CALLBACKS   *PI2C_CALLBACKS;

/* DDC control */
typedef struct _DDC_CONTROL {
    ULONG           Size;
    I2C_CALLBACKS   I2CCallbacks;
    UCHAR           EdidSegment;
} DDC_CONTROL;
typedef DDC_CONTROL *PDDC_CONTROL;

/* Video I2C control */
typedef struct _VIDEO_I2C_CONTROL {
    PVIDEO_WRITE_CLOCK_LINE WriteClockLine;
    PVIDEO_WRITE_DATA_LINE  WriteDataLine;
    PVIDEO_READ_CLOCK_LINE  ReadClockLine;
    PVIDEO_READ_DATA_LINE   ReadDataLine;
    ULONG                   I2CDelay;
} VIDEO_I2C_CONTROL;
typedef VIDEO_I2C_CONTROL   *PVIDEO_I2C_CONTROL;

/* Video port services */
typedef enum {
    VideoPortServicesAGP                = 1,
    VideoPortServicesI2C                = 2,
    VideoPortServicesHeadless           = 3,
    VideoPortServicesInt10              = 4,
    VideoPortServicesDebugReport        = 5,
    VideoPortServicesWCMemoryProtection = 6
} VIDEO_PORT_SERVICES;

/* Video port AGP interface */
typedef struct _VIDEO_PORT_AGP_INTERFACE {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PAGP_RESERVE_PHYSICAL   AgpReservePhysical;
    PAGP_RELEASE_PHYSICAL   AgpReleasePhysical;
    PAGP_COMMIT_PHYSICAL    AgpCommitPhysical;
    PAGP_FREE_PHYSICAL      AgpFreePhysical;
    PAGP_RESERVE_VIRTUAL    AgpReserveVirtual;
    PAGP_RELEASE_VIRTUAL    AgpReleaseVirtual;
    PAGP_COMMIT_VIRTUAL     AgpCommitVirtual;
    PAGP_FREE_VIRTUAL       AgpFreeVirtual;
    ULONGLONG               AgpAllocationLimit;
} VIDEO_PORT_AGP_INTERFACE;
typedef VIDEO_PORT_AGP_INTERFACE    *PVIDEO_PORT_AGP_INTERFACE;

/* Video port AGP interface (version 2) */
typedef struct _VIDEO_PORT_AGP_INTERFACE_2 {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PAGP_RESERVE_PHYSICAL   AgpReservePhysical;
    PAGP_RELEASE_PHYSICAL   AgpReleasePhysical;
    PAGP_COMMIT_PHYSICAL    AgpCommitPhysical;
    PAGP_FREE_PHYSICAL      AgpFreePhysical;
    PAGP_RESERVE_VIRTUAL    AgpReserveVirtual;
    PAGP_RELEASE_VIRTUAL    AgpReleaseVirtual;
    PAGP_COMMIT_VIRTUAL     AgpCommitVirtual;
    PAGP_FREE_VIRTUAL       AgpFreeVirtual;
    ULONGLONG               AgpAllocationLimit;
    PAGP_SET_RATE           AgpSetRate;
} VIDEO_PORT_AGP_INTERFACE_2;
typedef VIDEO_PORT_AGP_INTERFACE_2  *PVIDEO_PORT_AGP_INTERFACE_2;

/* I2C helper callbacks */
typedef BOOLEAN (NTAPI *PI2C_START)( PVOID, PI2C_CALLBACKS );
typedef BOOLEAN (NTAPI *PI2C_STOP)( PVOID, PI2C_CALLBACKS );
typedef BOOLEAN (NTAPI *PI2C_WRITE)( PVOID, PI2C_CALLBACKS, PUCHAR, ULONG );
typedef BOOLEAN (NTAPI *PI2C_READ)( PVOID, PI2C_CALLBACKS, PUCHAR, ULONG );

/* Video port I2C interface */
typedef struct _VIDEO_PORT_I2C_INTERFACE {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PI2C_START              I2CStart;
    PI2C_STOP               I2CStop;
    PI2C_WRITE              I2CWrite;
    PI2C_READ               I2CRead;
} VIDEO_PORT_I2C_INTERFACE;
typedef VIDEO_PORT_I2C_INTERFACE    *PVIDEO_PORT_I2C_INTERFACE;

/* I2C helper callbacks (version 2) */
typedef BOOLEAN (NTAPI *PI2C_START_2)( PVOID, PVIDEO_I2C_CONTROL );
typedef BOOLEAN (NTAPI *PI2C_STOP_2)( PVOID, PVIDEO_I2C_CONTROL );
typedef BOOLEAN (NTAPI *PI2C_WRITE_2)( PVOID, PVIDEO_I2C_CONTROL, PUCHAR, ULONG );
typedef BOOLEAN (NTAPI *PI2C_READ_2)( PVOID, PVIDEO_I2C_CONTROL, PUCHAR, ULONG, BOOLEAN );

/* Video port I2C interface (version 2) */
typedef struct _VIDEO_PORT_I2C_INTERFACE_2 {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PI2C_START_2            I2CStart;
    PI2C_STOP_2             I2CStop;
    PI2C_WRITE_2            I2CWrite;
    PI2C_READ_2             I2CRead;
} VIDEO_PORT_I2C_INTERFACE_2;
typedef VIDEO_PORT_I2C_INTERFACE_2  *PVIDEO_PORT_I2C_INTERFACE_2;

/* Interrupt 10 callbacks */
typedef VP_STATUS (NTAPI *PINT10_ALLOCATE_BUFFER)( PVOID, PUSHORT, PUSHORT, PULONG );
typedef VP_STATUS (NTAPI *PINT10_FREE_BUFFER)( PVOID, USHORT, USHORT );
typedef VP_STATUS (NTAPI *PINT10_READ_MEMORY)( PVOID, USHORT, USHORT, PVOID, ULONG );
typedef VP_STATUS (NTAPI *PINT10_WRITE_MEMORY)( PVOID, USHORT, USHORT, PVOID, ULONG );
typedef VP_STATUS (NTAPI *PINT10_CALL_BIOS)( PVOID, PINT10_BIOS_ARGUMENTS );

/* Video port interrupt 10 interface */
typedef struct _VIDEO_PORT_INT10_INTERFACE {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PINT10_ALLOCATE_BUFFER  Int10AllocateBuffer;
    PINT10_FREE_BUFFER      Int10FreeBuffer;
    PINT10_READ_MEMORY      Int10ReadMemory;
    PINT10_WRITE_MEMORY     Int10WriteMemory;
    PINT10_CALL_BIOS        Int10CallBios;
} VIDEO_PORT_INT10_INTERFACE;
typedef VIDEO_PORT_INT10_INTERFACE  *PVIDEO_PORT_INT10_INTERFACE;

/* WC memory protection callbacks */
typedef VP_STATUS (NTAPI *PROTECT_WC_MEMORY)( PVOID, PVOID );
typedef VP_STATUS (NTAPI *RESTORE_WC_MEMORY)( PVOID, PVOID );

/* Video port WC memory protection interface */
typedef struct _VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PROTECT_WC_MEMORY       VideoPortProtectWCMemory;
    RESTORE_WC_MEMORY       VideoPortRestoreWCMemory;
} VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE;
typedef VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE *PVIDEO_PORT_WCMEMORYPROTECTION_INTERFACE;

/* Video port operating system version information */
typedef struct _VPOSVERSIONINFO {
    ULONG   Size;
    ULONG   MajorVersion;
    ULONG   MinorVersion;
    ULONG   BuildNumber;
    USHORT  ServicePackMajor;
    USHORT  ServicePackMinor;
} VPOSVERSIONINFO;
typedef VPOSVERSIONINFO *PVPOSVERSIONINFO;

/* Miniport callbacks */
typedef VP_STATUS (NTAPI *PMINIPORT_QUERY_DEVICE_ROUTINE)( PVOID, PVOID, VIDEO_DEVICE_DATA_TYPE, PVOID, ULONG, PVOID, ULONG, PVOID, ULONG );
typedef VP_STATUS (NTAPI *PMINIPORT_GET_REGISTRY_ROUTINE)( PVOID, PVOID, PWSTR, PVOID, ULONG );
typedef VOID (NTAPI *PMINIPORT_DPC_ROUTINE)( PVOID, PVOID );
typedef BOOLEAN (NTAPI *PMINIPORT_SYNCHRONIZE_ROUTINE)( PVOID );

/* Video bug check callback */
typedef VOID (NTAPI *PVIDEO_BUGCHECK_CALLBACK)( PVOID, ULONG, PUCHAR, ULONG );

/* Video port debug report interface */
typedef struct _VIDEO_PORT_DEBUG_REPORT_INTERFACE {
    USHORT                  Size;
    USHORT                  Version;
    PVOID                   Context;
    PINTERFACE_REFERENCE    InterfaceReference;
    PINTERFACE_DEREFERENCE  InterfaceDereference;
    PVIDEO_DEBUG_REPORT     (NTAPI *DbgReportCreate)( PVOID, ULONG, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR );
    BOOLEAN                 (NTAPI *DbgReportSecondaryData)( PVIDEO_DEBUG_REPORT, PVOID, ULONG );
    VOID                    (NTAPI *DbgReportComplete)( PVIDEO_DEBUG_REPORT );
} VIDEO_PORT_DEBUG_REPORT_INTERFACE;
typedef VIDEO_PORT_DEBUG_REPORT_INTERFACE   *PVIDEO_PORT_DEBUG_REPORT_INTERFACE;

/* Functions in VIDEOPRT.SYS */
VIDEOPORT_API VOID NTAPI        VideoPortAcquireDeviceLock( PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortAcquireSpinLock( PVOID, PSPIN_LOCK, PUCHAR );
VIDEOPORT_API VOID NTAPI        VideoPortAcquireSpinLockAtDpcLevel( PVOID, PSPIN_LOCK );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortAllocateBuffer( PVOID, ULONG, PVOID * );
VIDEOPORT_API PVOID NTAPI       VideoPortAllocateCommonBuffer( PVOID, PVP_DMA_ADAPTER, ULONG, PPHYSICAL_ADDRESS, BOOLEAN, PVOID );
VIDEOPORT_API PVOID NTAPI       VideoPortAllocateContiguousMemory( PVOID, ULONG, PHYSICAL_ADDRESS );
VIDEOPORT_API PVOID NTAPI       VideoPortAllocatePool( PVOID, VP_POOL_TYPE, SIZE_T, ULONG );
VIDEOPORT_API PDMA NTAPI        VideoPortAssociateEventsWithDmaHandle( PVOID, PVIDEO_REQUEST_PACKET, PVOID, PVOID );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortCheckForDeviceExistence( PVOID, USHORT, USHORT, UCHAR, USHORT, USHORT, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortClearEvent( PVOID, PEVENT );
VIDEOPORT_API ULONG NTAPI       VideoPortCompareMemory( PVOID, PVOID, SIZE_T );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortCompleteDma( PVOID, PVP_DMA_ADAPTER, PVP_SCATTER_GATHER_LIST, BOOLEAN );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortCreateEvent( PVOID, ULONG, PVOID, PEVENT * );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortCreateSecondaryDisplay( PVOID, PVOID *, ULONG );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortCreateSpinLock( PVOID, PSPIN_LOCK * );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortDDCMonitorHelper( PVOID, PVOID, PUCHAR, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortDbgReportComplete( PVIDEO_DEBUG_REPORT );
VIDEOPORT_API PVIDEO_DEBUG_REPORT NTAPI VideoPortDbgReportCreate( PVOID, ULONG, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortDbgReportSecondaryData( PVIDEO_DEBUG_REPORT, PVOID, ULONG );
VIDEOPORT_API VOID __cdecl      VideoPortDebugPrint( VIDEO_DEBUG_LEVEL, PSTR, ... );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortDeleteEvent( PVOID, PEVENT );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortDeleteSpinLock( PVOID, PSPIN_LOCK );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortDisableInterrupt( PVOID );
VIDEOPORT_API PDMA NTAPI        VideoPortDoDma( PVOID, PDMA, DMA_FLAGS );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortEnableInterrupt( PVOID );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortEnumerateChildren( PVOID, PVOID );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortFlushRegistry( PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortFreeCommonBuffer( PVOID, ULONG, PVOID, PHYSICAL_ADDRESS, BOOLEAN );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortFreeDeviceBase( PVOID, PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortFreePool( PVOID, PVOID );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortGetAccessRanges( PVOID, ULONG, PIO_RESOURCE_DESCRIPTOR, ULONG, PVIDEO_ACCESS_RANGE, PVOID, PVOID, PULONG );
VIDEOPORT_API PVOID NTAPI       VideoPortGetAssociatedDeviceExtension( PVOID );
VIDEOPORT_API ULONG NTAPI       VideoPortGetAssociatedDeviceID( PVOID );
VIDEOPORT_API ULONG NTAPI       VideoPortGetBusData( PVOID, BUS_DATA_TYPE, ULONG, PVOID, ULONG, ULONG );
VIDEOPORT_API ULONG NTAPI       VideoPortGetBytesUsed( PVOID, PDMA );
VIDEOPORT_API PVOID NTAPI       VideoPortGetCommonBuffer( PVOID, ULONG, ULONG, PHYSICAL_ADDRESS, PULONG, BOOLEAN );
VIDEOPORT_API UCHAR NTAPI       VideoPortGetCurrentIrql();
VIDEOPORT_API PVOID NTAPI       VideoPortGetDeviceBase( PVOID, PHYSICAL_ADDRESS, ULONG, UCHAR );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortGetDeviceData( PVOID, VIDEO_DEVICE_DATA_TYPE, PMINIPORT_QUERY_DEVICE_ROUTINE, PVOID );
VIDEOPORT_API PVP_DMA_ADAPTER NTAPI VideoPortGetDmaAdapter( PVOID, PVP_DEVICE_DESCRIPTION );
VIDEOPORT_API PVOID NTAPI       VideoPortGetDmaContext( PVOID, PDMA );
VIDEOPORT_API PVOID NTAPI       VideoPortGetMdl( PVOID, PDMA );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortGetRegistryParameters( PVOID, PWSTR, UCHAR, PMINIPORT_GET_REGISTRY_ROUTINE, PVOID );
VIDEOPORT_API PVOID NTAPI       VideoPortGetRomImage( PVOID, PVOID, ULONG, ULONG );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortGetVersion( PVOID, PVPOSVERSIONINFO );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortGetVgaStatus( PVOID, PULONG );
VIDEOPORT_API ULONG NTAPI       VideoPortInitialize( PVOID, PVOID, PVIDEO_HW_INITIALIZATION_DATA, PVOID );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortInt10( PVOID, PVIDEO_X86_BIOS_ARGUMENTS );
VIDEOPORT_API LONG FASTCALL     VideoPortInterlockedDecrement( PLONG );
VIDEOPORT_API LONG FASTCALL     VideoPortInterlockedExchange( PLONG, LONG );
VIDEOPORT_API LONG FASTCALL     VideoPortInterlockedIncrement( PLONG );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortIsNoVesa( VOID );
VIDEOPORT_API PVOID NTAPI       VideoPortLockBuffer( PVOID, PVOID, ULONG, VP_LOCK_OPERATION );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortLockPages( PVOID, PVIDEO_REQUEST_PACKET, PEVENT, PEVENT, DMA_FLAGS );
VIDEOPORT_API VOID NTAPI        VideoPortLogError( PVOID, PVIDEO_REQUEST_PACKET, VP_STATUS, ULONG );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortMapBankedMemory( PVOID, PHYSICAL_ADDRESS, PULONG, PULONG, PVOID *, ULONG, UCHAR, PBANKED_SECTION_ROUTINE, PVOID );
VIDEOPORT_API PDMA NTAPI        VideoPortMapDmaMemory( PVOID, PVIDEO_REQUEST_PACKET, PHYSICAL_ADDRESS, PULONG, PULONG, PVOID, PVOID, PVOID * );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortMapMemory( PVOID, PHYSICAL_ADDRESS, PULONG, PULONG, PVOID * );
VIDEOPORT_API VOID NTAPI        VideoPortMoveMemory( PVOID, PVOID, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortPutDmaAdapter( PVOID, PVP_DMA_ADAPTER );
VIDEOPORT_API LONGLONG NTAPI    VideoPortQueryPerformanceCounter( PVOID, PLONGLONG );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortQueryServices( PVOID, VIDEO_PORT_SERVICES, PINTERFACE );
VIDEOPORT_API VOID NTAPI        VideoPortQuerySystemTime( PLARGE_INTEGER );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortQueueDpc( PVOID, PMINIPORT_DPC_ROUTINE, PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortReadPortBufferUchar( PUCHAR, PUCHAR, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortReadPortBufferUlong( PULONG, PULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortReadPortBufferUshort( PUSHORT, PUSHORT, ULONG );
VIDEOPORT_API UCHAR NTAPI       VideoPortReadPortUchar( PUCHAR );
VIDEOPORT_API ULONG NTAPI       VideoPortReadPortUlong( PULONG );
VIDEOPORT_API USHORT NTAPI      VideoPortReadPortUshort( PUSHORT );
VIDEOPORT_API VOID NTAPI        VideoPortReadRegisterBufferUchar( PUCHAR, PUCHAR, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortReadRegisterBufferUlong( PULONG, PULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortReadRegisterBufferUshort( PUSHORT, PUSHORT, ULONG );
VIDEOPORT_API UCHAR NTAPI       VideoPortReadRegisterUchar( PUCHAR );
VIDEOPORT_API ULONG NTAPI       VideoPortReadRegisterUlong( PULONG );
VIDEOPORT_API USHORT NTAPI      VideoPortReadRegisterUshort( PUSHORT );
VIDEOPORT_API LONG NTAPI        VideoPortReadStateEvent( PVOID, PEVENT );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortRegisterBugCheckCallback( PVOID, ULONG, PVIDEO_BUGCHECK_CALLBACK, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortReleaseBuffer( PVOID, PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortReleaseCommonBuffer( PVOID, PVP_DMA_ADAPTER, ULONG, PHYSICAL_ADDRESS, PVOID, BOOLEAN );
VIDEOPORT_API VOID NTAPI        VideoPortReleaseDeviceLock( PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortReleaseSpinLock( PVOID, PSPIN_LOCK, UCHAR );
VIDEOPORT_API VOID NTAPI        VideoPortReleaseSpinLockFromDpcLevel( PVOID, PSPIN_LOCK );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortScanRom( PVOID, PUCHAR, ULONG, PUCHAR );
VIDEOPORT_API ULONG NTAPI       VideoPortSetBusData( PVOID, BUS_DATA_TYPE, ULONG, PVOID, ULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortSetBytesUsed( PVOID, PDMA, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortSetDmaContext( PVOID, PDMA, PVOID );
VIDEOPORT_API LONG NTAPI        VideoPortSetEvent( PVOID, PEVENT );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortSetRegistryParameters( PVOID, PWSTR, PVOID, ULONG );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortSetTrappedEmulatorPorts( PVOID, ULONG, PVIDEO_ACCESS_RANGE );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortSignalDmaComplete( PVOID, PDMA );
VIDEOPORT_API VOID NTAPI        VideoPortStallExecution( ULONG );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortStartDma( PVOID, PVP_DMA_ADAPTER, PVOID, ULONG, PULONG, PEXECUTE_DMA, PVOID, BOOLEAN );
VIDEOPORT_API VOID NTAPI        VideoPortStartTimer( PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortStopTimer( PVOID );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortSynchronizeExecution( PVOID, VIDEO_SYNCHRONIZE_PRIORITY, PMINIPORT_SYNCHRONIZE_ROUTINE, PVOID );
VIDEOPORT_API VOID NTAPI        VideoPortUnlockBuffer( PVOID, PVOID );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortUnlockPages( PVOID, PDMA );
VIDEOPORT_API BOOLEAN NTAPI     VideoPortUnmapDmaMemory( PVOID, PVOID, HANDLE, PDMA );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortUnmapMemory( PVOID, PVOID, HANDLE );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortVerifyAccessRanges( PVOID, ULONG, PVIDEO_ACCESS_RANGE );
VIDEOPORT_API VP_STATUS NTAPI   VideoPortWaitForSingleObject( PVOID, PVOID, PLARGE_INTEGER );
VIDEOPORT_API VOID NTAPI        VideoPortWritePortBufferUchar( PUCHAR, PUCHAR, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWritePortBufferUlong( PULONG, PULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWritePortBufferUshort( PUSHORT, PUSHORT, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWritePortUchar( PUCHAR, UCHAR );
VIDEOPORT_API VOID NTAPI        VideoPortWritePortUlong( PULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWritePortUshort( PUSHORT, USHORT );
VIDEOPORT_API VOID NTAPI        VideoPortWriteRegisterBufferUchar( PUCHAR, PUCHAR, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWriteRegisterBufferUlong( PULONG, PULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWriteRegisterBufferUshort( PUSHORT, PUSHORT, USHORT );
VIDEOPORT_API VOID NTAPI        VideoPortWriteRegisterUchar( PUCHAR, UCHAR );
VIDEOPORT_API VOID NTAPI        VideoPortWriteRegisterUlong( PULONG, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortWriteRegisterUshort( PUSHORT, USHORT );
VIDEOPORT_API VOID NTAPI        VideoPortZeroDeviceMemory( PVOID, ULONG );
VIDEOPORT_API VOID NTAPI        VideoPortZeroMemory( PVOID, ULONG );

/* Functions implemented as macros */
#if DBG
    #define VideoDebugPrint( x )    VideoPortDebugPrint x
#else
    #define VideoDebugPrint( x )
#endif

/* Other macros */
#define GET_VIDEO_PHYSICAL_ADDRESS( p1, p2, p3, p4, p5 ) \
    do { \
        ULONG_PTR   v; \
        v = (PCHAR)(p2) - (PCHAR)(p3); \
        while( v >= (p1)->Length ) { \
            v -= (p1)->Length; \
            (p1)++; \
        } \
        *(p4) = (p1)->Length - v; \
        p5 = (ULONG_PTR)((p1)->PhysicalAddress + v); \
    } while( 0 )
#define GET_VIDEO_SCATTERGATHER( x )    (**(PVRB_SG **)(x))

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __VIDEO_H__ */
