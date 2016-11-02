#ifndef _INCL_SESMGR_H_
#define _INCL_SESMGR_H_

#include "os2types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    USHORT Length;
    USHORT Related;
    USHORT FgBg;
    USHORT TraceOpt;
    PSZ PgmTitle;
    PSZ PgmName;
    PBYTE PgmInputs;
    PBYTE TermQ;
    PBYTE Environment;
    USHORT InheritOpt;
    USHORT SessionType;
    PSZ IconFile;
    ULONG PgmHandle;
    USHORT PgmControl;
    USHORT InitXPos;
    USHORT InitYPos;
    USHORT InitXSize;
    USHORT InitYSize;
    USHORT Reserved;
    PSZ ObjectBuffer;
    ULONG ObjectBuffLen;
} STARTDATA, *PSTARTDATA;

APIRET OS2API DosStartSession(PSTARTDATA psd, PULONG pidSession, PPID ppid);

#ifdef __cplusplus
}
#endif

#endif

// end of sesmgr.h ...

