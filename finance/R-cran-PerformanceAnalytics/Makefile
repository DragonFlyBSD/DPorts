# New ports collection makefile for:	R-cran-PerformanceAnalytics
# Date created:		2012-04-19
# Whom:			TAKATSU Tomonari <tota@FreeBSD.org>
#
# $FreeBSD: ports/finance/R-cran-PerformanceAnalytics/Makefile,v 1.4 2012/11/17 05:57:25 svnexp Exp $
#

PORTNAME=	PerformanceAnalytics
PORTVERSION=	1.0.4.4
PORTREVISION=	2
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Econometric tools for performance and risk analysis

LICENSE=	GPLv1

RUN_DEPENDS=	R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo \
		R-cran-xts>=0.8:${PORTSDIR}/math/R-cran-xts

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
