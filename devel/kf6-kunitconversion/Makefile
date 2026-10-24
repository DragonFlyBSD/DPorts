PORTNAME=	kunitconversion
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Converting physical units

USES=		cmake gettext kde:6 qt:6 tar:xz
USE_KDE=	i18n \
		ecm:build
USE_QT=		base tools:build

CMAKE_OFF=	BUILD_PYTHON_BINDINGS

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
