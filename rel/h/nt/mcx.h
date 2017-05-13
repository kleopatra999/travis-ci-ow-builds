/*
 *  mcx.h       Modem control extensions
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

#ifndef _MCX_H_
#define _MCX_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Dial options */
#define DIALOPTION_BILLING  0x00000040L
#define DIALOPTION_QUIET    0x00000080L
#define DIALOPTION_DIALTONE 0x00000100L

/* Modem volume flags */
#define MDMVOLFLAG_LOW      0x00000001L
#define MDMVOLFLAG_MEDIUM   0x00000002L
#define MDMVOLFLAG_HIGH     0x00000004L

/* Modem volume values */
#define MDMVOL_LOW      0x00000000L
#define MDMVOL_MEDIUM   0x00000001L
#define MDMVOL_HIGH     0x00000002L

/* Modem speaker flags */
#define MDMSPKRFLAG_OFF         0x00000001L
#define MDMSPKRFLAG_DIAL        0x00000002L
#define MDMSPKRFLAG_ON          0x00000004L
#define MDMSPKRFLAG_CALLSETUP   0x00000008L

/* Modem speaker values */
#define MDMSPKR_OFF         0x00000000L
#define MDMSPKR_DIAL        0x00000001L
#define MDMSPKR_ON          0x00000002L
#define MDMSPKR_CALLSETUP   0x00000003L

/* Modem flags */
#define MDM_COMPRESSION         0x00000001L
#define MDM_ERROR_CONTROL       0x00000002L
#define MDM_FORCED_EC           0x00000004L
#define MDM_CELLULAR            0x00000008L
#define MDM_FLOWCONTROL_HARD    0x00000010L
#define MDM_FLOWCONTROL_SOFT    0x00000020L
#define MDM_CCITT_OVERRIDE      0x00000040L
#define MDM_SPEED_ADJUST        0x00000080L
#define MDM_TONE_DIAL           0x00000100L
#define MDM_BLIND_DIAL          0x00000200L
#define MDM_V23_OVERRIDE        0x00000400L
#define MDM_DIAGNOSTICS         0x00000800L

/* Extended modem option masks */
#define MDM_MASK_BEARERMODE     0x0000F000L
#define MDM_MASK_PROTOCOLID     0x000F0000L
#define MDM_MASK_PROTOCOLDATA   0x0FF00000L
#define MDM_MASK_PROTOCOLINFO   (MDM_MASK_PROTOCOLID | MDM_MASK_PROTOCOLDATA)
#define MDM_MASK_EXTENDEDINFO   (MDM_MASK_BEARERMODE | MDM_MASK_PROTOCOLINFO)

/* Extended modem option shifts */
#define MDM_SHIFT_BEARERMODE    12
#define MDM_SHIFT_PROTOCOLID    16
#define MDM_SHIFT_PROTOCOLDATA  20
#define MDM_SHIFT_PROTOCOLINFO  MDM_SHIFT_PROTOCOLID
#define MDM_SHIFT_EXTENDEDINFO  MDM_SHIFT_BEARERMODE

/* Macros to manipulate extended modem options */
#define MDM_GET_BEARERMODE( x ) \
    (((x) & MDM_MASK_BEARERMODE) >> MDM_SHIFT_BEARERMODE)
#define MDM_SET_BEARERMODE( x, p ) \
    (((x) &= ~MDM_MASK_BEARERMODE), ((x) |= (((p) << MDM_SHIFT_BEARERMODE) & \
    MDM_MASK_BEARERMODE)))
#define MDM_GET_PROTOCOLID( x ) \
    (((x) & MDM_MASK_PROTOCOLID) >> MDM_SHIFT_PROTOCOLID)
#define MDM_SET_PROTOCOLID( x, p ) \
    (((x) &= ~MDM_MASK_PROTOCOLID), ((x) |= (((p) << MDM_SHIFT_PROTOCOLID) & \
    MDM_MASK_PROTOCOLID)))
#define MDM_GET_PROTOCOLDATA( x ) \
    (((x) & MDM_MASK_PROTOCOLDATA) >> MDM_SHIFT_PROTOCOLDATA)
#define MDM_SET_PROTOCOLDATA( x, p ) \
    (((x) &= ~MDM_MASK_PROTOCOLDATA), ((x) |= (((p) << MDM_SHIFT_PROTOCOLDATA) & \
    MDM_MASK_PROTOCOLDATA)))
#define MDM_GET_PROTOCOLINFO( x ) \
    (((x) & MDM_MASK_PROTOCOLINFO) >> MDM_SHIFT_PROTOCOLINFO)
#define MDM_SET_PROTOCOLINFO( x, p ) \
    (((x) &= ~MDM_MASK_PROTOCOLINFO), ((x) |= (((p) << MDM_SHIFT_PROTOCOLINFO) & \
    MDM_MASK_PROTOCOLINFO)))
#define MDM_GEN_PROTOCOLINFO( p1, p2 ) \
    ((((p1) << MDM_SHIFT_PROTOCOLID) & MDM_MASK_PROTOCOLID) | \
    (((p2) << MDM_SHIFT_PROTOCOLDATA) & MDM_MASK_PROTOCOLDATA))
#define MDM_GET_EXTENDEDINFO( x ) \
    ((x) & MDM_MASK_EXTENDEDINFO)
#define MDM_SET_EXTENDEDINFO( x, p ) \
    (((x) &= ~MDM_MASK_EXTENDEDINFO), ((x) |= ((p) & MDM_MASK_EXTENDEDINFO)))
#define MDM_GEN_EXTENDEDINFO( p1, p2 ) \
    (((p2) & MDM_MASK_PROTOCOLINFO) | (((p1) << MDM_SHIFT_BEARERMODE) & \
    MDM_MASK_BEARERMODE))

/* Modem bearer modes */
#define MDM_BEARERMODE_ANALOG   0x0
#define MDM_BEARERMODE_ISDN     0x1
#define MDM_BEARERMODE_GSM      0x2

/* Modem protocol identifiers */
#define MDM_PROTOCOLID_DEFAULT  0x0
#define MDM_PROTOCOLID_HDLCPPP  0x1
#define MDM_PROTOCOLID_V128     0x2
#define MDM_PROTOCOLID_X75      0x3
#define MDM_PROTOCOLID_V110     0x4
#define MDM_PROTOCOLID_V120     0x5
#define MDM_PROTOCOLID_AUTO     0x6
#define MDM_PROTOCOLID_ANALOG   0x7
#define MDM_PROTOCOLID_GPRS     0x8
#define MDM_PROTOCOLID_PIAFS    0x9

/* Modem HDLC PPP option masks */
#define MDM_MASK_HDLCPPP_SPEED  0x00000007L
#define MDM_MASK_HDLCPPP_AUTH   0x00007000L
#define MDM_MASK_HDLCPPP_ML     0x07000000L

/* Modem HDLC PPP option shifts */
#define MDM_SHIFT_HDLCPPP_SPEED 0
#define MDM_SHIFT_HDLCPPP_AUTH  1
#define MDM_SHIFT_HDLCPPP_ML    2

/* Macros to generate HDLC PPP protocol data */
#define MDM_GEN_HDLCPPP_PROTOCOL_DATA( p1, p2, p3 ) \
    ((((p1) << MDM_SHIFT_HDLCPPP_SPEED) & MDM_MASK_HDLCPPP_SPEED) | \
    (((p2) << MDM_SHIFT_HDLCPPP_AUTH) & MDM_MASK_HDLCPPP_AUTH) | \
    (((p3) << MDM_SHIFT_HDLCPPP_ML) & MDM_MASK_HDLCPPP_ML))

/* Modem HDLC PPP speeds */
#define MDM_HDLCPPP_SPEED_DEFAULT   0x0
#define MDM_HDLCPPP_SPEED_64K       0x1
#define MDM_HDLCPPP_SPEED_56K       0x2

/* Modem HDLC PPP authorization values */
#define MDM_HDLCPPP_AUTH_DEFAULT    0x0
#define MDM_HDLCPPP_AUTH_NONE       0x1
#define MDM_HDLCPPP_AUTH_PAP        0x2
#define MDM_HDLCPPP_AUTH_CHAP       0x3
#define MDM_HDLCPPP_AUTH_MSCHAP     0x4

/* Modem HDLC PPP ML values */
#define MDM_HDLCPPP_ML_DEFAULT  0x0
#define MDM_HDLCPPP_ML_NONE     0x1
#define MDM_HDLCPPP_ML_2        0x2

/* Predefined HDLC PPP protocol information values */
#define MDM_PROTOCOL_HDLCPPP_64K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_64K, MDM_HDLCPPP_AUTH_DEFAULT, MDM_HDLCPPP_ML_DEFAULT ) )
#define MDM_PROTOCOL_HDLCPPP_56K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_56K, MDM_HDLCPPP_AUTH_DEFAULT, MDM_HDLCPPP_ML_DEFAULT ) )
#define MDM_PROTOCOL_HDLCPPP_112K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_56K, MDM_HDLCPPP_AUTH_DEFAULT, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_112K_PAP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_56K, MDM_HDLCPPP_AUTH_PAP, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_112K_CHAP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_56K, MDM_HDLCPPP_AUTH_CHAP, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_112K_MSCHAP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_56K, MDM_HDLCPPP_AUTH_MSCHAP, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_128K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_64K, MDM_HDLCPPP_AUTH_DEFAULT, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_128K_PAP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_64K, MDM_HDLCPPP_AUTH_PAP, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_128K_CHAP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_64K, MDM_HDLCPPP_AUTH_CHAP, MDM_HDLCPPP_ML_2 ) )
#define MDM_PROTOCOL_HDLCPPP_128K_MSCHAP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_HDLCPPP, MDM_GEN_HDLCPPP_PROTOCOL_DATA( \
    MDM_HDLCPPP_SPEED_64K, MDM_HDLCPPP_AUTH_MSCHAP, MDM_HDLCPPP_ML_2 ) )

/* Modem V120 option masks */
#define MDM_MASK_V120_SPEED 0x00000007L
#define MDM_MASK_V120_ML    0x03000000L

/* Modem V120 option shifts */
#define MDM_SHIFT_V120_SPEED    0
#define MDM_SHIFT_V120_ML       6

/* Macro to generate V120 protocol data */
#define MDM_GEN_V120_PROTOCOL_DATA( p1, p2 ) \
    ((((p1) << MDM_SHIFT_V120_SPEED) & MDM_MASK_V120_SPEED) | \
    (((p2) << MDM_SHIFT_V120_ML) & MDM_MASK_V120_ML))

/* Modem V120 speeds */
#define MDM_V120_SPEED_DEFAULT  0x0
#define MDM_V120_SPEED_64K      0x1
#define MDM_V120_SPEED_56K      0x2

/* Modem V120 ML values */
#define MDM_V120_ML_DEFAULT 0x0
#define MDM_V120_ML_NONE    0x1
#define MDM_V120_ML_2       0x2

/* Predefined V120 protocol information values */
#define MDM_PROTOCOL_V120_64K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V120, MDM_GEN_V120_PROTOCOL_DATA( \
    MDM_V120_SPEED_64K, MDM_V120_ML_NONE ) )
#define MDM_PROTOCOL_V120_56K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V120, MDM_GEN_V120_PROTOCOL_DATA( \
    MDM_V120_SPEED_56K, MDM_V120_ML_NONE ) )
#define MDM_PROTOCOL_V120_112K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V120, MDM_GEN_V120_PROTOCOL_DATA( \
    MDM_V120_SPEED_56K, MDM_V120_ML_2 ) )
#define MDM_PROTOCOL_V120_128K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V120, MDM_GEN_V120_PROTOCOL_DATA( \
    MDM_V120_SPEED_64K, MDM_V120_ML_2 ) )

/* Modem X75 option masks */
#define MDM_MASK_X75_DATA   0x00000007L

/* Modem X75 option shifts */
#define MDM_SHIFT_X75_DATA  0

/* Macro to generate X75 protocol data */
#define MDM_GEN_X75_PROTOCOL_DATA( x ) \
    (((x) << MDM_SHIFT_X75_DATA) & MDM_MASK_X75_DATA)

/* Modem X75 data values */
#define MDM_X75_DATA_DEFAULT    0x0
#define MDM_X75_DATA_64K        0x1
#define MDM_X75_DATA_128K       0x2
#define MDM_X75_DATA_T_70       0x3
#define MDM_X75_DATA_BTX        0x4

/* Predefined V75 protocol information values */
#define MDM_PROTOCOL_X75_64K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_X75, MDM_GEN_X75_PROTOCOL_DATA( \
    MDM_X75_DATA_64K ) )
#define MDM_PROTOCOL_X75_128K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_X75, MDM_GEN_X75_PROTOCOL_DATA( \
    MDM_X75_DATA_128K ) )
#define MDM_PROTOCOL_X75_T_70 \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_X75, MDM_GEN_X75_PROTOCOL_DATA( \
    MDM_X75_DATA_T_70 ) )
#define MDM_PROTOCOL_X75_BTX \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_X75, MDM_GEN_X75_PROTOCOL_DATA( \
    MDM_X75_DATA_BTX ) )

/* Modem V110 option masks */
#define MDM_MASK_V110_SPEED 0xF

/* Modem V110 option shifts */
#define MDM_SHIFT_V110_SPEED    0

/* Modem V110 speeds */
#define MDM_V110_SPEED_DEFAULT  0x0
#define MDM_V110_SPEED_1DOT2K   0x1
#define MDM_V110_SPEED_2DOT4K   0x2
#define MDM_V110_SPEED_4DOT8K   0x3
#define MDM_V110_SPEED_9DOT6K   0x4
#define MDM_V110_SPEED_12DOT0K  0x5
#define MDM_V110_SPEED_14DOT4K  0x6
#define MDM_V110_SPEED_19DOT2K  0x7
#define MDM_V110_SPEED_28DOT8K  0x8
#define MDM_V110_SPEED_38DOT4K  0x9
#define MDM_V110_SPEED_57DOT6K  0xA

/* Macro to generate V110 protocol data */
#define MDM_GEN_V110_PROTOCOL_DATA( x ) \
    (((x) << MDM_SHIFT_V110_SPEED) & MDM_MASK_V110_SPEED)

/* Predefined V110 protocol information values */
#define MDM_PROTOCOL_V110_1DOT2K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_1DOT2K ) )
#define MDM_PROTOCOL_V110_2DOT4K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_2DOT4K ) )
#define MDM_PROTOCOL_V110_4DOT8K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_4DOT8K ) )
#define MDM_PROTOCOL_V110_9DOT6K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_9DOT9K ) )
#define MDM_PROTOCOL_V110_12DOT0K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_12DOT0K ) )
#define MDM_PROTOCOL_V110_14DOT4K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_14DOT4K ) )
#define MDM_PROTOCOL_V110_19DOT2K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_19DOT2K ) )
#define MDM_PROTOCOL_V110_28DOT8K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_28DOT8K ) )
#define MDM_PROTOCOL_V110_38DOT4K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_38DOT4K ) )
#define MDM_PROTOCOL_V110_57DOT6K \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_V110, MDM_GEN_V110_PROTOCOL_DATA( \
    MDM_V110_SPEED_57DOT6K ) )

/* Modem automatic option masks */
#define MDM_MASK_AUTO_SPEED 0x00000007L
#define MDM_MASK_AUTO_ML    0x03000000L

/* Modem automatic option shifts */
#define MDM_SHIFT_AUTO_SPEED    0
#define MDM_SHIFT_AUTO_ML       6

/* Modem automatic speeds */
#define MDM_AUTO_SPEED_DEFAULT  0x0

/* Modem automatic ML values */
#define MDM_AUTO_ML_DEFAULT 0x0
#define MDM_AUTO_ML_NONE    0x1
#define MDM_AUTO_ML_2       0x2

/* Macro to generate automatic protocol data */
#define MDM_GEN_AUTO_PROTOCOL_DATA( p1, p2 ) \
    ((((p1) << MDM_SHIFT_AUTO_SPEED) & MDM_MASK_AUTO_SPEED) | \
    (((p2) << MDM_SHIFT_AUTO_ML) & MDM_MASK_AUTO_ML))

/* Predefined automatic protocol information values */
#define MDM_PROTOCOL_AUTO_1CH \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_AUTO, MDM_GEN_AUTO_PROTOCOL_DATA( \
    MDM_AUTO_SPEED_DEFAULT, MDM_AUTO_ML_NONE ) )
#define MDM_PROTOCOL_AUTO_2CH \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_AUTO, MDM_GEN_AUTO_PROTOCOL_DATA( \
    MDM_AUTO_SPEED_DEFAULT, MDM_AUTO_ML_2 ) )

/* Modem analog RLP values */
#define MDM_ANALOG_RLP_ON   0x0
#define MDM_ANALOG_RLP_OFF  0x1
#define MDM_ANALOG_V34      0x2

/* Macro to generate analog protocol data */
#define MDM_GEN_ANALOG_PROTOCOL_DATA( x )   (x)

/* Predefined analog protocol information values */
#define MDM_PROTOCOL_ANALOG_RLP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_ANALOG, MDM_GEN_ANALOG_PROTOCOL_DATA( \
    MDM_ANALOG_RLP_ON ) )
#define MDM_PROTOCOL_ANALOG_NRLP \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_ANALOG, MDM_GEN_ANALOG_PROTOCOL_DATA( \
    MDM_ANALOG_RLP_OFF ) )
#define MDM_PROTOCOL_ANALOG_V34 \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_ANALOG, MDM_GEN_ANALOG_PROTOCOL_DATA( \
    MDM_ANALOG_V34 ) )

/* Predefined GPRS protocol information values */
#define MDM_PROTOCOL_GPRS   MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_GPRS, 0 )

/* Modem PIAFS protocol data values */
#define MDM_PIAFS_INCOMING  0
#define MDM_PIAFS_OUTGOING  1

/* Predefined PIAFS protocol information values */
#define MDM_PROTOCOL_PIAFS_INCOMING \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_PIAFS, MDM_PIAFS_INCOMING )
#define MDM_PROTOCOL_PIAFS_OUTGOING \
    MDM_GEN_PROTOCOLINFO( MDM_PROTOCOLID_PIAFS, MDM_PIAFS_OUTGOING )

/* Modem device capabilities */
typedef struct _MODEMDEVCAPS {
    DWORD   dwActualSize;
    DWORD   dwRequiredSize;
    DWORD   dwDevSpecificOffset;
    DWORD   dwDevSpecificSize;
    DWORD   dwModemProviderVersion;
    DWORD   dwModemManufacturerOffset;
    DWORD   dwModemManufacturerSize;
    DWORD   dwModemModelOffset;
    DWORD   dwModemModelSize;
    DWORD   dwModemVersionOffset;
    DWORD   dwModemVersionSize;
    DWORD   dwDialOptions;
    DWORD   dwCallSetupFailTimer;
    DWORD   dwInactivityTimeout;
    DWORD   dwSpeakerVolume;
    DWORD   dwSpeakerMode;
    DWORD   dwModemOptions;
    DWORD   dwMaxDTERate;
    DWORD   dwMaxDCERate;
    BYTE    abVariablePortion[1];
} MODEMDEVCAPS;
typedef MODEMDEVCAPS    *PMODEMDEVCAPS;
typedef MODEMDEVCAPS    *LPMODEMDEVCAPS;

/* Modem settings */
typedef struct _MODEMSETTINGS {
    DWORD   dwActualSize;
    DWORD   dwRequiredSize;
    DWORD   dwDevSpecificOffset;
    DWORD   dwDevSpecificSize;
    DWORD   dwCallSetupFailTimer;
    DWORD   dwInactivityTimeout;
    DWORD   dwSpeakerVolume;
    DWORD   dwSpeakerMode;
    DWORD   dwPreferredModemOptions;
    DWORD   dwNegotiatedModemOptions;
    DWORD   dwNegotiatedDCERate;
    BYTE    abVariablePortion[1];
} MODEMSETTINGS;
typedef MODEMSETTINGS   *PMODEMSETTINGS;
typedef MODEMSETTINGS   *LPMODEMSETTINGS;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _MCX_H_ */
