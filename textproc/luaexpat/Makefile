# Created by: Andrew Lewis <freeghb@gmail.com>
# $FreeBSD: textproc/luaexpat/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	luaexpat
PORTVERSION=	1.2.0
CATEGORIES=	textproc
MASTER_SITES=	http://matthewwild.co.uk/projects/luaexpat/ \
				http://redundancy.redundancy.org/mirror/
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	lx@FreeBSD.org
COMMENT=	LuaExpat is a SAX XML parser based on the Expat library

LIB_DEPENDS=	expat.6:${PORTSDIR}/textproc/expat2

MAKEFILE=	makefile
ALL_TARGET=	lib
USE_LUA=	5.0-5.1
LUA_PREMK=	yes
WANT_LUA_VER=	5.1

CFLAGS+=	-fPIC

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${LUA_VER} == 5.0
BUILD_DEPENDS+=	${NONEXISTENT}:${PORTSDIR}/devel/lua50-compat51:build
.endif

.include <bsd.port.post.mk>
