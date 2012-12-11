# New ports collection makefile for:	libiptcdata
# Date created:				3rd December 2006
# Whom:					Pav Lucistnik <pav@FreeBSD.org>
#
# $FreeBSD: ports/graphics/libiptcdata/Makefile,v 1.10 2012/11/17 05:58:13 svnexp Exp $
#

PORTNAME=	libiptcdata
PORTVERSION=	1.0.4
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	pav@FreeBSD.org
COMMENT=	Library for manipulating IPTC metadata stored in image files

USE_AUTOTOOLS=	libtool
USE_GNOME=	pkgconfig
USE_ICONV=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-nls

post-patch:
	@${REINPLACE_CMD} -e 's|(libdir)/pkgconfig|(prefix)/libdata/pkgconfig|' ${WRKSRC}/libiptcdata/Makefile.in

.include <bsd.port.mk>
