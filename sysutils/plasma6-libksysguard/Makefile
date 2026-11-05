PORTNAME=	libksysguard
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Library to retrieve information on the current status of computer hardware

LIB_DEPENDS=	libxkbcommon.so:x11/libxkbcommon

USES=		cmake gettext gl kde:6 qt:6 tar:xz xorg
USE_GL=		gl opengl
USE_KDE=	auth colorscheme completion config configwidgets coreaddons \
		globalaccel i18n iconthemes jobwidgets kio newstuff package \
		service solid widgetsaddons windowsystem \
		ecm:build
USE_QT=		5compat base declarative positioning webchannel webengine
USE_XORG=	x11

PORTREVISION= 1
dfly-patch:
	${REINPLACE_CMD} -e 's/^#ifdef Q_OS_FREEBSD$$/#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)/' \
		${WRKSRC}/systemstats/SysctlSensor.h

.include <bsd.port.mk>
