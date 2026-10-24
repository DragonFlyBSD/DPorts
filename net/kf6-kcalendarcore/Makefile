PORTNAME=	kcalendarcore
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	net kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Provides access to and handling of calendar data

LIB_DEPENDS=	libical.so:devel/libical

USES=		cmake gl kde:6 qt:6 tar:xz
USE_GL=		gl opengl
USE_KDE=	ecm:build
USE_QT=		base declarative tools:build

CMAKE_OFF=	BUILD_PYTHON_BINDINGS

dfly-patch:
	${REINPLACE_CMD} -e 's/[[:<:]]isinf[[:>:]]/std::isinf/g'        \
		-e 's/[[:<:]]isnan[[:>:]]/std::isnan/g'        \
		-e 's/std::std::/std::/g'                      \
		${WRKSRC}/src/incidence.cpp

.include <bsd.port.mk>
