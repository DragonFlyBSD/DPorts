PORTNAME=	fs2open
DISTVERSIONPREFIX=	release_
DISTVERSION=	26_0_1
CATEGORIES=	games

MAINTAINER=	pkubaj@FreeBSD.org
COMMENT=	Open source video engine of FreeSpace 2
WWW=		http://scp.indiegames.us

LICENSE=	VOLITION
LICENSE_NAME=	Volition Copyright
LICENSE_FILE=	${WRKSRC}/Copying.md
LICENSE_PERMS=	dist-mirror auto-accept

LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		libjansson.so:devel/jansson \
		libpng.so:graphics/png \
		libfreetype.so:print/freetype2

USES=		cmake compiler:c++11-lib lua:51 jpeg openal pkgconfig sdl
USE_GITHUB=	yes
GH_ACCOUNT=	scp-fs2open
GH_PROJECT=	fs2open.github.com
GH_TUPLE=	asarium:cmake-modules:7cef957:cmakemodules/cmake/external/rpavlik-cmake-modules \
		asarium:libRocket:b0c18e1:libRocket/lib/libRocket
USE_SDL=	sdl2

CMAKE_OFF=	FSO_BUILD_WITH_OPENXR
LDFLAGS_i386=	-Wl,-znotext

PLIST_FILES=	bin/fs2_open

DFLY_UNMAINTAINED= yes
do-install:
	${INSTALL_PROGRAM} ${BUILD_WRKSRC}/bin/fs2_open \
		${STAGEDIR}${PREFIX}/bin

dfly-patch:
	${REINPLACE_CMD} -e '/MATCHES/s@\("FreeBSD\)"@\1|DragonFly"@g' \
		${WRKSRC}/cmake/platforms.cmake
	${REINPLACE_CMD} -e 's@HAVE_EXECINFO_H@do_not_use@g' \
		${WRKSRC}/code/windows_stub/stubs.cpp

.include <bsd.port.mk>
