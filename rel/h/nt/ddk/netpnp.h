/*
 *  netpnp.h    Network Plug and Play definitions
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

#ifndef __NET_PNP__
#define __NET_PNP__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Network Plug and Play event codes */
typedef enum _NET_PNP_EVENT_CODE {
    NetEventSetPower            = 0,
    NetEventQueryPower          = 1,
    NetEventQueryRemoveDevice   = 2,
    NetEventCancelRemoveDevice  = 3,
    NetEventReconfigure         = 4,
    NetEventBindList            = 5,
    NetEventBindsComplete       = 6,
    NetEventPnPCapabilities     = 7,
    NetEventPause               = 8,
    NetEventRestart             = 9,
    NetEventPortActivation      = 10,
    NetEventPortDeactivation    = 11,
    NetEventIMReEnableDevice    = 12,
    NetEventMaximum             = 13
} NET_PNP_EVENT_CODE;
typedef NET_PNP_EVENT_CODE  *PNET_PNP_EVENT_CODE;

/* Network Plug and Play event */
typedef struct _NET_PNP_EVENT {
    NET_PNP_EVENT_CODE  NetEvent;
    PVOID               Buffer;
    ULONG               BufferLength;
    ULONG_PTR           NdisReserved[4];
    ULONG_PTR           TransportReserved[4];
    ULONG_PTR           TdiReserved[4];
    ULONG_PTR           TdiClientReserved[4];
} NET_PNP_EVENT;
typedef NET_PNP_EVENT   *PNET_PNP_EVENT;

/* Network device power state */
typedef enum _NET_DEVICE_POWER_STATE {
    NetDeviceStateUnspecified   = 0,
    NetDeviceStateD0            = 1,
    NetDeviceStateD1            = 2,
    NetDeviceStateD2            = 3,
    NetDeviceStateD3            = 4,
    NetDeviceStateMaximum       = 5
} NET_DEVICE_POWER_STATE;
typedef NET_DEVICE_POWER_STATE  *PNET_DEVICE_POWER_STATE;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __NET_PNP__ */
