# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: finance/R-cran-quantmod/Makefile 337846 2013-12-28 10:28:40Z dbn $

PORTNAME=	quantmod
DISTVERSION=	0.4-0
PORTREVISION=	4
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Quantitative Financial Modelling and Trading Framework for R

LICENSE=	GPLv3

RUN_DEPENDS=	R-cran-Defaults>0:${PORTSDIR}/devel/R-cran-Defaults \
		R-cran-xts>=0.9.0:${PORTSDIR}/math/R-cran-sp \
		R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo \
		R-cran-TTR>=0.2:${PORTSDIR}/finance/R-cran-TTR

USES=	cran:auto-plist

.include <bsd.port.mk>
