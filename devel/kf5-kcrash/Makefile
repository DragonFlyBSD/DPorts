PORTNAME=	kcrash
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library to handle crash analysis and bug report from apps

USES=		cmake compiler:c++11-lib kde:5 qt:5 tar:xz xorg
USE_KDE=	coreaddons \
		ecm:build
USE_QT=		core gui x11extras \
		buildtools:build qmake:build testlib:build
USE_XORG=	ice sm x11 xext

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
