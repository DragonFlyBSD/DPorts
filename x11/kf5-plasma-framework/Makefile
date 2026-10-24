PORTNAME=	plasma-framework
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 plugin based UI runtime used to write user interfaces

DEPRECATED=	has its functionality stripped compared to a kf6 variant

USES=		cmake compiler:c++11-lib gettext gl kde:5 pkgconfig qt:5 \
		tar:xz xorg
USE_GL=		egl gl
USE_KDE=	activities archive auth codecs completion config configwidgets \
		coreaddons dbusaddons globalaccel guiaddons i18n iconthemes \
		jobwidgets kdeclarative kio kirigami2 notifications package \
		service solid wayland widgetsaddons windowsystem xmlgui \
		doctools:build ecm:build
USE_QT=		concurrent core dbus declarative gui network sql svg widgets \
		x11extras xml \
		buildtools:build qmake:build
USE_XORG=	ice sm x11 xcb xext xrandr

# KF6 coinstallability
CMAKE_OFF=	BUILD_DESKTOPTHEMES

USE_KDE:= ${USE_KDE:Nwayland}
USES+= gmake
dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
