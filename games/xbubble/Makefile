# Created by: Klaus Goger <klaus.goger@reflex.at>
# $FreeBSD: games/xbubble/Makefile 333640 2013-11-13 02:06:26Z danilo $

PORTNAME=	xbubble
PORTVERSION=	0.5.8
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GENTOO}
MASTER_SITE_SUBDIR=	distfiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Puzzle Bobble clone for Unix/X11 platforms

LIB_DEPENDS=	libpng15.so:${PORTSDIR}/graphics/png

USE_XORG=	x11 xmu
GNU_CONFIGURE=	yes
USES=		gettext gmake

CPPFLAGS+=	-I${LOCALBASE}/include/libpng15
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include <bsd.port.mk>
