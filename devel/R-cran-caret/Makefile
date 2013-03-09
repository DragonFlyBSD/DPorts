# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/devel/R-cran-caret/Makefile,v 1.30 2013/02/15 13:07:53 svnexp Exp $

PORTNAME=	caret
DISTVERSION=	5.15-61
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Classification and Regression Training

LICENSE=	GPLv2

RUN_DEPENDS=	R-cran-reshape2>0:${PORTSDIR}/devel/R-cran-reshape2 \
		R-cran-plyr>0:${PORTSDIR}/devel/R-cran-plyr \
		R-cran-foreach>0:${PORTSDIR}/devel/R-cran-foreach

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
