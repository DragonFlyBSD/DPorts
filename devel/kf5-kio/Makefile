PORTNAME=	kio
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	2
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 resource and network access abstraction

DEPRECATED=	has its functionality stripped compared to a kf6 variant

USES=		cmake compiler:c++11-lib desktop-file-utils \
		gettext gnome kde:5 cpe qt:5 ssl tar:xz xorg
USE_GNOME=	libxml2 libxslt
USE_KDE=	archive auth bookmarks codecs completion config \
		configwidgets coreaddons crash dbusaddons doctools guiaddons \
		i18n iconthemes itemviews jobwidgets kded \
		notifications service solid sonnet textwidgets wallet \
		widgetsaddons windowsystem xmlgui \
		doctools:build ecm:build
USE_QT=		concurrent core dbus declarative gui network \
		widgets x11extras xml \
		buildtools:build qmake:build testlib:build
USE_XORG=	x11

# KF6 coinstallability
CMAKE_ON=	KF6_COMPAT_BUILD

USES+= gmake
dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
			 -e '/HAVE_SYS_EXTATTR_H/s@sys/extattr.h@&__z@g' \
		${WRKSRC}/src/ioslaves/file/ConfigureChecks.cmake \
		${WRKSRC}/cmake/FindACL.cmake
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
