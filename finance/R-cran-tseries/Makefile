# Created by: David Naylor <naylor.b.david@gmail.com>
# $FreeBSD: finance/R-cran-tseries/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	tseries
DISTVERSION=	0.10-32
PORTREVISION=	2
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	dbn@FreeBSD.org
COMMENT=	Time series analysis and computational finance

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

BUILD_DEPENDS=	R-cran-quadprog>0:${PORTSDIR}/math/R-cran-quadprog \
		R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo
RUN_DEPENDS=	R-cran-quadprog>0:${PORTSDIR}/math/R-cran-quadprog \
		R-cran-zoo>0:${PORTSDIR}/math/R-cran-zoo

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
