# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/R-cran-caret/Makefile 340318 2014-01-19 15:52:11Z tota $

PORTNAME=	caret
DISTVERSION=	6.0-22
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Classification and Regression Training

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-ggplot2>0:${PORTSDIR}/graphics/R-cran-ggplot2 \
		R-cran-car>0:${PORTSDIR}/math/R-cran-car \
		R-cran-reshape2>0:${PORTSDIR}/devel/R-cran-reshape2 \
		R-cran-foreach>0:${PORTSDIR}/devel/R-cran-foreach \
		R-cran-plyr>0:${PORTSDIR}/devel/R-cran-plyr

USES=	cran:auto-plist

.include <bsd.port.mk>
