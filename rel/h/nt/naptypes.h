/*
 *  naptypes.h  Network Access Protection (NAP) data types
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

#ifndef __naptypes_h__
#define __naptypes_h__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Probation time data type */
typedef FILETIME    ProbationTime;

/* Component and entity identifier data types */
typedef UINT32          NapComponentId;
typedef NapComponentId  SystemHealthEntityId;
typedef NapComponentId  EnforcementEntityId;

/* Entity count data types */
typedef UINT16  SystemHealthEntityCount;
typedef UINT16  EnforcementEntityCount;

/* Connection identifier data type */
typedef GUID    ConnectionId;

/* Percentage data type */
typedef UINT8   Percentage;

/* Message identifier data type */
typedef UINT32  MessageId;

/* NAP constants */
#define maxSoHAttributeCount            100
#define maxSoHAttributeSize             4000
#define minNetworkSoHSize               12
#define maxNetworkSoHSize               4000
#define maxDwordCountPerSoHAttribute    (maxSoHAttributeSize / sizeof( DWORD ))
#define maxIpv4CountPerSoHAttribute     (maxSoHAttributeSize / 4)
#define maxIpv6CountPerSoHAttribute     (maxSoHAttributeSize / 16)
#define maxStringLength                 1024
#define maxStringLengthInBytes          ((maxStringLength + 1) * sizeof( WCHAR ))
#define maxSystemHealthEntityCount      20
#define maxEnforcerCount                20
#define maxPrivateDataSize              200
#define maxConnectionCountPerEnforcer   20
#define maxCachedSoHCount \
    (maxSystemHealthEntityCount * maxEnforcerCount * maxConnectionCountPerEnforcer)
#define freshSoHRequest                 0x01
#define shaFixup                        0x01
#define failureCategoryCount            5
#define percentageNotSupported          101

/* Component types */
#define ComponentTypeEnforcementClientSoH   0x00000001
#define ComponentTypeEnforcementClientRp    0x00000002

/* Isolation states */
typedef enum tagIsolationState {
    isolationStateNotRestricted     = 1,
    isolationStateInProbation       = 2,
    isolationStateRestrictedAccess  = 3
} IsolationState;

/* Extended isolation states */
typedef enum tagExtendedIsolationState {
    extendedIsolationStateNoData        = 0x00,
    extendedIsolationStateTransition    = 0x01,
    extendedIsolationStateInfected      = 0x02,
    extendedIsolationStateUnknown       = 0x03
} ExtendedIsolationState;

/* NAP tracing levels */
typedef enum tagNapTracingLevel {
    tracingLevelUndefined   = 0,
    tracingLevelBasic       = 1,
    tracingLevelAdvanced    = 2,
    tracingLevelDebug       = 3
} NapTracingLevel;

/* Counted string */
typedef struct tagCountedString {
    UINT16  length;
    WCHAR   *string;
} CountedString;
typedef CountedString   StringCorrelationId;

/* Isolation information */
typedef struct tagIsolationInfo {
    IsolationState  isolationState;
    ProbationTime   probEndTime;
    CountedString   failureUrl;
} IsolationInfo;

/* Isolation information (extended version) */
typedef struct tagIsolationInfoEx {
    IsolationState          isolationState;
    ExtendedIsolationState  extendedIsolationState;
    ProbationTime           probEndTime;
    CountedString           failureUrl;
} IsolationInfoEx;

/* Failure categories */
typedef enum tagFailureCategory {
    failureCategoryNone                 = 0,
    failureCategoryOther                = 1,
    failureCategoryClientComponent      = 2,
    failureCategoryClientCommunication  = 3,
    failureCategoryServerComponent      = 4,
    failureCategoryServerCommunication  = 5
} FailureCategory;

/* Failure category mapping */
typedef struct tagFailureCategoryMapping {
    BOOL    mappingCompliance[failureCategoryCount];
} FailureCategoryMapping;

/* Correlation identifier */
typedef struct tagCorrelationId {
    GUID        connId;
    FILETIME    timeStamp;
} CorrelationId;

/* Result codes */
typedef struct tagResultCodes {
    UINT16  count;
    HRESULT *results;
} ResultCodes;

/* IPv4 address */
typedef struct tagIpv4Address {
    BYTE    addr[4];
} Ipv4Address;

/* IPv6 address */
typedef struct tagIpv6Address {
    BYTE    addr[16];
} Ipv6Address;

/* Fixup states */
typedef enum tagFixupState {
    fixupStateSuccess           = 0,
    fixupStateInProgress        = 1,
    fixupStateCouldNotUpdate    = 2
} FixupState;

/* Fixup information */
typedef struct tagFixupInfo {
    FixupState  state;
    Percentage  percentage;
    ResultCodes resultCodes;
    MessageId   fixupMsgId;
} FixupInfo;

/* NAP notification types */
typedef enum tagNapNotifyType {
    napNotifyTypeUnknown        = 0,
    napNotifyTypeServiceState   = 1,
    napNotifyTypeQuarState      = 2
} NapNotifyType;

/* System health agent state */
typedef struct tagSystemHealthAgentState {
    SystemHealthEntityId    id;
    ResultCodes             shaResultCodes;
    FailureCategory         failureCategory;
    FixupInfo               fixupInfo;
} SystemHealthAgentState;

/* SoH attribute */
typedef struct tagSoHAttribute {
    UINT16  type;
    UINT16  size;
    BYTE    *value;
} SoHAttribute;

/* SoH request */
typedef struct tagSoH {
    UINT16          count;
    SoHAttribute    *attributes;
} SoH;
typedef SoH SoHRequest;
typedef SoH SoHResponse;

/* Network SoH request */
typedef struct tagNetworkSoH {
    UINT16  size;
    BYTE    *data;
} NetworkSoH;
typedef NetworkSoH  NetworkSoHRequest;
typedef NetworkSoH  NetworkSoHResponse;

/* Private data */
typedef struct tagPrivateData {
    UINT16  size;
    BYTE    *data;
} PrivateData;

/* NAP component registration information */
typedef struct tagNapComponentRegistrationInfo {
    NapComponentId  id;
    CountedString   friendlyName;
    CountedString   description;
    CountedString   version;
    CountedString   vendorName;
    CLSID           infoClsid;
    CLSID           configClsid;
    FILETIME        registrationDate;
    UINT32          componentType;
} NapComponentRegistrationInfo;

/* Remote configuration types */
typedef enum tagRemoteConfigurationType {
    remoteConfigTypeMachine     = 1,
    remoteConfigTypeConfigBlob  = 2
} RemoteConfigurationType;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __naptypes_h__ */
