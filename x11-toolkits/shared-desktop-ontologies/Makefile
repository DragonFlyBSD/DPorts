# $FreeBSD: x11-toolkits/shared-desktop-ontologies/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	shared-desktop-ontologies
PORTVERSION=	0.11.0
CATEGORIES=	x11-toolkits
MASTER_SITES=	SF/oscaf/${PORTNAME}/${PORTVERSION}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Interoperability between desktops and collaborative environments

CMAKE_ARGS+=	-DPKGCONFIG_INSTALL_DIR:PATH="libdata/pkgconfig/"
INSTALL_TARGET=	install

USE_BZIP2=	yes
USES=		cmake pkgconfig

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|share/cmake/SharedDesktopOntologies|lib/cmake/SharedDesktopOntologies|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
