PORTNAME=	peaclock
DISTVERSION=	0.4.3
PORTREVISION=	8
CATEGORIES=	deskutils

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Customizable clock, timer, and stopwatch for the terminal
WWW=		https://github.com/octobanana/peaclock

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libicui18n.so:devel/icu

USES=		cmake compiler:c++17-lang localbase:ldflags
USE_GITHUB=	yes
GH_ACCOUNT=	octobanana

CXXFLAGS+= -Wno-narrowing # https://github.com/octobanana/peaclock/issues/18 -isystem ${LOCALBASE}/cxxfs_gcc8

PLIST_FILES=	bin/${PORTNAME}

BUILD_DEPENDS= cxxfs_gcc8>0:misc/cxxfs_gcc8
LDFLAGS= -L${LOCALBASE}/cxxfs_gcc8
dfly-patch:
	${REINPLACE_CMD} -e 's@pthread@& stdc++fs@g' \
		${WRKSRC}/CMakeLists.txt


.include <bsd.port.mk>
