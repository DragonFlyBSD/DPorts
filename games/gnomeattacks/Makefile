# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: games/gnomeattacks/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gnomeattacks
PORTVERSION=	0.3
PORTREVISION=	13
CATEGORIES=	games gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME 2 game featuring a bizarre flying GNOME logo

GNU_CONFIGURE=	yes
USES=		pathfix gmake pkgconfig
USE_GNOME=	gnomeprefix gnomevfs2 libgnomeui
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lm

NO_STAGE=	yes
.include <bsd.port.mk>
