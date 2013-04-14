# $FreeBSD: ports/chinese/docproj/src/cjktexsty/Makefile,v 1.2 2012/11/17 05:54:56 svnexp Exp $

PROG=	cjktexsty
SRCS=	cjktexsty.l

PREFIX?=	/usr/local
BINDIR=	${PREFIX}/bin
CFLAGS+=-I${PREFIX}/include
LDADD=	-L${PREFIX}/lib -liconv
NO_MAN=
NOMAN=

.include <bsd.prog.mk>
