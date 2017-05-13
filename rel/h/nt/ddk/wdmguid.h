/*
 *  wdmguid.h   Windows Driver Model (WDM) GUIDs
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

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

/* GUIDs */
#if (NTDDI_VERSION >= 0x05000000)
EXTERN_C const GUID __cdecl GUID_HWPROFILE_QUERY_CHANGE;
EXTERN_C const GUID __cdecl GUID_HWPROFILE_CHANGE_CANCELLED;
EXTERN_C const GUID __cdecl GUID_HWPROFILE_CHANGE_COMPLETE;
EXTERN_C const GUID __cdecl GUID_DEVICE_INTERFACE_ARRIVAL;
EXTERN_C const GUID __cdecl GUID_DEVICE_INTERFACE_REMOVAL;
EXTERN_C const GUID __cdecl GUID_TARGET_DEVICE_QUERY_REMOVE;
EXTERN_C const GUID __cdecl GUID_TARGET_DEVICE_REMOVE_CANCELLED;
EXTERN_C const GUID __cdecl GUID_TARGET_DEVICE_REMOVE_COMPLETE;
EXTERN_C const GUID __cdecl GUID_PNP_CUSTOM_NOTIFICATION;
EXTERN_C const GUID __cdecl GUID_PNP_POWER_NOTIFICATION;
#endif
#if (NTDDI_VERSION >= 0x06000000)
EXTERN_C const GUID __cdecl GUID_PNP_POWER_SETTING_CHANGE;
#endif
#if (NTDDI_VERSION >= 0x06010000)
EXTERN_C const GUID __cdecl GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
#endif
#if (NTDDI_VERSION >= 0x05000000)
EXTERN_C const GUID __cdecl GUID_BUS_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_PCI_BUS_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_ARBITER_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_TRANSLATOR_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_ACPI_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_INT_ROUTE_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_PCMCIA_BUS_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_ACPI_REGS_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_LEGACY_DEVICE_DETECTION_STANDARD;
EXTERN_C const GUID __cdecl GUID_PCI_DEVICE_PRESENT_INTERFACE;
EXTERN_C const GUID __cdecl GUID_MF_ENUMERATION_INTERFACE;
EXTERN_C const GUID __cdecl GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
#endif
#if (NTDDI_VERSION >= 0x05010000)
EXTERN_C const GUID __cdecl GUID_AGP_TARGET_BUS_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_ACPI_CMOS_INTERFACE_STANDARD;
EXTERN_C const GUID __cdecl GUID_ACPI_PORT_RANGES_INTERFACE_STANDARD;
#endif
#if (NTDDI_VERSION >= 0x06000000)
EXTERN_C const GUID __cdecl GUID_ACPI_INTERFACE_STANDARD2;
EXTERN_C const GUID __cdecl GUID_PNP_LOCATION_INTERFACE;
EXTERN_C const GUID __cdecl GUID_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE;
EXTERN_C const GUID __cdecl GUID_PCI_EXPRESS_ROOT_PORT_INTERFACE;
EXTERN_C const GUID __cdecl GUID_MSIX_TABLE_CONFIG_INTERFACE;
#endif
#if (NTDDI_VERSION >= 0x06010000)
EXTERN_C const GUID __cdecl GUID_PROCESSOR_PCC_INTERFACE_STANDARD;
#endif
#if (NTDDI_VERSION >= 0x05000000)
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_INTERNAL;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_PCMCIA;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_PCI;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_ISAPNP;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_EISA;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_MCA;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_SERENUM;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_USB;
#endif
#if (NTDDI_VERSION >= 0x05010000)
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_LPTENUM;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_USBPRINT;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_DOT4PRT;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_1394;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_HID;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_AVC;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_IRDA;
EXTERN_C const GUID __cdecl GUID_BUS_TYPE_SD;
#endif
#if (NTDDI_VERSION >= 0x05000000)
EXTERN_C const GUID __cdecl GUID_POWER_DEVICE_ENABLE;
EXTERN_C const GUID __cdecl GUID_POWER_DEVICE_TIMEOUTS;
EXTERN_C const GUID __cdecl GUID_POWER_DEVICE_WAKE_ENABLE;
#endif
#if (NTDDI_VERSION >= 0x05010000)
EXTERN_C const GUID __cdecl GUID_WUDF_DEVICE_HOST_PROBLEM;
#endif
#if (NTDDI_VERSION >= 0x06000000)
EXTERN_C const GUID __cdecl GUID_PARTITION_UNIT_INTERFACE_STANDARD;
#endif
