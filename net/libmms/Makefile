# Created by: Koop Mast <kwm@FreeBSD.org>
# $FreeBSD: net/libmms/Makefile 325749 2013-08-31 00:26:08Z bapt $

PORTNAME=	libmms
PORTVERSION=	0.6.2
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Library for parsing mms:// and mmsh:// type network streams

USE_GNOME=	glib20
USES=		pathfix gettext iconv pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

.include <bsd.port.mk>
