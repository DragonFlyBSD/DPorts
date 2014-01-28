# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: graphics/sdl_image/Makefile 340157 2014-01-18 09:12:43Z mva $

PORTNAME=	sdl_image
PORTVERSION=	1.2.12
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	http://www.libsdl.org/projects/SDL_image/release/
DISTNAME=	SDL_image-${PORTVERSION}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	Simple library to load images of various formats as SDL surfaces

LICENSE=	LGPL21

LIB_DEPENDS=	libjpeg.so:${PORTSDIR}/graphics/jpeg \
		libpng15.so:${PORTSDIR}/graphics/png \
		libtiff.so:${PORTSDIR}/graphics/tiff \
		libwebp.so:${PORTSDIR}/graphics/webp

USES=		gmake pkgconfig:build pathfix
USE_AUTOTOOLS=	libtool
USE_SDL=	sdl
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lm
USE_LDCONFIG=	yes

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/.libs/showimage ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
