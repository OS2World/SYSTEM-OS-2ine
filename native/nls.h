/**
 * 2ine; an OS/2 emulator for Linux.
 *
 * Please see the file LICENSE.txt in the source's root directory.
 *
 *  This file written by Ryan C. Gordon.
 */

#ifndef _INCL_NLS_H_
#define _INCL_NLS_H_

#include "os2types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    ULONG country;
    ULONG codepage;
} COUNTRYCODE, *PCOUNTRYCODE;

typedef struct
{
    ULONG country;
    ULONG codepage;
    ULONG fsDateFmt;
    CHAR szCurrency[5];
    CHAR szThousandsSeparator[2];
    CHAR szDecimal[2];
    CHAR szDateSeparator[2];
    CHAR szTimeSeparator[2];
    UCHAR fsCurrencyFmt;
    UCHAR cDecimalPlace;
    UCHAR fsTimeFmt;
    USHORT abReserved1[2];
    CHAR szDataSeparator[2];
    USHORT abReserved2[5];
} COUNTRYINFO, *PCOUNTRYINFO;

OS2EXPORT APIRET OS2API DosQueryDBCSEnv(ULONG cb, PCOUNTRYCODE pcc, PCHAR pBuf) OS2APIINFO(6);
OS2EXPORT APIRET OS2API DosMapCase(ULONG cb, PCOUNTRYCODE pcc, PCHAR pch) OS2APIINFO(7);
OS2EXPORT APIRET OS2API DosQueryCtryInfo(ULONG cb, PCOUNTRYCODE pcc, PCOUNTRYINFO pci, PULONG pcbActual) OS2APIINFO(5);


typedef struct
{
    USHORT country;
    USHORT codepage;
} COUNTRYCODE16, *PCOUNTRYCODE16;

typedef struct
{
    USHORT country;
    USHORT codepage;
    USHORT fsDateFmt;
    CHAR szCurrency[5];
    CHAR szThousandsSeparator[2];
    CHAR szDecimal[2];
    CHAR szDateSeparator[2];
    CHAR szTimeSeparator[2];
    UCHAR fsCurrencyFmt;
    UCHAR cDecimalPlace;
    UCHAR fsTimeFmt;
    USHORT abReserved1[2];
    CHAR szDataSeparator[2];
    USHORT abReserved2[5];
} COUNTRYINFO16, *PCOUNTRYINFO16;

OS2EXPORT APIRET16 OS2API16 DOSGETDBCSEV(USHORT buflen, PCOUNTRYCODE16 pcc, PCHAR buf) OS2APIINFO(4);
OS2EXPORT APIRET16 OS2API16 DOSCASEMAP(USHORT len, PCOUNTRYCODE16 pcc, PCHAR pch) OS2APIINFO(391);
OS2EXPORT APIRET16 OS2API16 DOSGETCTRYINFO(USHORT len, PCOUNTRYCODE16 pcc, PCOUNTRYINFO16 pch, PUSHORT dlen) OS2APIINFO(393);

#ifdef __cplusplus
}
#endif

#endif

// end of nls.h ...

