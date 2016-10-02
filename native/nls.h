#ifndef _INCL_NLS_H_
#define _INCL_NLS_H_

#include "os2types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct COUNTRYCODE
{
    ULONG country;
    ULONG codepage;
} COUNTRYCODE, *PCOUNTRYCODE;

APIRET OS2API DosQueryDBCSEnv(ULONG cb, PCOUNTRYCODE pcc, PCHAR pBuf);
APIRET OS2API DosSetRelMaxFH(PLONG pcbReqCount, PULONG pcbCurMaxFH);

#ifdef __cplusplus
}
#endif

#endif

// end of nls.h ...

