# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: graphics/R-cran-png/Makefile 333659 2013-11-13 08:19:34Z bf $

PORTNAME=	png
DISTVERSION=	0.1-6
PORTREVISION=	2
CATEGORIES=	graphics
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Read and write PNG images

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
