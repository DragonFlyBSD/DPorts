# New ports collection makefile for:   lua-bitlib
# Date created:                        07 Jan 2008
# Whom:                                Rong-En Fan <rafan@FreeBSD.org>
#
# $FreeBSD: ports/devel/lua-bitlib/Makefile,v 1.2 2012/11/17 05:55:58 svnexp Exp $
#

PORTNAME=	bitlib
PORTVERSION=	24
CATEGORIES=	devel
MASTER_SITES=	http://luaforge.net/frs/download.php/2715/
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	A tiny library for bitwise operations

USE_LUA=	5.0+

PLIST_FILES=	%%LUA_MODLIBDIR%%/bit.so

do-build:
	cd ${WRKSRC} && \
		${CC} -fPIC -shared -o bit.so lbitlib.c \
		${LUA_LIBDIR}/liblua.a -I${LUA_INCDIR} -lm

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/bit.so ${LUA_MODLIBDIR}

.include <bsd.port.mk>
