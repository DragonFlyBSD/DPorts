# $FreeBSD: deskutils/gtodo/Makefile 326122 2013-09-03 06:36:41Z bapt $

PORTNAME=	gtodo
PORTVERSION=	0.14
PORTREVISION=	13
CATEGORIES=	deskutils gnome
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An Gtk2 Todo list manager

USES=		pathfix gettext gmake pkgconfig
USE_GNOME=	gnomeprefix gnomevfs2
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

GCONF_SCHEMAS=	gtodo.schemas

.include <bsd.port.mk>
