# $FreeBSD: chinese/docproj/src/cjktexsty/Makefile 300895 2012-07-14 12:56:14Z beat $

PROG=	cjktexsty
SRCS=	cjktexsty.l

PREFIX?=	/usr/local
BINDIR=	${PREFIX}/bin
CFLAGS+=-I${PREFIX}/include
LDADD=	-L${PREFIX}/lib -liconv
NO_MAN=
NOMAN=

.include <bsd.prog.mk>
