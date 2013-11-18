# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/R-cran-caret/Makefile 333659 2013-11-13 08:19:34Z bf $

PORTNAME=	caret
DISTVERSION=	5.17-7
PORTREVISION=	2
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

NO_STAGE=	yes
.include <bsd.port.mk>
