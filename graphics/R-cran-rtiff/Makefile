# New ports collection makefile for:	R-cran-rtiff
# Date created:		2012-02-21
# Whom:			TAKATSU Tomonari <tota@FreeBSD.org>
#
# $FreeBSD: ports/graphics/R-cran-rtiff/Makefile,v 1.5 2012/11/17 05:58:00 svnexp Exp $
#

PORTNAME=	rtiff
PORTVERSION=	1.4.1
PORTREVISION=	3
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	A tiff reader for R

LIB_DEPENDS=	tiff:${PORTSDIR}/graphics/tiff
RUN_DEPENDS=	R-cran-pixmap>0:${PORTSDIR}/graphics/R-cran-pixmap

LICENSE_FILE=	${WRKSRC}/LICENSE

LDFLAGS+=	-L${LOCALBASE}/lib

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
