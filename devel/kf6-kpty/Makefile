PORTNAME=	kpty
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Interfacing with pseudo terminal devices

USES=		cmake gettext kde:6 qt:6 tar:xz
USE_KDE=	coreaddons i18n \
		ecm:build
USE_QT=		base

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
