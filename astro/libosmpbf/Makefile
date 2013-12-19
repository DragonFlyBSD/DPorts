# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: astro/libosmpbf/Makefile 336650 2013-12-16 17:40:13Z amdmi3 $

PORTNAME=	libosmpbf
PORTVERSION=	1.3.0
CATEGORIES=	astro geography devel

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Library for handling binary OpenStreetMap data

LICENSE=	GPLv3

LIB_DEPENDS=	libprotobuf.so:${PORTSDIR}/devel/protobuf

USE_GITHUB=	yes
GH_ACCOUNT=	scrosby
GH_PROJECT=	OSM-binary
GH_TAGNAME=	v${PORTVERSION}
GH_COMMIT=	d9be2d1

USES=		gmake
BUILD_WRKSRC=	${WRKSRC}/src
INSTALL_WRKSRC=	${WRKSRC}/src

CXXFLAGS+=	-I${LOCALBASE}/include

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
