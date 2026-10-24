PORTNAME=	sonnet
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	textproc kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Multi-language spell checker

LIB_DEPENDS= libaspell.so:textproc/aspell

USES=		cmake gl kde:6 pkgconfig qt:6 tar:xz
USE_GL=		gl opengl
USE_KDE=	ecm:build
USE_QT=		base declarative tools

# Hsplell can be enabled, Voikko is not ported.
CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_HSPELL \
		CMAKE_DISABLE_FIND_PACKAGE_VOIKKO

CMAKE_ON+= CMAKE_DISABLE_FIND_PACKAGE_HUNSPELL
dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
