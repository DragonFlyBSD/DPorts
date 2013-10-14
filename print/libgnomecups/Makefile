# Created by: Glenn Johnson <glennpj@charter.net>
# $FreeBSD: print/libgnomecups/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	libgnomecups
PORTVERSION=	0.2.3
PORTREVISION=	5
PORTEPOCH=	1
CATEGORIES=	print gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Support library for gnome cups administration

LIB_DEPENDS=	cups:${PORTSDIR}/print/cups-client

USES=		pkgconfig gettext
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack intlhack ltverhack glib20
USE_LDCONFIG=	yes
USE_AUTOTOOLS=  libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

NO_STAGE=	yes
.include <bsd.port.mk>
