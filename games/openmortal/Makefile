# Created by: krion@FreeBSD.org
# $FreeBSD: games/openmortal/Makefile 321181 2013-06-18 11:46:51Z amdmi3 $

PORTNAME=	openmortal
PORTVERSION=	0.7
PORTREVISION=	9
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A parody of the once popular coin-up fighting game, Mortal Kombat

LIB_DEPENDS=	freetype:${PORTSDIR}/print/freetype2

USE_BZIP2=	yes
USE_PERL5=	yes
USE_SDL=	mixer image sdl net
USE_DOS2UNIX=	src/gfx.cpp

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
