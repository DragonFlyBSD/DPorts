PORTNAME=	geonkick
DISTVERSIONPREFIX=	v
DISTVERSION=	2.10.0
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Software percussion synthesizer
WWW=		https://github.com/iurie-sw/geonkick

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	lv2>0:audio/lv2 \
		gmake:devel/gmake \
		rapidjson>0:devel/rapidjson
LIB_DEPENDS=	libjack.so:audio/jack \
		libsndfile.so:audio/libsndfile

USES=		compiler:c++17-lang cmake desktop-file-utils gnome localbase:ldflags \
		pkgconfig shared-mime-info xorg

USE_GITHUB=	yes
GH_ACCOUNT=	iurie-sw
USE_GNOME=	cairo
USE_XORG=	x11

BUILD_DEPENDS+= cxxfs_gcc8>0:misc/cxxfs_gcc8
CXXFLAGS= -isystem ${LOCALBASE}/cxxfs_gcc8
LDFLAGS= -L${LOCALBASE}/cxxfs_gcc8
IGNORE= unmaintained, please request fixing to users mailing list
dfly-patch:
	${REINPLACE_CMD} -e '/lstdc++fs/s@^#@@g' \
		${WRKSRC}/plugin/lv2/CMakeLists.txt \
		${WRKSRC}/standalone/CMakeLists.txt
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/redkite/CMakeLists.txt

.include <bsd.port.mk>
