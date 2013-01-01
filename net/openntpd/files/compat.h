/*
 * This file is in the public domain.
 *
 * $FreeBSD: ports/net/openntpd/files/compat.h,v 1.2 2012/11/17 06:00:09 svnexp Exp $
 */

#ifndef SA_LEN
# define SA_LEN(x)	((x)->sa_len)
#endif

#ifndef EAI_NODATA
# define EAI_NODATA	EAI_NONAME
#endif

#ifndef __dead
# define __dead
#endif

#undef HAVE_SENSORS

/* adjfreq.c */
int			adjfreq(const int64_t *, int64_t *);

/* arc4random.c */
u_int32_t		arc4random_uniform(u_int32_t);
