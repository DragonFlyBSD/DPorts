# $FreeBSD: textproc/fixrtf/src/Makefile 300897 2012-07-14 14:29:18Z beat $

PROG=	fixrtf
SRCS=	fixrtf.l

PREFIX?=	/usr/local
BINDIR=	${PREFIX}/bin
CFLAGS+=-I${PREFIX}/include
LDADD=	-L${PREFIX}/lib -lpng
NO_MAN=
NOMAN=

.include <bsd.prog.mk>
