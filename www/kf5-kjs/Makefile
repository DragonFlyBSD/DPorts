PORTNAME=	kjs
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing an ECMAScript interpreter

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		cmake compiler:c++11-lib kde:5 perl5 pkgconfig qt:5 tar:xz
USE_KDE=	doctools:build ecm:build
USE_PERL5=	build
USE_QT=		core \
		buildtools:build qmake:build

dfly-patch:
	${REINPLACE_CMD} -e 's/^.*\- name: FreeBSD/&\n    - name: DragonFly/g' \
		${WRKSRC}/metainfo.yaml

.include <bsd.port.mk>
