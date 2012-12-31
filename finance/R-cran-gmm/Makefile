# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/finance/R-cran-gmm/Makefile,v 1.14 2012/11/24 06:16:49 svnexp Exp $

PORTNAME=	gmm
DISTVERSION=	1.4-4
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Generalized Method of Moments and Generalized Empirical Likelihood

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-sandwich>0:${PORTSDIR}/math/R-cran-sandwich

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
