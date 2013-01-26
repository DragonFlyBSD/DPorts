# $FreeBSD: ports/textproc/fixrtf/src/Makefile,v 1.2 2012/11/17 06:01:56 svnexp Exp $

PROG=	fixrtf
SRCS=	fixrtf.l

PREFIX?=	/usr/local
BINDIR=	${PREFIX}/bin
CFLAGS+=-I${PREFIX}/include
LDADD=	-L${PREFIX}/lib -lpng
NO_MAN=
NOMAN=

.include <bsd.prog.mk>
