# New ports collection makefile for:	libdmtx
# Date created:				16 April 2009
# Whom:					johans
#
# $FreeBSD: ports/graphics/libdmtx/Makefile,v 1.13 2012/12/11 20:58:17 svnexp Exp $
#

PORTNAME=	libdmtx
PORTVERSION=	0.7.4
PORTREVISION=	3
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Library for reading and writing Data Matrix barcodes

LIB_DEPENDS=	MagickWand:${PORTSDIR}/graphics/ImageMagick

MAN3=		libdmtx.3

USE_BZIP2=	yes
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -e '/^pkgconfigdir /s:(libdir):{prefix}/libdata:' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
