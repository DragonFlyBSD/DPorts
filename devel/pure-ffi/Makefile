# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: devel/pure-ffi/Makefile 322847 2013-07-12 16:24:55Z bapt $

PORTNAME=	pure-ffi
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	lichray@gmail.com
COMMENT=	Pure language interface to libffi

LIB_DEPENDS+=	ffi:${PORTSDIR}/devel/libffi

USE_PURE=	yes

PLIST_FILES=	lib/pure/ffi.pure \
		lib/pure/ffi.so

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
