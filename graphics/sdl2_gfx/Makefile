PORTNAME=	sdl2_gfx
PORTVERSION=	1.0.4
CATEGORIES=	graphics
MASTER_SITES=	http://www.ferzkopp.net/Software/SDL2_gfx/
DISTNAME=	SDL2_gfx-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	SDL graphics drawing primitives and other support functions
WWW=		https://www.ferzkopp.net/Software/SDL_gfx-2.0/

LICENSE=	ZLIB

USES=		gmake libtool pathfix sdl
USE_SDL=	sdl2
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

PORTSCOUT=	limit:^1\.0\.

OPTIONS_DEFINE=	MMX

MMX_CONFIGURE_ENABLE=	mmx
MMX_CFLAGS=		-DUSE_MMX

post-patch:
	${TOUCH} -mr ${WRKSRC}/configure.in ${WRKSRC}/aclocal.m4

dfly-patch:
	${REINPLACE_CMD} -e "/libSDL2_gfx_la_LINK) -rpath/s/$$/ -lm/g"	\
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
