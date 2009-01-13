/*
 *  LibXDiff by Davide Libenzi ( File Differential Library )
 *  Copyright (C) 2003  Davide Libenzi
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Davide Libenzi <davidel@xmailserver.org>
 *
 */

#if !defined(XMISSING_H)
#define XMISSING_H


#if !defined(CHAR_BIT)
#define CHAR_BIT 8
#endif /* #if !defined(CHAR_BIT) */


#if 0

#if !defined(HAVE_MEMCHR)
void *memchr(void const *p, int c, long n);
#endif /* #if !defined(HAVE_MEMCHR) */

#if !defined(HAVE_MEMCMP)
int memcmp(void const *p1, void const *p2, long n);
#endif /* #if !defined(HAVE_MEMCMP) */

#if !defined(HAVE_MEMCPY)
void *memcpy(void *d, void const *s, long n);
#endif /* #if !defined(HAVE_MEMCPY) */

#if !defined(HAVE_MEMSET)
void *memset(void *d, int c, long n);
#endif /* #if !defined(HAVE_MEMSET) */

#if !defined(HAVE_STRLEN)
long strlen(char const *s);
#endif /* #if !defined(HAVE_STRLEN) */

#endif

#endif /* #if !defined(XMISSING_H) */

