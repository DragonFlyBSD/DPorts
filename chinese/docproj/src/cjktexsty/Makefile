# $FreeBSD: chinese/docproj/src/cjktexsty/Makefile 340722 2014-01-22 17:00:46Z mat $

PROG=	cjktexsty
SRCS=	cjktexsty.l

PREFIX?=	/usr/local
BINDIR=	${PREFIX}/bin
CFLAGS+=-I${PREFIX}/include
LDADD=	-L${PREFIX}/lib -liconv
NO_MAN=
NOMAN=

.include <bsd.prog.mk>
