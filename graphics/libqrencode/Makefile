# ex:ts=8
# Ports collection makefile for:	libqrencode
# Date created:			Dec 14, 2006
# Whom:				ijliao
#
# $FreeBSD: ports/graphics/libqrencode/Makefile,v 1.28 2012/11/17 05:58:13 svnexp Exp $
#

PORTNAME=	libqrencode
PORTVERSION=	3.4.0
PORTREVISION=	0
CATEGORIES=	graphics
MASTER_SITES=	http://fukuchi.org/works/qrencode/
DISTNAME=	qrencode-${PORTVERSION}

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	A C library for encoding data in a QR Code symbol

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

USE_PKGCONFIG=	yes
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-I${LOCALBASE}/include

MAN1=		qrencode.1

PLIST_FILES=	bin/qrencode \
		include/qrencode.h \
		lib/libqrencode.la \
		lib/libqrencode.so \
		lib/libqrencode.so.3 \
		libdata/pkgconfig/libqrencode.pc

post-patch:
	@${REINPLACE_CMD} -e 's,libpng12,libpng,' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e '9s|$$| ${PTHREAD_LIBS}|' ${WRKSRC}/libqrencode.pc.in

.include <bsd.port.mk>
