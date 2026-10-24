PORTNAME=	libcoverart
PORTVERSION=	1.0.0
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	https://github.com/metabrainz/${PORTNAME}/releases/download/release-${PORTVERSION}/

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Library for accessing the MusicBrainz cover art archive
WWW=		https://coverartarchive.org/

LICENSE=	LGPL20

DEPRECATED=	Abandoned upstream, does not build with CMake 4
EXPIRATION_DATE=2026-11-30

LIB_DEPENDS=	libjansson.so:devel/jansson \
		libneon.so:www/neon

USES=		compiler:c11 cmake:insource
USE_CSTD=	c99
USE_CXXSTD= gnu++11
USE_LDCONFIG=	yes

CXXFLAGS+=	-Wno-implicit-fallthrough

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == gcc
CXXFLAGS+=	-Wno-unused-function -Wno-class-memaccess -Wno-catch-value
CFLAGS+=	-Wno-format-overflow
.endif

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
		 ${WRKSRC}/cmake/modules/*.cmake

dfly-patch:
	${REINPLACE_CMD} -e 's@-Werror @ @g' \
		${WRKSRC}/examples/CMakeLists.txt \
		${WRKSRC}/src/CMakeLists.txt \
		${WRKSRC}/tests/CMakeLists.txt

.include <bsd.port.post.mk>
