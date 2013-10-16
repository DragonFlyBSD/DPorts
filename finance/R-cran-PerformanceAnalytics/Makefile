# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: finance/R-cran-PerformanceAnalytics/Makefile 327727 2013-09-20 17:18:38Z bapt $

PORTNAME=	PerformanceAnalytics
PORTVERSION=	1.1.0
PORTREVISION=	2
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Econometric tools for performance and risk analysis

LICENSE=	GPLv1

RUN_DEPENDS=	R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo \
		R-cran-xts>=0.8.9:${PORTSDIR}/math/R-cran-xts

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
