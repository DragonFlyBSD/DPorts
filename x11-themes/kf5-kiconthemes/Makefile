PORTNAME=	kiconthemes
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-themes kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library for handling icons in applications

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	archive auth codecs config configwidgets coreaddons \
		i18n widgetsaddons \
		ecm:build
USE_QT=		core dbus gui svg widgets xml \
		buildtools:build qmake:build

OPTIONS_DEFINE=	ICONS
OPTIONS_DEFAULT=	ICONS
ICONS_DESC=	Install Breeze Icons
ICONS_USE=	KDE=breeze-icons:run

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
