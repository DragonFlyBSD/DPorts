PORTNAME=	qmapshack
DISTVERSIONPREFIX=	V_
DISTVERSION=	1.21.1
CATEGORIES=	astro

MAINTAINER=	cmt@FreeBSD.org
COMMENT=	Ultimate outdoor aficionado's tool
WWW=		https://github.com/Maproom/qmapshack/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	vulkan-headers>0:graphics/vulkan-headers
LIB_DEPENDS=	libalglib.so:math/alglib \
		libblend2d.so:graphics/blend2d \
		libgdal.so:graphics/gdal \
		libproj.so:graphics/proj \
		libquazip1-qt6.so:archivers/quazip \
		libroutino.so:astro/routino
RUN_DEPENDS=	${LOCALBASE}/bin/bsdisks:sysutils/bsdisks

USES= cmake desktop-file-utils gl jpeg qt:6 gmake
USE_GITHUB=	yes
GH_ACCOUNT=	Maproom
USE_GL=	gl
USE_QT=		5compat base declarative positioning tools webchannel \
		webengine

OPTIONS_DEFINE=	DOCS

RUN_DEPENDS:= ${RUN_DEPENDS:N*bsdisks}
dfly-patch:
	${REINPLACE_CMD} -e 's/defined(Q_OS_FREEBSD)/(defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY))/g' \
		${WRKSRC}/src/qmt_rgb2pct/main.cpp \
		${WRKSRC}/src/qmaptool/setup/CAppSetupLinux.cpp \
		${WRKSRC}/src/qmaptool/setup/IAppSetup.cpp \
		${WRKSRC}/src/qmapshack/CAbout.cpp \
		${WRKSRC}/src/qmapshack/device/CDeviceWatcherLinux.cpp \
		${WRKSRC}/src/qmapshack/setup/CAppSetupLinux.cpp \
		${WRKSRC}/src/qmapshack/setup/IAppSetup.cpp \
		${WRKSRC}/src/qmapshack/gis/CGisListWks.cpp

.include <bsd.port.mk>
