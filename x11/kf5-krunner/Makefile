PORTNAME=	krunner
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	x11 kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 parallelized query system

USES= cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz gmake
USE_KDE=	activities config coreaddons i18n kio package plasma-framework \
		service threadweaver \
		ecm:build
USE_QT=		concurrent core dbus declarative gui network widgets \
		buildtools:build qmake:build

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
