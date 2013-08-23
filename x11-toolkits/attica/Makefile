# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: x11-toolkits/attica/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	attica
PORTVERSION=	0.4.2
PORTEPOCH=	2
CATEGORIES=	x11-toolkits
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Open Collaboration Services API library

USE_QT4=	network qtestlib_build xml \
		moc_build qmake_build rcc_build uic_build
USE_BZIP2=	yes
USE_LDCONFIG=	yes
USES=		cmake
CMAKE_ARGS=	-DATTICA_ENABLE_TESTS:BOOL=OFF \
		-DQT4_BUILD:BOOL=ON

post-patch:
	${REINPLACE_CMD} \
		-e 's,$${LIB_DESTINATION}/pkgconfig,libdata/pkgconfig,' \
		-e 's,.$${CMAKE_LIBATTICA_VERSION_MINOR},,' \
		${WRKSRC}/lib/CMakeLists.txt

.include <bsd.port.mk>
