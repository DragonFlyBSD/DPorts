# ex:ts=8
# Ports collection makefile for:	ggz-gtk-client
# Date created:			Oct 22, 2005
# Whom:				ijliao
#
# $FreeBSD: ports/games/ggz-gtk-client/Makefile,v 1.22 2012/11/17 05:57:39 svnexp Exp $
#

PORTNAME=	ggz-gtk-client
PORTVERSION=	${GGZ_VERSION}
PORTREVISION=	6
CATEGORIES=	games

MAINTAINER=	kde@FreeBSD.org
COMMENT=	The GGZ Gaming Zone - GTK+ Frontend

USE_AUTOTOOLS=	libtool
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-debug
USE_GGZ=	client

MAN6=	ggz-gtk.6

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB+=	NLS="@comment "
.else
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.endif

.include <bsd.port.pre.mk>
.include "../../games/libggz/bsd.ggz.mk"
.include <bsd.port.post.mk>
