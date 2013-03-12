# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: finance/R-cran-fBasics/Makefile 313562 2013-03-07 04:21:34Z bf $

PORTNAME=	fBasics
PORTVERSION=	2160.85
PORTREVISION=	2
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Markets and Basic Statistics

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-timeDate>0:${PORTSDIR}/finance/R-cran-timeDate \
		R-cran-timeSeries>=2100.84:${PORTSDIR}/finance/R-cran-timeSeries \
		R-cran-stabledist>0:${PORTSDIR}/math/R-cran-stabledist

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
