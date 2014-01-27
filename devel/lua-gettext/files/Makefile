# $FreeBSD: devel/lua-gettext/files/Makefile 340722 2014-01-22 17:00:46Z mat $

SHLIB=		gettext
SHLIB_NAME=	lgettext.so

SRCS=		lua_gettext.c

CFLAGS+=	-I${LOCALBASE}/include -I${LUA_INCDIR}
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include <bsd.lib.mk>
