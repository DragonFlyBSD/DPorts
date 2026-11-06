PORTNAME=	ossim
DISTVERSIONPREFIX=v
DISTVERSION=	2.12.1
CATEGORIES=	graphics geography

MAINTAINER=	lbartoletti@FreeBSD.org
COMMENT=	Powerful suite of geospatial libraries and applications
WWW=		https://github.com/ossimlabs/ossim

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libcurl.so:ftp/curl \
		libfreetype.so:print/freetype2 \
		libgeos.so:graphics/geos \
		libgeotiff.so:graphics/libgeotiff \
		libjsoncpp.so:devel/jsoncpp \
		libtiff.so:graphics/tiff \
		libproj.so:graphics/proj

USES=		cmake compiler:c++17-lang jpeg sqlite
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	ossimlabs

CMAKE_OFF=	BUILD_OSSIM_APPS \
		BUILD_OSSIM_ID_SUPPORT
CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_Git
CMAKE_ARGS=	-DBUILD_LIBRARY_DIR:STRING=lib \
		-DLIBSUFFIX:STRING="" \
		-DINSTALL_ARCHIVE_DIR:STRING=lib \
		-DINSTALL_LIBRARY_DIR:STRING=lib \
		-DOSSIM_INCLUDE_DIR:STRING=${WRKSRC}/include \
		-DJSONCPP_INCLUDE_DIR:STRING=${LOCALBASE}/include/jsoncpp \
		-DJSONCPP_LIBRARY:STRING=${LOCALBASE}/lib/libjsoncpp.so

OPTIONS_DEFINE=	TEST
OPTIONS_SUB=	yes

TEST_CMAKE_BOOL=       BUILD_OSSIM_TESTS

dfly-patch:
	${REINPLACE_CMD} -e 's/!defined( __FreeBSD__)/& \&\& !defined(__DragonFly__)/' \
		-e 's/!defined(__APPLE__) && !defined(__FreeBSD__)/& \&\& !defined(__DragonFly__)/' \
		-e 's/|| defined(__FreeBSD__)/& || defined(__DragonFly__)/' \
		${WRKSRC}/src/base/ossimDate.cpp \
		${WRKSRC}/src/sockets/ossimToolServer.cpp \
		${WRKSRC}/src/vpfutil/linklist.c \
		${WRKSRC}/src/vpfutil/vpfclip.c \
		${WRKSRC}/src/vpfutil/vpfcntnt.c \
		${WRKSRC}/src/vpfutil/vpfdict.c \
		${WRKSRC}/src/vpfutil/vpfdisp.c \
		${WRKSRC}/src/vpfutil/vpfmisc.c \
		${WRKSRC}/src/vpfutil/vpfprim.c \
		${WRKSRC}/src/vpfutil/vpfquery.c \
		${WRKSRC}/src/vpfutil/vpfrelat.c \
		${WRKSRC}/src/vpfutil/vpfselec.c

.include <bsd.port.mk>
