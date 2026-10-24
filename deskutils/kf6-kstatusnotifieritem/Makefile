PORTNAME=	kstatusnotifieritem
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	deskutils kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Implementation of Status Notifier Items

USES= cmake gl kde:6 qt:6 tar:xz xorg gmake
USE_GL=		gl opengl
USE_KDE=	windowsystem \
		ecm:build
USE_QT=		base
USE_XORG=	x11

CMAKE_OFF=	BUILD_PYTHON_BINDINGS

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
