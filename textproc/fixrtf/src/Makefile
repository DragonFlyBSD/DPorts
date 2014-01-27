# $FreeBSD: textproc/fixrtf/src/Makefile 340722 2014-01-22 17:00:46Z mat $

PROG=	fixrtf
SRCS=	fixrtf.l

PREFIX?=	/usr/local
BINDIR=	${PREFIX}/bin
CFLAGS+=-I${PREFIX}/include
LDADD=	-L${PREFIX}/lib -lpng
NO_MAN=
NOMAN=

.include <bsd.prog.mk>
