PORTNAME=	qqc2-desktop-style
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-themes kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Style for Qt Quick Controls 2

USES= cmake gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	colorscheme config iconthemes kirigami2 \
		ecm:build \
		sonnet:run
USE_QT=		base declarative

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
