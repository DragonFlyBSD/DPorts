# $FreeBSD: ports/devel/lua-gettext/files/Makefile,v 1.3 2012/11/17 05:55:59 svnexp Exp $

SHLIB=		gettext
SHLIB_NAME=	lgettext.so

SRCS=		lua_gettext.c

CFLAGS+=	-I${LOCALBASE}/include -I${LUA_INCDIR}
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include <bsd.lib.mk>
