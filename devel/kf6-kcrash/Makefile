PORTNAME=	kcrash
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Graceful handling of application crashes

USES=		cmake gl kde:6 qt:6 tar:xz xorg
USE_GL=		gl opengl
USE_KDE=	coreaddons \
		ecm:build
USE_QT=		base
USE_XORG=	x11

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
