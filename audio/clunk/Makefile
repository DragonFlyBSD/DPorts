PORTNAME=	clunk
PORTVERSION=	1.3.261
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF/clunk

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Real-time 3D sound generation library
WWW=		https://sourceforge.net/projects/clunk/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake sdl tar:bzip2
USE_CXXSTD=	c++14
USE_LDCONFIG=	yes
USE_SDL=	sdl

CONFLICTS_INSTALL=	btanks # lib/libclunk.so

OPTIONS_DEFINE=	SSE
OPTIONS_DEFAULT_x86_64=SSE

SSE_CMAKE_ON=	-DWITH_SSE:BOOL=TRUE

post-install:
	${INSTALL_DATA} ${WRKSRC}/clunk/types.h ${STAGEDIR}${PREFIX}/include/clunk
	${INSTALL_DATA} ${WRKSRC}/clunk/audio_spec.h ${STAGEDIR}${PREFIX}/include/clunk
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/clunk/backend/sdl
	${INSTALL_DATA} ${WRKSRC}/clunk/backend/sdl/locker.h ${STAGEDIR}${PREFIX}/include/clunk/backend/sdl
	${MV} ${STAGEDIR}${PREFIX}/include/clunk/backend.h ${STAGEDIR}${PREFIX}/include/clunk/backend/sdl

.include <bsd.port.mk>
