# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: math/pure-mpfr/Makefile 324729 2013-08-14 14:58:37Z marino $

PORTNAME=	pure-mpfr
PORTVERSION=	0.4
CATEGORIES=	math

MAINTAINER=	lichray@gmail.com
COMMENT=	Multiprecision floats for Pure

USE_PURE=	yes
USES=		pkgconfig

PLIST_FILES=	lib/pure/mpfr.pure \
		lib/pure/mpfr.so

MAKE_ARGS+=	libdir="${PREFIX}/lib"

.include "${.CURDIR}/../../lang/pure/bsd.pure.mk"
.include <bsd.port.mk>
