/*
 *  ntddscsi.h  SCSI device I/O control codes
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

#ifndef _NTDDSCSIH_
#define _NTDDSCSIH_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* SCSI device type */
#define FILE_DEVICE_SCSI    0x0000001BL

/* SCSI device name */
#define DD_SCSI_DEVICE_NAME "\\Device\\ScsiPort"

/* SCSI device I/O control codes */
#define IOCTL_SCSI_BASE             FILE_DEVICE_CONTROLLER
#define IOCTL_SCSI_PASS_THROUGH \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0401, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_SCSI_MINIPORT \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0402, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_SCSI_GET_INQUIRY_DATA \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0403, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SCSI_GET_CAPABILITIES \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0404, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SCSI_PASS_THROUGH_DIRECT \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0405, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_SCSI_GET_ADDRESS \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0406, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SCSI_RESCAN_BUS \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0407, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SCSI_GET_DUMP_POINTERS \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0408, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SCSI_FREE_DUMP_POINTERS \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0409, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_IDE_PASS_THROUGH \
    CTL_CODE( IOCTL_SCSI_BASE, 0x040A, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_ATA_PASS_THROUGH \
    CTL_CODE( IOCTL_SCSI_BASE, 0x040B, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_ATA_PASS_THROUGH_DIRECT \
    CTL_CODE( IOCTL_SCSI_BASE, 0x040C, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_ATA_MINIPORT \
    CTL_CODE( IOCTL_SCSI_BASE, 0x040D, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_MINIPORT_PROCESS_SERVICE_IRP \
    CTL_CODE( IOCTL_SCSI_BASE, 0x040E, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_MPIO_PASS_THROUGH_PATH \
    CTL_CODE( IOCTL_SCSI_BASE, 0x040F, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_MPIO_PASS_THROUGH_PATH_DIRECT \
    CTL_CODE( IOCTL_SCSI_BASE, 0x0410, METHOD_BUFFERED, FILE_READ_ACCESS | \
    FILE_WRITE_ACCESS )
#define IOCTL_SCSI_MINIPORT_NVCACHE ((FILE_DEVICE_SCSI << 16) + 0x0600)

/* ATA pass through flags */
#define ATA_FLAGS_DRDY_REQUIRED 0x0001
#define ATA_FLAGS_DATA_IN       0x0002
#define ATA_FLAGS_DATA_OUT      0x0004
#define ATA_FLAGS_48BIT_COMMAND 0x0008
#define ATA_FLAGS_USE_DMA       0x0010
#define ATA_FLAGS_NO_MULTIPLE   0x0020

/* NRB functions */
#define NRB_FUNCTION_NVCACHE_INFO               0xEC
#define NRB_FUNCTION_SPINDLE_STATUS             0xE5
#define NRB_FUNCTION_NVCACHE_POWER_MODE_SET     0x00
#define NRB_FUNCTION_NVCACHE_POWER_MODE_RETURN  0x01
#define NRB_FUNCTION_FLUSH_NVCACHE              0x14
#define NRB_FUNCTION_QUERY_PINNED_SET           0x12
#define NRB_FUNCTION_QUERY_CACHE_MISS           0x13
#define NRB_FUNCTION_ADD_LBAS_PINNED_SET        0x10
#define NRB_FUNCTION_REMOVE_LBAS_PINNED_SET     0x11
#define NRB_FUNCTION_QUERY_ASCENDER_STATUS      0xD0
#define NRB_FUNCTION_QUERY_HYBRID_DISK_STATUS   0xD1

/* NRB status codes */
#define NRB_SUCCESS                 0
#define NRB_ILLEGAL_REQUEST         1
#define NRB_INVALID_PARAMETER       2
#define NRB_INPUT_DATA_OVERRUN      3
#define NRB_INPUT_DATA_UNDERRUN     4
#define NRB_OUTPUT_DATA_OVERRUN     5
#define NRB_OUTPUT_DATA_UNDERRUN    6

/* Dump pointers constants */
#define DUMP_POINTERS_VERSION_1 1
#define DUMP_POINTERS_VERSION_2 2
#define DUMP_DRIVER_NAME_LENGTH 15

/* SCSI I/O control data constants */
#define SCSI_IOCTL_DATA_OUT         0
#define SCSI_IOCTL_DATA_IN          1
#define SCSI_IOCTL_DATA_UNSPECIFIED 2

/* MPIO I/O control flags */
#define MPIO_IOCTL_FLAGS_USE_PATHID         1
#define MPIO_IOCTL_FLAGS_USE_SCSIADDRESS    2
#define MPIO_IOCTL_FLAGS_INVOLVE_DSM        4

/* SCSI pass through */
typedef struct _SCSI_PASS_THROUGH {
    USHORT      Length;
    UCHAR       ScsiStatus;
    UCHAR       PathId;
    UCHAR       TargetId;
    UCHAR       Lun;
    UCHAR       CdbLength;
    UCHAR       SenseInfoLength;
    UCHAR       DataIn;
    ULONG       DataTransferLength;
    ULONG       TimeOutValue;
    ULONG_PTR   DataBufferOffset;
    ULONG       SenseInfoOffset;
    UCHAR       Cdb[16];
} SCSI_PASS_THROUGH;
typedef SCSI_PASS_THROUGH   *PSCSI_PASS_THROUGH;

/* SCSI pass through direct */
typedef struct _SCSI_PASS_THROUGH_DIRECT {
    USHORT  Length;
    UCHAR   ScsiStatus;
    UCHAR   PathId;
    UCHAR   TargetId;
    UCHAR   Lun;
    UCHAR   CdbLength;
    UCHAR   SenseInfoLength;
    UCHAR   DataIn;
    ULONG   DataTransferLength;
    ULONG   TimeOutValue;
    PVOID   DataBuffer;
    ULONG   SenseInfoOffset;
    UCHAR   Cdb[16];
} SCSI_PASS_THROUGH_DIRECT;
typedef SCSI_PASS_THROUGH_DIRECT    *PSCSI_PASS_THROUGH_DIRECT;

/* ATA pass through (extended version) */
typedef struct _ATA_PASS_THROUGH_EX {
    USHORT      Length;
    USHORT      AtaFlags;
    UCHAR       PathId;
    UCHAR       TargetId;
    UCHAR       Lun;
    UCHAR       ReservedAsUchar;
    ULONG       DataTransferLength;
    ULONG       TimeOutValue;
    ULONG       ReservedAsUlong;
    ULONG_PTR   DataBufferOffset;
    UCHAR       PreviousTaskFile[8];
    UCHAR       CurrentTaskFile[8];
} ATA_PASS_THROUGH_EX;
typedef ATA_PASS_THROUGH_EX *PATA_PASS_THROUGH_EX;

/* ATA pass through direct */
typedef struct _ATA_PASS_THROUGH_DIRECT {
    USHORT  Length;
    USHORT  AtaFlags;
    UCHAR   PathId;
    UCHAR   TargetId;
    UCHAR   Lun;
    UCHAR   ReservedAsUchar;
    ULONG   DataTransferLength;
    ULONG   TimeOutValue;
    ULONG   ReservedAsUlong;
    PVOID   DataBuffer;
    UCHAR   PreviousTaskFile[8];
    UCHAR   CurrentTaskFile[8];
} ATA_PASS_THROUGH_DIRECT;
typedef ATA_PASS_THROUGH_DIRECT *PATA_PASS_THROUGH_DIRECT;

/* IDE I/O control */
typedef struct _IDE_IO_CONTROL {
    ULONG   HeaderLength;
    UCHAR   Signature[8];
    ULONG   Timeout;
    ULONG   ControlCode;
    ULONG   ReturnStatus;
    ULONG   DataLength;
} IDE_IO_CONTROL;
typedef IDE_IO_CONTROL  *PIDE_IO_CONTROL;

/* IOCTL_MPIO_PASS_THROUGH_PATH parameters */
typedef struct _MPIO_PASS_THROUGH_PATH {
    SCSI_PASS_THROUGH   PassThrough;
    ULONG               Version;
    USHORT              Length;
    UCHAR               Flags;
    UCHAR               PortNumber;
    ULONGLONG           MpioPathId;
} MPIO_PASS_THROUGH_PATH;
typedef MPIO_PASS_THROUGH_PATH  *PMPIO_PASS_THROUGH_PATH;

/* IOCTL_MPIO_PASS_THROUGH_PATH_DIRECT parameters */
typedef struct _MPIO_PASS_THROUGH_PATH_DIRECT {
    SCSI_PASS_THROUGH_DIRECT    PassThrough;
    ULONG                       Version;
    USHORT                      Length;
    UCHAR                       Flags;
    UCHAR                       PortNumber;
    ULONGLONG                   MpioPathId;
} MPIO_PASS_THROUGH_PATH_DIRECT;
typedef MPIO_PASS_THROUGH_PATH_DIRECT   *PMPIO_PASS_THROUGH_PATH_DIRECT;

/* SCSI bus data */
typedef struct _SCSI_BUS_DATA {
    UCHAR   NumberOfLogicalUnits;
    UCHAR   InitiatorBusId;
    ULONG   InquiryDataOffset;
} SCSI_BUS_DATA;
typedef SCSI_BUS_DATA   *PSCSI_BUS_DATA;

/* SCSI adapter bus information */
typedef struct _SCSI_ADAPTER_BUS_INFO {
    UCHAR           NumberOfBuses;
    SCSI_BUS_DATA   BusData[1];
} SCSI_ADAPTER_BUS_INFO;
typedef SCSI_ADAPTER_BUS_INFO   *PSCSI_ADAPTER_BUS_INFO;

/* SCSI inquiry data */
typedef struct _SCSI_INQUIRY_DATA {
    UCHAR   PathId;
    UCHAR   TargetId;
    UCHAR   Lun;
    BOOLEAN DeviceClaimed;
    ULONG   InquiryDataLength;
    ULONG   NextInquiryDataOffset;
    UCHAR   InquiryData[1];
} SCSI_INQUIRY_DATA;
typedef SCSI_INQUIRY_DATA   *PSCSI_INQUIRY_DATA;

/* SRB I/O control */
typedef struct _SRB_IO_CONTROL {
    ULONG   HeaderLength;
    UCHAR   Signature[8];
    ULONG   Timeout;
    ULONG   ControlCode;
    ULONG   ReturnCode;
    ULONG   Length;
} SRB_IO_CONTROL;
typedef SRB_IO_CONTROL  *PSRB_IO_CONTROL;

/* Nonvolatile cache request block */
typedef struct _NVCACHE_REQUEST_BLOCK {
    ULONG       NRBSize;
    USHORT      Function;
    ULONG       NRBFlags;
    ULONG       NRBStatus;
    ULONG       Count;
    ULONGLONG   LBA;
    ULONG       DataBufSize;
    ULONG       NVCacheStatus;
    ULONG       NVCacheSubStatus;
} NVCACHE_REQUEST_BLOCK;
typedef NVCACHE_REQUEST_BLOCK   *PNVCACHE_REQUEST_BLOCK;

/* Nonvolatile feature parameter */
typedef struct _NV_FEATURE_PARAMETER {
    USHORT  NVPowerModeEnabled;
    USHORT  NVParameterReserv1;
    USHORT  NVCmdEnabled;
    USHORT  NVParameterReserv2;
    USHORT  NVPowerModeVer;
    USHORT  NVCmdVer;
    ULONG   NVSize;
    USHORT  NVReadSpeed;
    USHORT  NVWrtSpeed;
    ULONG   DeviceSpinUpTime;
} NV_FEATURE_PARAMETER;
typedef NV_FEATURE_PARAMETER    *PNV_FEATURE_PARAMETER;

/* I/O SCSI capabilities */
typedef struct _IO_SCSI_CAPABILITIES {
    ULONG   Length;
    ULONG   MaximumTransferLength;
    ULONG   MaximumPhysicalPages;
    ULONG   SupportedAsynchronousEvents;
    ULONG   AlignmentMask;
    BOOLEAN TaggedQueuing;
    BOOLEAN AdapterScansDown;
    BOOLEAN AdapterUsesPio;
} IO_SCSI_CAPABILITIES;
typedef IO_SCSI_CAPABILITIES    *PIO_SCSI_CAPABILITIES;

/* SCSI address */
typedef struct _SCSI_ADDRESS {
    ULONG   Length;
    UCHAR   PortNumber;
    UCHAR   PathId;
    UCHAR   TargetId;
    UCHAR   Lun;
} SCSI_ADDRESS;
typedef SCSI_ADDRESS    *PSCSI_ADDRESS;

/* Dump pointers version */
typedef struct _DUMP_POINTERS_VERSION {
    ULONG   Version;
    ULONG   Size;
} DUMP_POINTERS_VERSION;
typedef DUMP_POINTERS_VERSION   *PDUMP_POINTERS_VERSION;

/* Dump pointers */
typedef struct _DUMP_POINTERS {
    struct _ADAPTER_OBJECT  *AdapterObject;
    PVOID                   MappedRegisterBase;
    PVOID                   DumpData;
    PVOID                   CommonBufferVa;
    LARGE_INTEGER           CommonBufferPa;
    ULONG                   CommonBufferSize;
    BOOLEAN                 AllocateCommonBuffers;
#if (NTDDI_VERSION < 0x05010000)
    UCHAR                   Spare1[3];
#else
    BOOLEAN                 UseDiskDump;
    UCHAR                   Spare1[2];
#endif
    PVOID                   DeviceObject;
} DUMP_POINTERS;
typedef DUMP_POINTERS   *PDUMP_POINTERS;

/* Dump pointers (extended version) */
typedef struct _DUMP_POINTERS_EX {
    DUMP_POINTERS_VERSION   Header;
    PVOID                   DumpData;
    PVOID                   CommonBufferVa;
    ULONG                   CommonBufferSize;
    BOOLEAN                 AllocateCommonBuffers;
    PVOID                   DeviceObject;
    PVOID                   DriverList;
} DUMP_POINTERS_EX;
typedef DUMP_POINTERS_EX    *PDUMP_POINTERS_EX;

/* Dump driver */
typedef struct _DUMP_DRIVER {
    PVOID   DumpDriverList;
    WCHAR   DriverName[DUMP_DRIVER_NAME_LENGTH];
    WCHAR   BaseName[DUMP_DRIVER_NAME_LENGTH];
} DUMP_DRIVER;
typedef DUMP_DRIVER *PDUMP_DRIVER;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTDDSCSIH_ */
