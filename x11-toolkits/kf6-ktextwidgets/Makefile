PORTNAME=	ktextwidgets
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Text editing widgets

USES= cmake gettext gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	colorscheme completion config configwidgets i18n sonnet \
		widgetsaddons \
		ecm:build
USE_QT=		base speech multimedia

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
