/***
*
* tcharx.h - definitions for generic international text functions
*
* Purpose:
*       [Public]
*
* Author:
*       2020, himaprog
*
* Copyright (c) 2020 himaprog
*
***/

#pragma once

#ifndef _INC_TCHARX_
#define _INC_TCHARX_

#ifndef _MSC_VER
#error ERROR: Only VisualC++ target supported!
#endif


#ifdef  _UNICODE

/* ---------- UNICODE ---------- */

#ifdef  __cplusplus

#include <cwchar>

/* fstream */
#define _tfilebuf       wfilebuf
#define _tfstream       wfstream
#define _tifstream      wifstream
#define _tofstream      wofstream

/* ios */
#define _tios           wios
#define _tstreampos     wstreampos

/* iostream */
#define _tcerr          wcerr
#define _tcin           wcin
#define _tclog          wclog
#define _tcout	        wcout

/* istream */
#define _tiostream      wiostream
#define _tistream       wistream

/* ostream */
#define _tostream       wostream

/* sstream */
#define _tistringstream wistringstream
#define _tostringstream wostringstream
#define _tstringbuf     wstringbuf
#define _tstringstream  wstringstream

/* streambuf */
#define _tstreambuf     wstreambuf

/* string */
#define _tstring        wstring

#endif  /* __cplusplus */

/* CRT: ctype */
#define _istcsym        __iswcsym
#define _istcsym_l      __iswcsym_l
#define _istcsymf       __iswcsymf
#define _istcsymf_l     __iswcsymf_l
	
/* CRT: memory */
/* Most memory functions are faster with the char version. */
#define _tmemchr                        wmemchr
#define _tmemcmp(dst, src, cnt)         memcmp(dst, src, cnt*sizeof(wchar_t))
#define _tmemcpy(dst, src, cnt)         memcpy(dst, src, cnt*sizeof(wchar_t))
#define _tmemcpy_s(dst, noe, src, cnt)  memcpy_s(dst, noe*sizeof(wchar_t), src, cnt*sizeof(wchar_t))
#define _tmemmove(dst, src, cnt)        memmove(dst, src, cnt*sizeof(wchar_t))
#define _tmemmove_s(dst, noe, src, cnt) memmove_s(dst, noe*sizeof(wchar_t), src, cnt*sizeof(wchar_t))
#define _tmemset(buf, ch, cnt)          memset(buf, ch, cnt*sizeof(wchar_t))

#else   /* _UNICODE */

/* ---------- SBCS and MBCS ---------- */

#ifdef  __cplusplus

#include <cstring>

/* fstream */
#define _tfilebuf       filebuf
#define _tfstream       fstream
#define _tifstream      ifstream
#define _tofstream      ofstream

/* ios */
#define _tios           ios
#define _tstreampos     streampos

/* iostream */
#define _tcerr          cerr
#define _tcin           cin
#define _tclog          clog
#define _tcout	        cout

/* istream */
#define _tiostream      iostream
#define _tistream       istream

/* ostream */
#define _tostream       ostream

/* sstream */
#define _tistringstream istringstream
#define _tostringstream ostringstream
#define _tstringbuf     stringbuf
#define _tstringstream  stringstream

/* streambuf */
#define _tstreambuf     streambuf

/* string */
#define _tstring        string

#endif  /* __cplusplus */

/* CRT: ctype */
#define _istcsym        __iscsym
#define _istcsym_l      __iscsym_l
#define _istcsymf       __iscsymf
#define _istcsymf_l     __iscsymf_l
	
/* CRT: memory */
#define _tmemchr        memchr
#define _tmemcmp        memcmp
#define _tmemcpy        memcpy
#define _tmemcpy_s      memcpy_s
#define _tmemmove       memmove
#define _tmemmove_s     memmove_s
#define _tmemset        memset

#endif  /* _UNICODE */

#include <tchar.h>

/*
#if _MSC_VER >= 1900
#ifdef _UNICODE

#undef __T
#define __T(x) u ## x

#endif
#endif
*/


#endif  /* _INC_TCHARX_ */
