# $FreeBSD: deskutils/gtodo/Makefile 327718 2013-09-20 16:21:37Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
