# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: net/sdl_net/Makefile 340168 2014-01-18 12:20:08Z mva $

PORTNAME=	sdl_net
PORTVERSION=	1.2.8
CATEGORIES=	net
MASTER_SITES=	http://www.libsdl.org/projects/SDL_net/release/
DISTNAME=	SDL_net-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	Small sample cross-platform networking library

LICENSE=	ZLIB

USE_AUTOTOOLS=	libtool
USE_SDL=	sdl
USES=		gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=--disable-gui

post-configure:
	@${REINPLACE_CMD} -e \
		's|^deplibs_check_method=.*|deplibs_check_method=pass_all|' \
			${WRKSRC}/libtool

.include <bsd.port.mk>
