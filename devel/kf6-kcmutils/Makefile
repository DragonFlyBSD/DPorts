PORTNAME=	kcmutils
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Utilities for KDE System Settings modules

USES= cmake gettext gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	colorscheme config configwidgets coreaddons guiaddons i18n \
		itemviews kio kirigami2 service widgetsaddons xmlgui \
		ecm:build
USE_QT=		base declarative

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
