# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/R-cran-plyr/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	plyr
PORTVERSION=	1.8
PORTREVISION=	3
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Tools for splitting, applying, and combining data

RUN_DEPENDS=	R-cran-itertools>0:${PORTSDIR}/devel/R-cran-itertools \
		R-cran-iterators>0:${PORTSDIR}/devel/R-cran-iterators

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
