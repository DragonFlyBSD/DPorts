PORTNAME=	karchive
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	archivers kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Reading, creating, and manipulating file archives

LIB_DEPENDS=	libzstd.so:archivers/zstd

USES=		cmake kde:6 pkgconfig qt:6 tar:xz
USE_KDE=	ecm:build
USE_QT=		base tools

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
