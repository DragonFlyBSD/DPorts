# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/devel/R-cran-plyr/Makefile,v 1.13 2013/01/04 18:45:32 svnexp Exp $

PORTNAME=	plyr
PORTVERSION=	1.8
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Tools for splitting, applying, and combining data

RUN_DEPENDS=	R-cran-itertools>0:${PORTSDIR}/devel/R-cran-itertools \
		R-cran-iterators>0:${PORTSDIR}/devel/R-cran-iterators

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
