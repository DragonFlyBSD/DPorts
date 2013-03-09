# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: ports/finance/R-cran-lmtest/Makefile,v 1.7 2013/01/04 18:45:33 svnexp Exp $

PORTNAME=	lmtest
DISTVERSION=	0.9-30
PORTREVISION=	1
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Testing Linear Regression Models

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-zoo>=0:${PORTSDIR}/math/R-cran-zoo \
		R-cran-strucchange>0:${PORTSDIR}/finance/R-cran-strucchange \
		R-cran-sandwich>=2.2.4:${PORTSDIR}/math/R-cran-sandwich

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
