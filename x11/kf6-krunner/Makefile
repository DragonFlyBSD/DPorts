PORTNAME=	krunner
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Framework for providing different actions given a string query

USES= cmake gettext gl kde:6 qt:6 tar:xz gmake
USE_GL=		gl opengl
USE_KDE=	config coreaddons i18n itemmodels windowsystem \
		ecm:build
USE_QT=		base declarative

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
