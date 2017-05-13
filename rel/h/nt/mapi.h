/*
 *  mapi.h      Messaging API functions
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

#ifndef MAPI_H
#define MAPI_H

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* MAPI primitive data types */
typedef unsigned long   *LPULONG;
typedef unsigned long   FLAGS;

/* MAPI handle data type */
typedef ULONG_PTR   LHANDLE;
typedef ULONG_PTR   *LPLHANDLE;

/* MAPI handle special value */
#define lhSessionNull   ((LHANDLE)0)

/* MAPI file descriptor flags */
#define MAPI_OLE        0x00000001L
#define MAPI_OLE_STATIC 0x00000002L

/* MAPI recipient classes */
#ifndef MAPI_ORIG
    #define MAPI_ORIG   0L
    #define MAPI_TO     1L
    #define MAPI_CC     2L
    #define MAPI_BCC    3L
#endif

/* MAPI message flags */
#define MAPI_UNREAD             0x00000001L
#define MAPI_RECEIPT_REQUESTED  0x00000002L
#define MAPI_SENT               0x00000004L

/* MAPILogon() flags */
#define MAPI_LOGON_UI       0x00000001L
#define MAPI_NEW_SESSION    0x00000002L
#define MAPI_EXTENDED       0x00000020L
#define MAPI_FORCE_DOWNLOAD 0x00001000L
#define MAPI_PASSWORD_UI    0x00020000L

/* MAPISendMail() flags */
#define MAPI_DIALOG 0x00000008L

/* MAPIFindNext() flags */
#define MAPI_UNREAD_ONLY    0x00000020L
#define MAPI_GUARANTEE_FIFO 0x00000100L
#define MAPI_LONG_MSGID     0x00004000L

/* MAPIReadMail() flags */
#define MAPI_ENVELOPE_ONLY      0x00000040L
#define MAPI_PEEK               0x00000080L
#define MAPI_BODY_AS_FILE       0x00000200L
#define MAPI_SUPPRESS_ATTACH    0x00000800L

/* MAPIDetails() flags */
#define MAPI_AB_NOMODIFY    0x00000400L

/* MAPI error codes */
#ifndef SUCCESS_SUCCESS
    #define SUCCESS_SUCCESS             0L
#endif
#define MAPI_USER_ABORT                 1L
#define MAPI_E_USER_ABORT               MAPI_USER_ABORT
#define MAPI_E_FAILURE                  2L
#define MAPI_E_LOGON_FAILURE            3L
#define MAPI_E_LOGIN_FAILURE            MAPI_E_LOGON_FAILURE
#define MAPI_E_DISK_FULL                4L
#define MAPI_E_INSUFFICIENT_MEMORY      5L
#define MAPI_E_ACCESS_DENIED            6L
#define MAPI_E_TOO_MANY_SESSIONS        8L
#define MAPI_E_TOO_MANY_FILES           9L
#define MAPI_E_TOO_MANY_RECIPIENTS      10L
#define MAPI_E_ATTACHMENT_NOT_FOUND     11L
#define MAPI_E_ATTACHMENT_OPEN_FAILURE  12L
#define MAPI_E_ATTACHMENT_WRITE_FAILURE 13L
#define MAPI_E_UNKNOWN_RECIPIENT        14L
#define MAPI_E_BAD_RECIPTYPE            15L
#define MAPI_E_NO_MESSAGES              16L
#define MAPI_E_INVALID_MESSAGE          17L
#define MAPI_E_TEXT_TOO_LARGE           18L
#define MAPI_E_INVALID_SESSION          19L
#define MAPI_E_TYPE_NOT_SUPPORTED       20L
#define MAPI_E_AMBIGUOUS_RECIPIENT      21L
#define MAPI_E_AMBIG_RECIP              MAPI_E_AMBIGUOUS_RECIPIENT
#define MAPI_E_MESSAGE_IN_USE           22L
#define MAPI_E_NETWORK_FAILURE          23L
#define MAPI_E_INVALID_EDITFIELDS       24L
#define MAPI_E_INVALID_RECIPS           25L
#define MAPI_E_NOT_SUPPORTED            26L

/* MAPI file descriptor */
typedef struct {
    ULONG   ulReserved;
    ULONG   flFlags;
    ULONG   nPosition;
    LPSTR   lpszPathName;
    LPSTR   lpszFileName;
    LPVOID  lpFileType;
} MapiFileDesc;
typedef MapiFileDesc    *lpMapiFileDesc;

/* MAPI file tag extension */
typedef struct {
    ULONG   ulReserved;
    ULONG   cbTag;
    LPBYTE  lpTag;
    ULONG   cbEncoding;
    LPBYTE  lpEncoding;
} MapiFileTagExt;
typedef MapiFileTagExt  *lpMapiFileTagExt;

/* MAPI recipient descriptor */
typedef struct {
    ULONG   ulReserved;
    ULONG   ulRecipClass;
    LPSTR   lpszName;
    LPSTR   lpszAddress;
    ULONG   ulEIDSize;
    LPVOID  lpEntryID;
} MapiRecipDesc;
typedef MapiRecipDesc   *lpMapiRecipDesc;

/* MAPI message */
typedef struct {
    ULONG           ulReserved;
    LPSTR           lpszSubject;
    LPSTR           lpszNoteText;
    LPSTR           lpszMessageType;
    LPSTR           lpszDateReceived;
    LPSTR           lpszConversationID;
    FLAGS           flFlags;
    lpMapiRecipDesc lpOriginator;
    ULONG           nRecipCount;
    lpMapiRecipDesc lpRecips;
    ULONG           nFileCount;
    lpMapiFileDesc  lpFiles;
} MapiMessage;
typedef MapiMessage *lpMapiMessage;

/* Functions in MAPI32.DLL */
ULONG PASCAL    MAPIAddress( LHANDLE, ULONG_PTR, LPSTR, ULONG, LPSTR, ULONG, lpMapiRecipDesc, FLAGS, ULONG, LPULONG, lpMapiRecipDesc * );
ULONG PASCAL    MAPIDeleteMail( LHANDLE, ULONG_PTR, LPSTR, FLAGS, ULONG );
ULONG PASCAL    MAPIDetails( LHANDLE, ULONG_PTR, lpMapiRecipDesc, FLAGS, ULONG );
ULONG PASCAL    MAPIFindNext( LHANDLE, ULONG_PTR, LPSTR, LPSTR, FLAGS, ULONG, LPSTR );
ULONG PASCAL    MAPIFreeBuffer( LPVOID );
ULONG PASCAL    MAPILogoff( LHANDLE, ULONG_PTR, FLAGS, ULONG );
ULONG PASCAL    MAPILogon( ULONG_PTR, LPSTR, LPSTR, FLAGS, ULONG, LPLHANDLE );
ULONG PASCAL    MAPIReadMail( LHANDLE, ULONG_PTR, LPSTR, FLAGS, ULONG, lpMapiMessage * );
ULONG PASCAL    MAPIResolveName( LHANDLE, ULONG_PTR, LPSTR, FLAGS, ULONG, lpMapiRecipDesc * );
ULONG PASCAL    MAPISaveMail( LHANDLE, ULONG_PTR, lpMapiMessage, FLAGS, ULONG, LPSTR );
ULONG PASCAL    MAPISendDocuments( ULONG_PTR, LPSTR, LPSTR, LPSTR, ULONG );
ULONG PASCAL    MAPISendMail( LHANDLE, ULONG_PTR, lpMapiMessage, FLAGS, ULONG );

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MAPI_H */
