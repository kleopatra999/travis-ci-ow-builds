/*
 *  aclapi.h    Access control functions
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

#ifndef __ACCESS_CONTROL_API__
#define __ACCESS_CONTROL_API__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <windows.h>
#include <accctrl.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Progress callback function */
typedef VOID (*FN_PROGRESS)( LPWSTR, DWORD, PPROG_INVOKE_SETTING, PVOID, BOOL );

/* Functions in ADVAPI32.DLL */
WINADVAPI VOID WINAPI           BuildExplicitAccessWithNameA( PEXPLICIT_ACCESS_A, LPSTR, DWORD, ACCESS_MODE, DWORD );
WINADVAPI VOID WINAPI           BuildExplicitAccessWithNameW( PEXPLICIT_ACCESS_W, LPWSTR, DWORD, ACCESS_MODE, DWORD );
WINADVAPI VOID WINAPI           BuildImpersonateExplicitAccessWithNameA( PEXPLICIT_ACCESS_A, LPSTR, PTRUSTEE_A, DWORD, ACCESS_MODE, DWORD );
WINADVAPI VOID WINAPI           BuildImpersonateExplicitAccessWithNameW( PEXPLICIT_ACCESS_W, LPWSTR, PTRUSTEE_W, DWORD, ACCESS_MODE, DWORD );
WINADVAPI VOID WINAPI           BuildImpersonateTrusteeA( PTRUSTEE_A, PTRUSTEE_A );
WINADVAPI VOID WINAPI           BuildImpersonateTrusteeW( PTRUSTEE_W, PTRUSTEE_W );
WINADVAPI DWORD WINAPI          BuildSecurityDescriptorA( PTRUSTEE_A, PTRUSTEE_A, ULONG, PEXPLICIT_ACCESS_A, ULONG, PEXPLICIT_ACCESS_A, PSECURITY_DESCRIPTOR, PULONG, PSECURITY_DESCRIPTOR * );
WINADVAPI DWORD WINAPI          BuildSecurityDescriptorW( PTRUSTEE_W, PTRUSTEE_W, ULONG, PEXPLICIT_ACCESS_W, ULONG, PEXPLICIT_ACCESS_W, PSECURITY_DESCRIPTOR, PULONG, PSECURITY_DESCRIPTOR * );
WINADVAPI VOID WINAPI           BuildTrusteeWithNameA( PTRUSTEE_A, LPSTR );
WINADVAPI VOID WINAPI           BuildTrusteeWithNameW( PTRUSTEE_W, LPWSTR );
WINADVAPI VOID WINAPI           BuildTrusteeWithObjectsAndNameA( PTRUSTEE_A, POBJECTS_AND_NAME_A, SE_OBJECT_TYPE, LPSTR, LPSTR, LPSTR );
WINADVAPI VOID WINAPI           BuildTrusteeWithObjectsAndNameW( PTRUSTEE_W, POBJECTS_AND_NAME_W, SE_OBJECT_TYPE, LPWSTR, LPWSTR, LPWSTR );
WINADVAPI VOID WINAPI           BuildTrusteeWithObjectsAndSidA( PTRUSTEE_A, POBJECTS_AND_SID, GUID *, GUID *, PSID );
WINADVAPI VOID WINAPI           BuildTrusteeWithObjectsAndSidW( PTRUSTEE_W, POBJECTS_AND_SID, GUID *, GUID *, PSID );
WINADVAPI VOID WINAPI           BuildTrusteeWithSidA( PTRUSTEE_A, PSID );
WINADVAPI VOID WINAPI           BuildTrusteeWithSidW( PTRUSTEE_W, PSID );
WINADVAPI DWORD WINAPI          FreeInheritedFromArray( PINHERITED_FROMW, USHORT, PFN_OBJECT_MGR_FUNCTS );
WINADVAPI DWORD WINAPI          GetAuditedPermissionsFromAclA( PACL, PTRUSTEE_A, PACCESS_MASK, PACCESS_MASK );
WINADVAPI DWORD WINAPI          GetAuditedPermissionsFromAclW( PACL, PTRUSTEE_W, PACCESS_MASK, PACCESS_MASK );
WINADVAPI DWORD WINAPI          GetEffectiveRightsFromAclA( PACL, PTRUSTEE_A, PACCESS_MASK );
WINADVAPI DWORD WINAPI          GetEffectiveRightsFromAclW( PACL, PTRUSTEE_W, PACCESS_MASK );
WINADVAPI DWORD WINAPI          GetExplicitEntriesFromAclA( PACL, PULONG, PEXPLICIT_ACCESS_A * );
WINADVAPI DWORD WINAPI          GetExplicitEntriesFromAclW( PACL, PULONG, PEXPLICIT_ACCESS_W * );
WINADVAPI DWORD WINAPI          GetInheritanceSourceA( LPSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, BOOL, GUID **, DWORD, PACL, PFN_OBJECT_MGR_FUNCTS, PGENERIC_MAPPING, PINHERITED_FROMA );
WINADVAPI DWORD WINAPI          GetInheritanceSourceW( LPWSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, BOOL, GUID **, DWORD, PACL, PFN_OBJECT_MGR_FUNCTS, PGENERIC_MAPPING, PINHERITED_FROMW );
WINADVAPI PTRUSTEE_A WINAPI     GetMultipleTrusteeA( PTRUSTEE_A );
WINADVAPI MULTIPLE_TRUSTEE_OPERATION WINAPI GetMultipleTrusteeOperationA( PTRUSTEE_A );
WINADVAPI MULTIPLE_TRUSTEE_OPERATION WINAPI GetMultipleTrusteeOperationW( PTRUSTEE_W );
WINADVAPI PTRUSTEE_W WINAPI     GetMultipleTrusteeW( PTRUSTEE_W );
WINADVAPI DWORD WINAPI          GetNamedSecurityInfoA( LPCSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, const PSID *, const PSID *, const PACL *, const PACL *, PSECURITY_DESCRIPTOR * );
WINADVAPI DWORD WINAPI          GetNamedSecurityInfoW( LPCWSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, const PSID *, const PSID *, const PACL *, const PACL *, PSECURITY_DESCRIPTOR * );
WINADVAPI DWORD WINAPI          GetSecurityInfo( HANDLE, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID *, PSID *, PACL *, PACL *, PSECURITY_DESCRIPTOR * );
WINADVAPI TRUSTEE_FORM WINAPI   GetTrusteeFormA( PTRUSTEE_A );
WINADVAPI TRUSTEE_FORM WINAPI   GetTrusteeFormW( PTRUSTEE_W );
WINADVAPI LPSTR WINAPI          GetTrusteeNameA( PTRUSTEE_A );
WINADVAPI LPWSTR WINAPI         GetTrusteeNameW( PTRUSTEE_W );
WINADVAPI TRUSTEE_TYPE WINAPI   GetTrusteeTypeA( PTRUSTEE_A );
WINADVAPI TRUSTEE_TYPE WINAPI   GetTrusteeTypeW( PTRUSTEE_W );
WINADVAPI DWORD WINAPI          LookupSecurityDescriptorPartsA( PTRUSTEE_A *, PTRUSTEE_A *, PULONG, PEXPLICIT_ACCESS_A *, PULONG, PEXPLICIT_ACCESS_A *, PSECURITY_DESCRIPTOR );
WINADVAPI DWORD WINAPI          LookupSecurityDescriptorPartsW( PTRUSTEE_W *, PTRUSTEE_W *, PULONG, PEXPLICIT_ACCESS_W *, PULONG, PEXPLICIT_ACCESS_W *, PSECURITY_DESCRIPTOR );
WINADVAPI DWORD WINAPI          SetEntriesInAclA( ULONG, PEXPLICIT_ACCESS_A, PACL, PACL * );
WINADVAPI DWORD WINAPI          SetEntriesInAclW( ULONG, PEXPLICIT_ACCESS_W, PACL, PACL * );
WINADVAPI DWORD WINAPI          SetNamedSecurityInfoA( LPSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL );
WINADVAPI DWORD WINAPI          SetNamedSecurityInfoW( LPWSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL );
WINADVAPI DWORD WINAPI          SetSecurityInfo( HANDLE, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL );
WINADVAPI DWORD WINAPI          TreeResetNamedSecurityInfoA( LPSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL, BOOL, FN_PROGRESS, PROG_INVOKE_SETTING, PVOID );
WINADVAPI DWORD WINAPI          TreeResetNamedSecurityInfoW( LPWSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL, BOOL, FN_PROGRESS, PROG_INVOKE_SETTING, PVOID );
#if (NTDDI_VERSION >= 0x06000000)
WINADVAPI DWORD WINAPI          TreeSetNamedSecurityInfoA( LPSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL, DWORD, FN_PROGRESS, PROG_INVOKE_SETTING, PVOID );
WINADVAPI DWORD WINAPI          TreeSetNamedSecurityInfoW( LPWSTR, SE_OBJECT_TYPE, SECURITY_INFORMATION, PSID, PSID, PACL, PACL, DWORD, FN_PROGRESS, PROG_INVOKE_SETTING, PVOID );
#endif

/* Functions implemented as macros */
#define AccProvInit( x )

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #define BuildExplicitAccessWithName             BuildExplicitAccessWithNameW
    #define BuildImpersonateExplicitAccessWithName  BuildImpersonateExplicitAccessWithNameW
    #define BuildImpersonateTrustee                 BuildImpersonateTrusteeW
    #define BuildSecurityDescriptor                 BuildSecurityDescriptorW
    #define BuildTrusteeWithName                    BuildTrusteeWithNameW
    #define BuildTrusteeWithObjectsAndName          BuildTrusteeWithObjectsAndNameW
    #define BuildTrusteeWithObjectsAndSid           BuildTrusteeWithObjectsAndSidW
    #define BuildTrusteeWithSid                     BuildTrusteeWithSidW
    #define GetAuditedPermissionsFromAcl            GetAuditedPermissionsFromAclW
    #define GetEffectiveRightsFromAcl               GetEffectiveRightsFromAclW
    #define GetExplicitEntriesFromAcl               GetExplicitEntriesFromAclW
    #define GetInheritanceSource                    GetInheritanceSourceW
    #define GetMultipleTrustee                      GetMultipleTrusteeW
    #define GetMultipleTrusteeOperation             GetMultipleTrusteeOperationW
    #define GetNamedSecurityInfo                    GetNamedSecurityInfoW
    #define GetTrusteeForm                          GetTrusteeFormW
    #define GetTrusteeName                          GetTrusteeNameW
    #define GetTrusteeType                          GetTrusteeTypeW
    #define LookupSecurityDescriptorParts           LookupSecurityDescriptorPartsW
    #define SetEntriesInAcl                         SetEntriesInAclW
    #define SetNamedSecurityInfo                    SetNamedSecurityInfoW
    #define TreeResetNamedSecurityInfo              TreeResetNamedSecurityInfoW
    #define TreeSetNamedSecurityInfo                TreeSetNamedSecurityInfoW
#else
    #define BuildExplicitAccessWithName             BuildExplicitAccessWithNameA
    #define BuildImpersonateExplicitAccessWithName  BuildImpersonateExplicitAccessWithNameA
    #define BuildImpersonateTrustee                 BuildImpersonateTrusteeA
    #define BuildSecurityDescriptor                 BuildSecurityDescriptorA
    #define BuildTrusteeWithName                    BuildTrusteeWithNameA
    #define BuildTrusteeWithObjectsAndName          BuildTrusteeWithObjectsAndNameA
    #define BuildTrusteeWithObjectsAndSid           BuildTrusteeWithObjectsAndSidA
    #define BuildTrusteeWithSid                     BuildTrusteeWithSidA
    #define GetAuditedPermissionsFromAcl            GetAuditedPermissionsFromAclA
    #define GetEffectiveRightsFromAcl               GetEffectiveRightsFromAclA
    #define GetExplicitEntriesFromAcl               GetExplicitEntriesFromAclA
    #define GetInheritanceSource                    GetInheritanceSourceA
    #define GetMultipleTrustee                      GetMultipleTrusteeA
    #define GetMultipleTrusteeOperation             GetMultipleTrusteeOperationA
    #define GetNamedSecurityInfo                    GetNamedSecurityInfoA
    #define GetTrusteeForm                          GetTrusteeFormA
    #define GetTrusteeName                          GetTrusteeNameA
    #define GetTrusteeType                          GetTrusteeTypeA
    #define LookupSecurityDescriptorParts           LookupSecurityDescriptorPartsA
    #define SetEntriesInAcl                         SetEntriesInAclA
    #define SetNamedSecurityInfo                    SetNamedSecurityInfoA
    #define TreeResetNamedSecurityInfo              TreeResetNamedSecurityInfoA
    #define TreeSetNamedSecurityInfo                TreeSetNamedSecurityInfoA
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __ACCESS_CONTROL_API__ */
