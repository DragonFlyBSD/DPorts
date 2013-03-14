# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: graphics/R-cran-rtiff/Makefile 313562 2013-03-07 04:21:34Z bf $

PORTNAME=	rtiff
PORTVERSION=	1.4.2
PORTREVISION=	1
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
