PORTNAME=	epsonscan2
DISTVERSION=	6.7.70.0
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	https://download3.ebz.epson.net/dsc/f/03/00/16/14/37/7577ee65efdad48ee2d2f38d9eda75418e490552/
DISTNAME=	${PORTNAME}-${DISTVERSION}-1.src

MAINTAINER=	fbsd@opal.com
COMMENT=	Epson Scan 2 scanner driver
WWW=		https://download.ebz.epson.net/man/linux/epsonscan2_e.html

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	sane-config:graphics/sane-backends \
		boost-libs>=1.36.0:devel/boost-libs
LIB_DEPENDS=	libpng.so:graphics/png \
		libtiff.so:graphics/tiff

USES=		cmake jpeg localbase qt:5 xorg
USE_LDCONFIG=	${PREFIX}/lib/epsonscan2
USE_QT=		buildtools:build core gui qmake:build widgets
USE_XORG=	x11 xau xcb xdmcp

EPSON_VERSION=	1.0.0.0

CMAKE_ARGS=	-DCMAKE_POLICY_VERSION_MINIMUM=3.5

CONFIGURE_ENV+=	STAGEDIR=${STAGEDIR}

SUB_FILES=	pkg-message \
		Read_me.FreeBSD

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}-1

OPTIONS_DEFINE=		AVAHI
OPTIONS_DEFAULT=	AVAHI
AVAHI_DESC=		Use avahi to find scanners
AVAHI_RUN_DEPENDS=	avahi-browse:net/avahi-app

pre-configure:
		${RM} ${WRKSRC}/CMakeCache.txt

post-install:
		${RM} -rf ${STAGEDIR}${DOCSDIR}
		${MV} ${STAGEDIR}${DOCSDIR}-${EPSON_VERSION}-1 ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${WRKDIR}/Read_me.FreeBSD ${STAGEDIR}${PREFIX}/lib/epsonscan2

dfly-patch:
	${REINPLACE_CMD} \
		-e 's/^#if __FreeBSD__$$/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#ifdef __FreeBSD__$$/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#ifndef __FreeBSD__$$/#if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		-e 's/^#elif __FreeBSD__$$/#elif defined(__FreeBSD__) || defined(__DragonFly__)/' \
		${WRKSRC}/src/Controller/Src/Finder/UsbFinder.cpp \
		${WRKSRC}/src/Controller/Src/Filter/DTR.cpp \
		${WRKSRC}/src/ES2Command/Src/Interface/usb/usbInterfaceImpl.h \
		${WRKSRC}/src/ES2Command/Src/Utils/semaphore.hpp \
		${WRKSRC}/src/Platform.cpp \
		${WRKSRC}/src/CommonUtility/DbgLog.cpp \
		${WRKSRC}/src/SaneWrapper/defines.h
	${REINPLACE_CMD} -e 's/pthread_peekjoin_np(tid,st)/pthread_join(tid,st)/' \
		${WRKSRC}/src/Platform.cpp
	${REINPLACE_CMD} -e 's/^#if defined(__GNU_LIBRARY__) && !defined(_SEM_SEMUN_UNDEFINED)$$/& || defined(__DragonFly__)/' \
		${WRKSRC}/src/ES2Command/Src/Utils/semaphore.hpp
	${REINPLACE_CMD} -e 's/CMAKE_SYSTEM_NAME STREQUAL "FreeBSD"/CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly"/' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
