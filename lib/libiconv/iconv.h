/* Copyright (C) 1999-2003 Free Software Foundation, Inc.
   This file is part of the GNU LIBICONV Library.

   The GNU LIBICONV Library is free software; you can redistribute it
   and/or modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   The GNU LIBICONV Library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU LIBICONV Library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation, Inc., 59 Temple Place -
   Suite 330, Boston, MA 02111-1307, USA.  */

/* When installed, this file is called "iconv.h". */

#ifndef _LIBICONV_H
#define _LIBICONV_H

#ifndef ICONV_CONST
# define ICONV_CONST const
#endif

/* Get size_t declaration. */
#include <stddef.h>

/* Get errno declaration and values. */
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Identifier for conversion method from one codeset to another.  */
typedef void *iconv_t;


/* Free resources allocated for descriptor CD for code conversion.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int iconv_close (iconv_t __cd);

/* Allocate descriptor for code conversion from codeset FROMCODE to
   codeset TOCODE.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern iconv_t iconv_open (const char *__tocode, const char *__fromcode);

/* Convert at most *INBYTESLEFT bytes from *INBUF according to the
   code conversion algorithm specified by CD and place up to
   *OUTBYTESLEFT bytes in buffer at *OUTBUF.  */
extern size_t iconv (iconv_t cd, const char* * inbuf, size_t *inbytesleft, char* * outbuf, size_t *outbytesleft);

#ifdef __cplusplus
}
#endif

#endif /* _LIBICONV_H */
