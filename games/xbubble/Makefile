# New ports collection makefile for:   xbubble
# Date created:        2002-11-03
# Whom:                Klaus Goger <klaus.goger@reflex.at>
#
# $FreeBSD: games/xbubble/Makefile 313761 2013-03-09 21:49:44Z bdrewery $

PORTNAME=	xbubble
PORTVERSION=	0.5.8
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_GENTOO}
MASTER_SITE_SUBDIR=	distfiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Puzzle Bobble clone for Unix/X11 platforms

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

MAN6=		xbubble.6

USE_XORG=	x11 xmu
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes

CPPFLAGS+=	-I${LOCALBASE}/include/libpng15
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

.include <bsd.port.mk>
