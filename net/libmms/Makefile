# New ports collection makefile for:	libmms
# Date created:				25 Dec 2004
# Whom:					Koop Mast <kwm@FreeBSD.org>
#
# $FreeBSD: net/libmms/Makefile 316662 2013-04-27 11:59:28Z mva $
#

PORTNAME=	libmms
PORTVERSION=	0.6.2
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Library for parsing mms:// and mmsh:// type network streams

USE_GNOME=	pkgconfig glib20
USES=		pathfix gettext iconv
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
USE_LDCONFIG=	yes

.include <bsd.port.mk>
