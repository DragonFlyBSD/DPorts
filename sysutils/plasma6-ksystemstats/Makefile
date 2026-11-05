PORTNAME=	ksystemstats
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugin based system monitoring daemon

LIB_DEPENDS=	libudev.so:devel/libudev-devd

USES=		cmake gettext gl kde:6 qt:6 tar:xz
USE_GL=		gl opengl
USE_KDE=	coreaddons dbusaddons i18n kio libksysguard solid \
		ecm:build
USE_QT=		base

CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_KF6NetworkManagerQt

dfly-patch:
	${REINPLACE_CMD} -e 's/CMAKE_SYSTEM_NAME STREQUAL "FreeBSD"/CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly"/' \
		${WRKSRC}/plugins/memory/CMakeLists.txt
	${REINPLACE_CMD} -e 's/SysctlSensor<uint32_t>/SysctlSensor<unsigned long long>/' \
		-e 's/uint32_t activePages/unsigned long long activePages/' \
		-e 's/uint32_t inactivePages/unsigned long long inactivePages/' \
		-e 's/pagesToBytes(uint32_t pages)/pagesToBytes(unsigned long long pages)/' \
		${WRKSRC}/plugins/memory/freebsdbackend.cpp ${WRKSRC}/plugins/memory/freebsdbackend.h

.include <bsd.port.mk>
