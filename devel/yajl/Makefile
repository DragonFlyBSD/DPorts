# $FreeBSD: devel/yajl/Makefile 341141 2014-01-25 23:54:15Z bapt $

PORTNAME=	yajl
PORTVERSION=	2.0.4
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Portable JSON parsing and serialization library in ANSI C

USE_GITHUB=	yes
GH_ACCOUNT=	lloyd
GH_COMMIT=	fee1ebe

LICENSE=	ISCL

USE_LDCONFIG=	yes
USES=		cmake

PLIST_SUB=	VERSION=${PORTVERSION}

post-patch:
	@${REINPLACE_CMD} -e "s,share/pkgconfig,libdata/pkgconfig,g" \
		${WRKSRC}/src/CMakeLists.txt

.include <bsd.port.mk>
