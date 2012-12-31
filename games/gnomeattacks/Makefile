# New ports collection makefile for:	gnomeattacks
# Date created:				01 July 2003
# Whom:					Adam Weinberger <adamw@FreeBSD.org>
#
# $FreeBSD: ports/games/gnomeattacks/Makefile,v 1.18 2012/11/17 05:57:40 svnexp Exp $
#

PORTNAME=	gnomeattacks
PORTVERSION=	0.3
PORTREVISION=	13
CATEGORIES=	games gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME 2 game featuring a bizarre flying GNOME logo

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack gnomeprefix gnomevfs2 libgnomeui
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
