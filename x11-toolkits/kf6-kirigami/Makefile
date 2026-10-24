PORTNAME=	kirigami
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11-toolkits kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	QtQuick components for building adaptable UIs

LIB_DEPENDS=	libxkbcommon.so:x11/libxkbcommon

USES= cmake gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	ecm:build
USE_QT=		base declarative shadertools svg tools

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
