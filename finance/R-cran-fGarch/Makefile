# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: finance/R-cran-fGarch/Makefile 337846 2013-12-28 10:28:40Z dbn $

PORTNAME=	fGarch
PORTVERSION=	3010.82
PORTREVISION=	3
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Autoregressive Conditional Heteroskedastic Modelling

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-timeDate>0:${PORTSDIR}/finance/R-cran-timeDate \
		R-cran-timeSeries>0:${PORTSDIR}/finance/R-cran-timeSeries \
		R-cran-fBasics>=2100.78:${PORTSDIR}/finance/R-cran-fBasics

USES=	cran:auto-plist

.include <bsd.port.mk>
