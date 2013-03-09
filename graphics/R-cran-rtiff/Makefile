# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/graphics/R-cran-rtiff/Makefile,v 1.7 2013/02/08 15:55:16 svnexp Exp $

PORTNAME=	rtiff
PORTVERSION=	1.4.2
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	TIFF reader for R

LIB_DEPENDS=	tiff:${PORTSDIR}/graphics/tiff
RUN_DEPENDS=	R-cran-pixmap>0:${PORTSDIR}/graphics/R-cran-pixmap

LICENSE_FILE=	${WRKSRC}/LICENSE

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
