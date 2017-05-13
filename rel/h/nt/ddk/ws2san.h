/*
 *  ws2san.h    Windows Sockets SAN definitions
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

#ifndef _WS2SAN_H_
#define _WS2SAN_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Socket options */
#define SO_MAX_RDMA_SIZE        0x700D
#define SO_RDMA_THRESHOLD_SIZE  0x700E

/* Windows Sockets identifiers */
#define WSAID_REGISTERMEMORY \
    { 0xC0B422F5, 0xF58C, 0x11D1, { 0xAD, 0x6C, 0x00, 0xC0, 0x4F, 0xA3, 0x4A, 0x2D } }
#define WSAID_DEREGISTEMEMORY \
    { 0xC0B422F6, 0xF58C, 0x11D1, { 0xAD, 0x6C, 0x00, 0xC0, 0x4F, 0xA3, 0x4A, 0x2D } }
#define WSAID_REGISTERDMAMEMORY \
    { 0xC0B422F7, 0xF58C, 0x11D1, { 0xAD, 0x6C, 0x00, 0xC0, 0x4F, 0xA3, 0x4A, 0x2D } }
#define WSAID_DEREGISTERDMAMEMORY \
    { 0xC0B422F8, 0xF58C, 0x11D1, { 0xAD, 0x6C, 0x00, 0xC0, 0x4F, 0xA3, 0x4A, 0x2D } }
#define WSAID_RDMAWRITE \
    { 0xC0B422F9, 0xF58C, 0x11D1, { 0xAD, 0x6C, 0x00, 0xC0, 0x4F, 0xA3, 0x4A, 0x2D } }
#define WSAID_RDMAREAD \
    { 0xC0B422FA, 0xF58C, 0x11D1, { 0xAD, 0x6C, 0x00, 0xC0, 0x4F, 0xA3, 0x4A, 0x2D } }
#if (_WIN32_WINNT >= 0x0501)
    #define WSAID_MEMORYREGISTRATIONCACHECALLBACK \
        { 0xE5DA4AF8, 0xD824, 0x48CD, { 0xA7, 0x99, 0x63, 0x37, 0xA9, 0x8E, 0xD2, 0xAF } }
#endif

/* Memory access values */
#define MEM_READ        1
#define MEM_WRITE       2
#define MEM_READWRITE   3

/* Windows Sockets upcall table (extended version) */
typedef struct _WSPUPCALLTABLEEX {
    LPWPUCLOSEEVENT                 lpWPUCloseEvent;
    LPWPUCLOSESOCKETHANDLE          lpWPUCloseSocketHandle;
    LPWPUCREATEEVENT                lpWPUCreateEvent;
    LPWPUCREATESOCKETHANDLE         lpWPUCreateSocketHandle;
    LPWPUFDISSET                    lpWPUFDIsSet;
    LPWPUGETPROVIDERPATH            lpWPUGetProviderPath;
    LPWPUMODIFYIFSHANDLE            lpWPUModifyIFSHandle;
    LPWPUPOSTMESSAGE                lpWPUPostMessage;
    LPWPUQUERYBLOCKINGCALLBACK      lpWPUQueryBlockingCallback;
    LPWPUQUERYSOCKETHANDLECONTEXT   lpWPUQuerySocketHandleContext;
    LPWPUQUEUEAPC                   lpWPUQueueApc;
    LPWPURESETEVENT                 lpWPUResetEvent;
    LPWPUSETEVENT                   lpWPUSetEvent;
    LPWPUOPENCURRENTTHREAD          lpWPUOpenCurrentThread;
    LPWPUCLOSETHREAD                lpWPUCloseThread;
    LPWPUCOMPLETEOVERLAPPEDREQUEST  lpWPUCompleteOverlappedRequest;
} WSPUPCALLTABLEEX;
typedef WSPUPCALLTABLEEX    *LPWSPUPCALLTABLEEX;

/* Windows Socket buffer (extended version) */
typedef struct _WSABUFEX {
    u_long  len;
    char    *buf;
    HANDLE  handle;
} WSABUFEX;
typedef WSABUFEX    *LPWSABUFEX;

/* Pointer to functions implemented by SAN service providers */
typedef int (WSPAPI *LPWSPSTARTUPEX)( WORD, LPWSPDATA, LPWSAPROTOCOL_INFOW, LPWSPUPCALLTABLEEX, LPWSPPROC_TABLE );
typedef HANDLE (WSPAPI *LPFN_WSPREGISTERMEMORY)( SOCKET, PVOID, DWORD, DWORD, LPINT );
typedef int (WSPAPI *LPFN_WSPDEREGISTERMEMORY)( SOCKET, HANDLE, LPINT );
typedef BOOL (WSPAPI *LPFN_WSPREGISTERDMAMEMORY)( SOCKET, PVOID, DWORD, DWORD, LPVOID, LPDWORD, LPINT );
typedef int (WSPAPI *LPFN_WSPDEREGISTERDMAMEMORY)( SOCKET, LPVOID, DWORD, LPINT );
typedef int (WSPAPI *LPFN_WSPRDMAWRITE)( SOCKET, LPWSABUFEX, DWORD, LPVOID, DWORD, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE, LPWSATHREADID, LPINT );
typedef int (WSPAPI *LPFN_WSPRDMAREAD)( SOCKET, LPWSABUFEX, DWORD, LPVOID, DWORD, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE, LPWSATHREADID, LPINT );
#if (_WIN32_WINNT >= 0x0501)
typedef int (WSPAPI *LPFN_WSPMEMORYREGISTRATIONCACHECALLBACK)( LPVOID, SIZE_T, LPINT );
#endif

/* Functions implemented by SAN service providers */
int WSPAPI      WSPDeregisterMemory( SOCKET, HANDLE, LPINT );
int WSPAPI      WSPDeregisterRdmaMemory( SOCKET, LPVOID, DWORD, LPINT );
int WSPAPI      WSPRdmaRead( SOCKET, LPWSABUFEX, DWORD, LPVOID, DWORD, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE, LPWSATHREADID, LPINT );
int WSPAPI      WSPRdmaWrite( SOCKET, LPWSABUFEX, DWORD, LPVOID, DWORD, DWORD, LPDWORD, DWORD, LPWSAOVERLAPPED, LPWSAOVERLAPPED_COMPLETION_ROUTINE, LPWSATHREADID, LPINT );
HANDLE WSPAPI   WSPRegisterMemory( SOCKET, PVOID, DWORD, DWORD, LPINT );
int WSPAPI      WSPRegisterRdmaMemory( SOCKET, PVOID, DWORD, DWORD, LPVOID, LPDWORD, LPINT );
int WSPAPI      WSPStartupEx( WORD, LPWSPDATA, LPWSAPROTOCOL_INFOW, LPWSPUPCALLTABLEEX, LPWSPPROC_TABLE );
#if (_WIN32_WINNT >= 0x0501)
int WSPAPI      WSPMemoryRegistrationCacheCallback( LPVOID, SIZE_T, LPINT );
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _WS2SAN_H_ */
