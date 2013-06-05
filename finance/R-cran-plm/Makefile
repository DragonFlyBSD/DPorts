# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: finance/R-cran-plm/Makefile 319316 2013-05-28 15:15:05Z bf $

PORTNAME=	plm
DISTVERSION=	1.3-1
PORTREVISION=	3
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Linear Models for Panel Data

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-bdsmatrix>0:${PORTSDIR}/math/R-cran-bdsmatrix \
		R-cran-Formula>=0.2.0:${PORTSDIR}/math/R-cran-Formula \
		R-cran-sandwich>0:${PORTSDIR}/math/R-cran-sandwich \
		R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
