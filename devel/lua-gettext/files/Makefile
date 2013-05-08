# $FreeBSD: devel/lua-gettext/files/Makefile 300896 2012-07-14 13:54:48Z beat $

SHLIB=		gettext
SHLIB_NAME=	lgettext.so

SRCS=		lua_gettext.c

CFLAGS+=	-I${LOCALBASE}/include -I${LUA_INCDIR}
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include <bsd.lib.mk>
