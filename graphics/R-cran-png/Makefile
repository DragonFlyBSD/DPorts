# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: graphics/R-cran-png/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	png
DISTVERSION=	0.1-6
PORTREVISION=	1
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
