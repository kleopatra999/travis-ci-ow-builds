/*
 *  ntdd8042.h  I8042 device I/O control codes
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

#ifndef _NTDD8042_
#define _NTDD8042_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* I8042 internal device I/O control codes */
#define IOCTL_INTERNAL_I8042_HOOK_KEYBOARD \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0FF0, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_I8042_HOOK_MOUSE \
    CTL_CODE( FILE_DEVICE_MOUSE, 0x0FF0, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_I8042_KEYBOARD_WRITE_BUFFER \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0FF1, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_I8042_MOUSE_WRITE_BUFFER \
    CTL_CODE( FILE_DEVICE_MOUSE, 0x0FF1, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_I8042_CONTROLLER_WRITE_BUFFER \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0FF2, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_I8042_KEYBOARD_START_INFORMATION \
    CTL_CODE( FILE_DEVICE_KEYBOARD, 0x0FF3, METHOD_NEITHER, FILE_ANY_ACCESS )
#define IOCTL_INTERNAL_I8042_MOUSE_START_INFORMATION \
    CTL_CODE( FILE_DEVICE_MOUSE, 0x0FF3, METHOD_NEITHER, FILE_ANY_ACCESS )

/* I8042 power capability flags */
#define I8042_POWER_SYS_BUTTON  0x00000001L
#define I8042_SLEEP_SYS_BUTTON  0x00000002L
#define I8042_WAKE_SYS_BUTTON   0x00000004L
#define I8042_SYS_BUTTONS \
    (I8042_POWER_SYS_BUTTON | I8042_SLEEP_SYS_BUTTON | I8042_WAKE_SYS_BUTTON)

/* Transmit states */
typedef enum _TRANSMIT_STATE {
    Idle            = 0,
    SendingBytes    = 1
} TRANSMIT_STATE;

/* Output packet */
typedef struct _OUTPUT_PACKET {
    PUCHAR          Bytes;
    ULONG           CurrentByte;
    ULONG           ByteCount;
    TRANSMIT_STATE  State;
} OUTPUT_PACKET;
typedef OUTPUT_PACKET   *POUTPUT_PACKET;

/* Mouse states */
typedef enum _MOUSE_STATE {
    MouseIdle           = 0,
    XMovement           = 1,
    YMovement           = 2,
    ZMovement           = 3,
    MouseExpectingACK   = 4,
    MouseResetting      = 5
} MOUSE_STATE;
typedef MOUSE_STATE *PMOUSE_STATE;

/* Mouse reset substates */
typedef enum _MOUSE_RESET_SUBSTATE {
    ExpectingReset                          = 0,
    ExpectingResetId                        = 1,
    ExpectingGetDeviceIdACK                 = 2,
    ExpectingGetDeviceIdValue               = 3,
    ExpectingSetResolutionDefaultACK        = 4,
    ExpectingSetResolutionDefaultValueACK   = 5,
    ExpectingSetResolutionACK               = 6,
    ExpectingSetResolutionValueACK          = 7,
    ExpectingSetScaling1to1ACK              = 8,
    ExpectingSetScaling1to1ACK2             = 9,
    ExpectingSetScaling1to1ACK3             = 10,
    ExpectingReadMouseStatusACK             = 11,
    ExpectingReadMouseStatusByte1           = 12,
    ExpectingReadMouseStatusByte2           = 13,
    ExpectingReadMouseStatusByte3           = 14,
    StartPnPIdDetection                     = 15,
    ExpectingLoopSetSamplingRateACK         = 16,
    ExpectingLoopSetSamplingRateValueACK    = 17,
    ExpectingPnpIdByte1                     = 18,
    ExpectingPnpIdByte2                     = 19,
    ExpectingPnpIdByte3                     = 20,
    ExpectingPnpIdByte4                     = 21,
    ExpectingPnpIdByte5                     = 22,
    ExpectingPnpIdByte6                     = 23,
    ExpectingPnpIdByte7                     = 24,
    EnableWheel                             = 25,
    Enable5Buttons                          = 26,
    ExpectingGetDeviceId2ACK                = 27,
    ExpectingGetDeviceId2Value              = 28,
    ExpectingSetSamplingRateACK             = 29,
    ExpectingSetSamplingRateValueACK        = 30,
    ExpectingEnableACK                      = 31,
    ExpectingFinalResolutionACK             = 32,
    ExpectingFinalResolutionValueACK        = 33,
    ExpectingGetDeviceIdDetectACK           = 34,
    ExpectingGetDeviceIdDetectValue         = 35,
    CustomHookStateMinimum                  = 100,
    CustomHookStateMaximum                  = 999
} MOUSE_RESET_SUBSTATE;
typedef MOUSE_RESET_SUBSTATE    *PMOUSE_RESET_SUBSTATE;

/* Keyboard scan states */
typedef enum _KEYBOARD_SCAN_STATE {
    Normal  = 0,
    GotE0   = 1,
    GotE1   = 2
} KEYBOARD_SCAN_STATE;
typedef KEYBOARD_SCAN_STATE *PKEYBOARD_SCAN_STATE;

/* I8042 callbacks */
typedef NTSTATUS (NTAPI *PI8042_SYNCH_READ_PORT)( PVOID, PUCHAR, BOOLEAN );
typedef NTSTATUS (NTAPI *PI8042_SYNCH_WRITE_PORT)( PVOID, UCHAR, BOOLEAN );
typedef VOID (NTAPI *PI8042_ISR_WRITE_PORT)( PVOID, UCHAR );
typedef VOID (NTAPI *PI8042_QUEUE_PACKET)( PVOID );
typedef BOOLEAN (NTAPI *PI8042_MOUSE_ISR)( PVOID, PMOUSE_INPUT_DATA, POUTPUT_PACKET, UCHAR, PUCHAR, PBOOLEAN, PMOUSE_STATE, PMOUSE_RESET_SUBSTATE );
typedef NTSTATUS (NTAPI *PI8042_KEYBOARD_INITIALIZATION_ROUTINE)( PVOID, PVOID, PI8042_SYNCH_READ_PORT, PI8042_SYNCH_WRITE_PORT, PBOOLEAN );
typedef BOOLEAN (NTAPI *PI8042_KEYBOARD_ISR)( PVOID, PKEYBOARD_INPUT_DATA, POUTPUT_PACKET, UCHAR, PUCHAR, PBOOLEAN, PKEYBOARD_SCAN_STATE );

/* Internal I8042 hook mouse */
typedef struct _INTERNAL_I8042_HOOK_MOUSE {
    PVOID                   Context;
    PI8042_MOUSE_ISR        IsrRoutine;
    PI8042_ISR_WRITE_PORT   IsrWritePort;
    PI8042_QUEUE_PACKET     QueueMousePacket;
    PVOID                   CallContext;
} INTERNAL_I8042_HOOK_MOUSE;
typedef INTERNAL_I8042_HOOK_MOUSE   *PINTERNAL_I8042_HOOK_MOUSE;

/* Internal I8042 hook keyboard */
typedef struct _INTERNAL_I8042_HOOK_KEYBOARD {
    PVOID                                   Context;
    PI8042_KEYBOARD_INITIALIZATION_ROUTINE  InitializationRoutine;
    PI8042_KEYBOARD_ISR                     IsrRoutine;
    PI8042_ISR_WRITE_PORT                   IsrWritePort;
    PI8042_QUEUE_PACKET                     QueueKeyboardPacket;
    PVOID                                   CallContext;
} INTERNAL_I8042_HOOK_KEYBOARD;
typedef INTERNAL_I8042_HOOK_KEYBOARD    *PINTERNAL_I8042_HOOK_KEYBOARD;

/* Internal I8042 start information */
typedef struct _INTERNAL_I8042_START_INFORMATION {
    ULONG       Size;
    PKINTERRUPT InterruptObject;
    ULONG       Reserved[8];
} INTERNAL_I8042_START_INFORMATION;
typedef INTERNAL_I8042_START_INFORMATION    *PINTERNAL_I8042_START_INFORMATION;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _NTDD8042_ */
