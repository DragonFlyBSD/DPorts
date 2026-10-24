PORTNAME=	baloo
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	sysutils kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	File indexing and file search framework for KDE Plasma

LIB_DEPENDS=	libinotify.so:devel/libinotify \
		liblmdb.so:databases/lmdb0

USES= cmake gettext gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	config coreaddons crash dbusaddons filemetadata i18n idletime \
		kio solid \
		ecm:build
USE_QT=		base declarative

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
