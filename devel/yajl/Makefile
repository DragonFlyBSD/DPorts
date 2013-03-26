# New ports collection makefile for:	yajl
# Date created:		2010-03-29
# Whom:			Bapt <baptiste.daroussin@gmail.com>
#
# $FreeBSD: devel/yajl/Makefile 314960 2013-03-22 20:06:14Z makc $
#

PORTNAME=	yajl
PORTVERSION=	2.0.4
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	A Portable JSON parsing and serialization library in ANSI C

USE_GITHUB=	yes
GH_ACCOUNT=	lloyd
GH_COMMIT=	fee1ebe

LICENSE=	BSD

USE_LDCONFIG=	yes
USES=		cmake

PLIST_SUB=	VERSION=${PORTVERSION}

post-patch:
	@${REINPLACE_CMD} -e "s,share/pkgconfig,libdata/pkgconfig,g" \
		${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
