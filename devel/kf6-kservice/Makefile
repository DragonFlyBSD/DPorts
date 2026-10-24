PORTNAME=	kservice
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plugin framework for desktop services

USES=		cmake gettext kde:6 qt:6 tar:xz
USE_KDE=	config coreaddons i18n \
		ecm:build
USE_QT=		base

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
