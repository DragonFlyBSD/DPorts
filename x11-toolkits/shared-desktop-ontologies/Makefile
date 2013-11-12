# $FreeBSD: x11-toolkits/shared-desktop-ontologies/Makefile 332999 2013-11-06 14:53:31Z rakuco $

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

post-patch:
	@${REINPLACE_CMD} -e 's|share/cmake/SharedDesktopOntologies|lib/cmake/SharedDesktopOntologies|' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
