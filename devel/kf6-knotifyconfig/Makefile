PORTNAME=	knotifyconfig
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Configuration system for KNotify

LIB_DEPENDS=	libcanberra.so:audio/libcanberra

USES= cmake gettext gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	completion config coreaddons i18n jobwidgets kio notifications \
		service solid widgetsaddons xmlgui \
		ecm:build
USE_QT=		base

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
