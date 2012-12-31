# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/devel/R-cran-plyr/Makefile,v 1.12 2012/12/06 22:33:41 svnexp Exp $

PORTNAME=	plyr
PORTVERSION=	1.8
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Tools for splitting, applying, and combining data

RUN_DEPENDS=	R-cran-itertools>0:${PORTSDIR}/devel/R-cran-itertools \
		R-cran-iterators>0:${PORTSDIR}/devel/R-cran-iterators

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
