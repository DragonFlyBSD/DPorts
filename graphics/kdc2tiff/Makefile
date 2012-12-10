# New ports collection makefile for:	kdc2tiff
# Date created:				Tue 04 Jul 2000
# Whom:					will
#
# $FreeBSD: ports/graphics/kdc2tiff/Makefile,v 1.16 2012/11/17 05:58:11 svnexp Exp $
#

PORTNAME=	kdc2tiff
PORTVERSION=	0.35
PORTREVISION=	2
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts Kodak .kdc to TIFF or JPEG formats

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		tiff.4:${PORTSDIR}/graphics/tiff

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/kdc2jpeg bin/kdc2tiff

.include <bsd.port.mk>
