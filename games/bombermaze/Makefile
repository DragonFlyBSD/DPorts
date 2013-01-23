# New ports collection makefile for:	bombermaze
# Date created:				25 July 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/games/bombermaze/Makefile,v 1.39 2012/11/17 05:57:33 svnexp Exp $
#

PORTNAME=	bombermaze
PORTVERSION=	0.6.6
PORTREVISION=	11
CATEGORIES=	games gnome
MASTER_SITES=	SF

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A multiplayer game, strategy place bombs to kill enemies and obstacles

USE_GMAKE=	yes
USE_GNOME=	gnomeprefix gnomehack gnomelibs gdkpixbuf
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

CFLAGS+=	-fpermissive

.include <bsd.port.mk>
