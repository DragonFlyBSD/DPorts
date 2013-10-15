# Created by: aaron@FreeBSD.org
# $FreeBSD: lang/tolua++50/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	tolua++
PORTVERSION=	1.0.92
PORTREVISION=	2
PKGNAMESUFFIX=	50
CATEGORIES=	lang devel
MASTER_SITES=	http://www.codenix.com/~tolua/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	An extended version of tolua, a tool to integrate C/C++ code with Lua

USE_BZIP2=	yes
USE_LUA=	5.0
USE_SCONS=	yes
SCONS_ARGS=	prefix=${PREFIX} SONAME="libtolua++-${LUA_VER}.so"

CFLAGS+=	-I${LUA_INCDIR}
LDFLAGS+=	-L${LUA_LIBDIR}

PORTSCOUT=	limit:1\.0\.92

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/tolua++ ${LUA_BINDIR}
	${LN} -sf ${LUA_SUBDIR}/tolua++ ${PREFIX}/bin/tolua++-${LUA_VER}
	${INSTALL_DATA} ${WRKSRC}/include/tolua++.h ${LUA_INCDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/libtolua++.a ${LUA_LIBDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/libtolua++.so ${LUA_LIBDIR}
	${INSTALL_DATA} ${WRKSRC}/lib/libtolua++.so ${PREFIX}/lib/libtolua++-${LUA_VER}.so

.include <bsd.port.mk>
