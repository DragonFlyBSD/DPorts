# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: devel/libclaw/Makefile 320902 2013-06-14 12:23:58Z amdmi3 $

PORTNAME=	libclaw
PORTVERSION=	1.7.3
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	C++ Library Absolutely Wonderful

LIB_DEPENDS=	jpeg:${PORTSDIR}/graphics/jpeg \
		png15:${PORTSDIR}/graphics/png
BUILD_DEPENDS=	${LOCALBASE}/include/boost/bind.hpp:${PORTSDIR}/devel/boost-libs

USES=		cmake gettext
CMAKE_ARGS=	-DCLAW_CMAKE_MODULES_INSTALL_PATH="${DATADIR}/cmake"
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes
USE_GCC=	4.6+

post-patch:
	@${REINPLACE_CMD} -e '/subdirs/ s|doc||' ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e '/install.*COPYING/ d' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
