/*
 *  htmlhelp.h  HTML Help functions
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

#ifndef __HTMLHELP_H__
#define __HTMLHELP_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* HTML Help primitive data types */
typedef DWORD       HH_INFOTYPE;
typedef HH_INFOTYPE *PHH_INFOTYPE;

/* HTML Help commands */
#define HH_DISPLAY_TOPIC        0x0000
#define HH_HELP_FINDER          0x0000
#define HH_DISPLAY_TOC          0x0001
#define HH_DISPLAY_INDEX        0x0002
#define HH_DISPLAY_SEARCH       0x0003
#define HH_SET_WIN_TYPE         0x0004
#define HH_GET_WIN_TYPE         0x0005
#define HH_GET_WIN_HANDLE       0x0006
#define HH_ENUM_INFO_TYPE       0x0007
#define HH_SET_INFO_TYPE        0x0008
#define HH_SYNC                 0x0009
#define HH_KEYWORD_LOOKUP       0x000D
#define HH_DISPLAY_TEXT_POPUP   0x000E
#define HH_HELP_CONTEXT         0x000F
#define HH_TP_HELP_CONTEXTMENU  0x0010
#define HH_TP_HELP_WM_HELP      0x0011
#define HH_CLOSE_ALL            0x0012
#define HH_ALINK_LOOKUP         0x0013
#define HH_GET_LAST_ERROR       0x0014
#define HH_ENUM_CATEGORY        0x0015
#define HH_ENUM_CATEGORY_IT     0x0016
#define HH_RESET_IT_FILTER      0x0017
#define HH_SET_INCLUSIVE_FILTER 0x0018
#define HH_SET_EXCLUSIVE_FILTER 0x0019
#define HH_INITIALIZE           0x001C
#define HH_UNINITIALIZE         0x001D
#define HH_SET_QUERYSERVICE     0x001E
#define HH_PRETRANSLATEMESSAGE  0x00FD
#define HH_SET_GLOBAL_PROPERTY  0x00FC
#define HH_SAFE_DISPLAY_TOPIC   0x0020

/* HTML Help window properties */
#define HHWIN_PROP_TAB_AUTOHIDESHOW 0x00000001L
#define HHWIN_PROP_TAB_ONTOP        0x00000002L
#define HHWIN_PROP_NOTITLEBAR       0x00000004L
#define HHWIN_PROP_NODEF_STYLES     0x00000008L
#define HHWIN_PROP_NODEF_EXSTYLES   0x00000010L
#define HHWIN_PROP_TRI_PANE         0x00000020L
#define HHWIN_PROP_NOTB_TEXT        0x00000040L
#define HHWIN_PROP_POST_QUIT        0x00000080L
#define HHWIN_PROP_AUTO_SYNC        0x00000100L
#define HHWIN_PROP_TRACKING         0x00000200L
#define HHWIN_PROP_TAB_SEARCH       0x00000400L
#define HHWIN_PROP_TAB_HISTORY      0x00000800L
#define HHWIN_PROP_TAB_FAVORITES    0x00001000L
#define HHWIN_PROP_CHANGE_TITLE     0x00002000L
#define HHWIN_PROP_NAV_ONLY_WIN     0x00004000L
#define HHWIN_PROP_NO_TOOLBAR       0x00008000L
#define HHWIN_PROP_MENU             0x00010000L
#define HHWIN_PROP_TAB_ADVSEARCH    0x00020000L
#define HHWIN_PROP_USER_POS         0x00040000L
#define HHWIN_PROP_TAB_CUSTOM1      0x00080000L
#define HHWIN_PROP_TAB_CUSTOM2      0x00100000L
#define HHWIN_PROP_TAB_CUSTOM3      0x00200000L
#define HHWIN_PROP_TAB_CUSTOM4      0x00400000L
#define HHWIN_PROP_TAB_CUSTOM5      0x00800000L
#define HHWIN_PROP_TAB_CUSTOM6      0x01000000L
#define HHWIN_PROP_TAB_CUSTOM7      0x02000000L
#define HHWIN_PROP_TAB_CUSTOM8      0x04000000L
#define HHWIN_PROP_TAB_CUSTOM9      0x08000000L
#define HHWIN_TB_MARGIN             0x10000000L

/* HTML Help window parameters */
#define HHWIN_PARAM_PROPERTIES      0x00000002L
#define HHWIN_PARAM_STYLES          0x00000004L
#define HHWIN_PARAM_EXSTYLES        0x00000008L
#define HHWIN_PARAM_RECT            0x00000010L
#define HHWIN_PARAM_NAV_WIDTH       0x00000020L
#define HHWIN_PARAM_SHOWSTATE       0x00000040L
#define HHWIN_PARAM_INFOTYPES       0x00000080L
#define HHWIN_PARAM_TB_FLAGS        0x00000100L
#define HHWIN_PARAM_EXPANSION       0x00000200L
#define HHWIN_PARAM_TABPOS          0x00000400L
#define HHWIN_PARAM_TABORDER        0x00000800L
#define HHWIN_PARAM_HISTORY_COUNT   0x00001000L
#define HHWIN_PARAM_CUR_TAB         0x00002000L

/* HTML Help window buttons */
#define HHWIN_BUTTON_EXPAND     0x00000002
#define HHWIN_BUTTON_BACK       0x00000004
#define HHWIN_BUTTON_FORWARD    0x00000008
#define HHWIN_BUTTON_STOP       0x00000010
#define HHWIN_BUTTON_REFRESH    0x00000020
#define HHWIN_BUTTON_HOME       0x00000040
#define HHWIN_BUTTON_BROWSE_FWD 0x00000080
#define HHWIN_BUTTON_BROWSE_BCK 0x00000100
#define HHWIN_BUTTON_NOTES      0x00000200
#define HHWIN_BUTTON_CONTENTS   0x00000400
#define HHWIN_BUTTON_SYNC       0x00000800
#define HHWIN_BUTTON_OPTIONS    0x00001000
#define HHWIN_BUTTON_PRINT      0x00002000
#define HHWIN_BUTTON_INDEX      0x00004000
#define HHWIN_BUTTON_SEARCH     0x00008000
#define HHWIN_BUTTON_HISTORY    0x00010000
#define HHWIN_BUTTON_FAVORITES  0x00020000
#define HHWIN_BUTTON_JUMP1      0x00040000
#define HHWIN_BUTTON_JUMP2      0x00080000
#define HHWIN_BUTTON_ZOOM       0x00100000
#define HHWIN_BUTTON_TOC_NEXT   0x00200000
#define HHWIN_BUTTON_TOC_PREV   0x00400000
#define HHWIN_DEF_BUTTONS \
    (HHWIN_BUTTON_EXPAND | HHWIN_BUTTON_BACK | HHWIN_BUTTON_OPTIONS | HHWIN_BUTTON_PRINT)

/* Button identifiers */
#define IDTB_EXPAND         200
#define IDTB_CONTRACT       201
#define IDTB_STOP           202
#define IDTB_REFRESH        203
#define IDTB_BACK           204
#define IDTB_HOME           205
#define IDTB_SYNC           206
#define IDTB_PRINT          207
#define IDTB_OPTIONS        208
#define IDTB_FORWARD        209
#define IDTB_NOTES          210
#define IDTB_BROWSE_FWD     211
#define IDTB_BROWSE_BACK    212
#define IDTB_CONTENTS       213
#define IDTB_INDEX          214
#define IDTB_SEARCH         215
#define IDTB_HISTORY        216
#define IDTB_FAVORITES      217
#define IDTB_JUMP1          218
#define IDTB_JUMP2          219
#define IDTB_CUSTOMIZE      221
#define IDTB_ZOOM           222
#define IDTB_TOC_NEXT       223
#define IDTB_TOC_PREV       224

/* HTML Help notifications */
#define HHN_FIRST           (0U - 860U)
#define HHN_LAST            (0U - 879U)
#define HHN_NAVCOMPLETE     (HHN_FIRST - 0)
#define HHN_TRACK           (HHN_FIRST - 1)
#define HHN_WINDOW_CREATE   (HHN_FIRST - 2)

/* Maximum number of tabs */
#define HH_MAX_TABS 19

/* HTML Help full text search default proximity */
#define HH_FTS_DEFAULT_PROXIMITY    (-1)

/* HtmlHelp() function ordinals */
#define ATOM_HTMLHELP_API_ANSI      ((LPTSTR)(DWORD)(WORD)14)
#define ATOM_HTMLHELP_API_UNICODE   ((LPTSTR)(DWORD)(WORD)15)

/* HTML Help notification parameters */
typedef struct tagHHN_NOTIFY {
    NMHDR   hdr;
    PCSTR   pszUrl;
} HHN_NOTIFY;

/* HTML Help popup information */
typedef struct tagHH_POPUP {
    int         cbStruct;
    HINSTANCE   hinst;
    UINT        idString;
    LPCTSTR     pszText;
    POINT       pt;
    COLORREF    clrForeground;
    COLORREF    clrBackground;
    RECT        rcMargins;
    LPCTSTR     pszFont;
} HH_POPUP;

/* HTML Help associative keyword link */
typedef struct tagHH_AKLINK {
    int     cbStruct;
    BOOL    fReserved;
    LPCTSTR pszKeywords;
    LPCTSTR pszUrl;
    LPCTSTR pszMsgText;
    LPCTSTR pszMsgTitle;
    LPCTSTR pszWindow;
    BOOL    fIndexOnFail;
} HH_AKLINK;

/* HTML Help window navigation types */
enum {
    HHWIN_NAVTYPE_TOC           = 0,
    HHWIN_NAVTYPE_INDEX         = 1,
    HHWIN_NAVTYPE_SEARCH        = 2,
    HHWIN_NAVTYPE_FAVORITES     = 3,
    HHWIN_NAVTYPE_HISTORY       = 4,
    HHWIN_NAVTYPE_AUTHOR        = 5,
    HHWIN_NAVTYPE_CUSTOM_FIRST  = 11
};

/* Information types */
enum {
    IT_INCLUSIVE    = 0,
    IT_EXCLUSIVE    = 1,
    IT_HIDDEN       = 2
};

/* HTML Help information type enumeration data */
typedef struct tagHH_ENUM_IT {
    int     cbStruct;
    int     iType;
    LPCSTR  pszCatName;
    LPCSTR  pszITName;
    LPCSTR  pszITDescription;
} HH_ENUM_IT;
typedef HH_ENUM_IT  *PHH_ENUM_IT;

/* HTML Help category enumeration data */
typedef struct tagHH_ENUM_CAT {
    int     cbStruct;
    LPCSTR  pszCatName;
    LPCSTR  pszCatDescription;
} HH_ENUM_CAT;
typedef HH_ENUM_CAT *PHH_ENUM_CAT;

/* HTML Help set information type data */
typedef struct tagHH_SET_INFOTYPE {
    int     cbStruct;
    LPCSTR  pszCatName;
    LPCSTR  pszInfoTypeName;
} HH_SET_INFOTYPE;
typedef HH_SET_INFOTYPE *PHH_SET_INFOTYPE;

/* HTML Help window navigation tab positions */
enum {
    HHWIN_NAVTAB_TOP    = 0,
    HHWIN_NAVTAB_LEFT   = 1,
    HHWIN_NAVTAB_BOTTOM = 2
};

/* HTML Help tabs */
enum {
    HH_TAB_CONTENTS     = 0,
    HH_TAB_INDEX        = 1,
    HH_TAB_SEARCH       = 2,
    HH_TAB_FAVORITES    = 3,
    HH_TAB_HISTORY      = 4,
    HH_TAB_AUTHOR       = 5,
    HH_TAB_CUSTOM_FIRST = 11,
    HH_TAB_CUSTOM_LAST  = HH_MAX_TABS
};
#define HH_MAX_TABS_CUSTOM  (HH_TAB_CUSTOM_LAST - HH_TAB_CUSTOM_FIRST + 1)

/* HTML Help full text search query */
typedef struct tagHH_FTS_QUERY {
    int     cbStruct;
    BOOL    fUnicodeStrings;
    LPCTSTR pszSearchQuery;
    LONG    iProximity;
    BOOL    fStemmedSearch;
    BOOL    fTitleOnly;
    BOOL    fExecute;
    LPCTSTR pszWindow;
} HH_FTS_QUERY;

/* HTML Help window type */
typedef struct tagHH_WINTYPE {
    int         cbStruct;
    BOOL        fUnicodeStrings;
    LPCTSTR     pszType;
    DWORD       fsValidMembers;
    DWORD       fsWinProperties;
    LPCTSTR     pszCaption;
    DWORD       dwStyles;
    DWORD       dwExStyles;
    RECT        rcWindowPos;
    int         nShowState;
    HWND        hwndHelp;
    HWND        hwndCaller;
    HH_INFOTYPE *paInfoTypes;
    HWND        hwndToolBar;
    HWND        hwndNavigation;
    HWND        hwndHTML;
    int         iNavWidth;
    RECT        rcHTML;
    LPCTSTR     pszToc;
    LPCTSTR     pszIndex;
    LPCTSTR     pszFile;
    LPCTSTR     pszHome;
    DWORD       fsToolBarFlags;
    BOOL        fNotExpanded;
    int         curNavType;
    int         tabpos;
    int         idNotify;
    BYTE        tabOrder[HH_MAX_TABS + 1];
    int         cHistory;
    LPCTSTR     pszJump1;
    LPCTSTR     pszJump2;
    LPCTSTR     pszUrlJump1;
    LPCTSTR     pszUrlJump2;
    RECT        rcMinSize;
    int         cbInfoTypes;
    LPCTSTR     pszCustomTabs;
} HH_WINTYPE;
typedef HH_WINTYPE  *PHH_WINTYPE;

/* HTML Help actions */
enum {
    HHACT_TAB_CONTENTS  = 0,
    HHACT_TAB_INDEX     = 1,
    HHACT_TAB_SEARCH    = 2,
    HHACT_TAB_HISTORY   = 3,
    HHACT_TAB_FAVORITES = 4,
    HHACT_EXPAND        = 5,
    HHACT_CONTRACT      = 6,
    HHACT_BACK          = 7,
    HHACT_FORWARD       = 8,
    HHACT_STOP          = 9,
    HHACT_REFRESH       = 10,
    HHACT_HOME          = 11,
    HHACT_SYNC          = 12,
    HHACT_OPTIONS       = 13,
    HHACT_PRINT         = 14,
    HHACT_HIGHLIGHT     = 15,
    HHACT_CUSTOMIZE     = 16,
    HHACT_JUMP1         = 17,
    HHACT_JUMP2         = 18,
    HHACT_ZOOM          = 19,
    HHACT_TOC_NEXT      = 20,
    HHACT_TOC_PREV      = 21,
    HHACT_NOTES         = 22,
    HHACT_LAST_ENUM     = 23
};

/* HHN_TRACK parameters */
typedef struct tagHHNTRACK {
    NMHDR       hdr;
    PCSTR       pszCurUrl;
    int         idAction;
    HH_WINTYPE  *phhWinType;
} HHNTRACK;

/* HTML Help global property identifiers */
typedef enum tagHH_GPROPID {
    HH_GPROPID_SINGLETHREAD     = 1,
    HH_GPROPID_TOOLBAR_MARGIN   = 2,
    HH_GPROPID_UI_LANGUAGE      = 3,
    HH_GPROPID_CURRENT_SUBSET   = 4,
    HH_GPROPID_CONTENT_LANGUAGE = 5,
} HH_GPROPID;

/* HTML Help global property */
#ifdef __oaidl_h__
typedef struct tagHH_GLOBAL_PROPERTY {
    HH_GPROPID  id;
    VARIANT     var;
} HH_GLOBAL_PROPERTY;
#endif

/* Functions in HHCTRL.OCX */
HWND WINAPI HtmlHelpA( HWND, LPCSTR, UINT, DWORD_PTR );
HWND WINAPI HtmlHelpW( HWND, LPCWSTR, UINT, DWORD_PTR );

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #define HtmlHelp    HtmlHelpW
#else
    #define HtmlHelp    HtmlHelpA
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __HTMLHELP_H__ */
