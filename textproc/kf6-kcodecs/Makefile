PORTNAME=	kcodecs
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	textproc kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	String encoding library

USES=		cmake gperf kde:6 qt:6 tar:xz
USE_KDE=	ecm:build
USE_QT=		base tools

USE_GCC_VERSION= 14
dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
