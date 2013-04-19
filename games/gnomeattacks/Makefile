# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: games/gnomeattacks/Makefile 315433 2013-03-28 03:28:30Z eadler $

PORTNAME=	gnomeattacks
PORTVERSION=	0.3
PORTREVISION=	13
CATEGORIES=	games gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME 2 game featuring a bizarre flying GNOME logo

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES=        pathfix
USE_GNOME=	gnomeprefix gnomevfs2 libgnomeui
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
