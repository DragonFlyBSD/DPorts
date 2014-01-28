# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: math/R-cran-RcppArmadillo/Makefile 341109 2014-01-25 21:24:02Z tota $

PORTNAME=	RcppArmadillo
PORTVERSION=	0.4.000.2
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Rcpp integration for Armadillo templated linear algebra library

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	R-cran-Rcpp>=0.10.5:${PORTSDIR}/devel/R-cran-Rcpp

USES=	cran:auto-plist

post-patch:
	${REINPLACE_CMD} -e 's|bin/bash|bin/sh|' ${WRKSRC}/configure

.include <bsd.port.mk>
