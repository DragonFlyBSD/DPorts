# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: math/R-cran-Zelig/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	Zelig
DISTVERSION=	4.1-3
PORTREVISION=	2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Everyone's Statistical Software

BUILD_DEPENDS=	R-cran-sandwich>=0:${PORTSDIR}/math/R-cran-sandwich
RUN_DEPENDS=	R-cran-sandwich>=0:${PORTSDIR}/math/R-cran-sandwich

USE_R_MOD=	yes
R_MOD_AUTOPLIST=yes

NO_STAGE=	yes
.include <bsd.port.mk>
