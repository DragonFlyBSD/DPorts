PORTNAME=	frameworkintegration
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Integration of Qt application with KDE workspaces

LIB_DEPENDS=	libAppStreamQt.so:devel/appstream-qt \
		libpackagekitqt6.so:ports-mgmt/packagekit-qt \

USES= cmake gettext gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	attica colorscheme config coreaddons i18n iconthemes newstuff \
		notifications package widgetsaddons \
		ecm:build
USE_QT=		base

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
