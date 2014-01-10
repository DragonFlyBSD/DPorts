# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: math/R-cran-spdep/Makefile 337846 2013-12-28 10:28:40Z dbn $

PORTNAME=	spdep
DISTVERSION=	0.5-68
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Spatial dependence: weighting schemes, statistics, and models

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-sp>=0.9:${PORTSDIR}/math/R-cran-sp \
		R-cran-deldir>0:${PORTSDIR}/math/R-cran-deldir \
		R-cran-coda>0:${PORTSDIR}/math/R-cran-coda \
		R-cran-LearnBayes>0:${PORTSDIR}/math/R-cran-LearnBayes

USES=	cran:auto-plist

.include <bsd.port.mk>
