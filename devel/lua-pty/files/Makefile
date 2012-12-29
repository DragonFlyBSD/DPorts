# $FreeBSD: ports/devel/lua-pty/files/Makefile,v 1.5 2012/11/17 05:55:59 svnexp Exp $

SHLIB=		pty
SHLIB_NAME=	lpty.so

SRCS=		pty.c
.if defined(COMPATDIR)
SRCS+=		${COMPATDIR}/compat-5.1.c
.endif

CFLAGS+=	-I${LUA_INCDIR}
LDFLAGS+=	-L/usr/lib -lutil

.include <bsd.lib.mk>
