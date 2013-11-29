# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: devel/R-cran-reshape2/Makefile 335044 2013-11-27 18:56:43Z dbn $

PORTNAME=	reshape2
PORTVERSION=	1.2.2
PORTREVISION=	5
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Flexibly reshape data: a reboot of the reshape package

LICENSE=	MIT

RUN_DEPENDS=	R-cran-plyr>=1.5:${PORTSDIR}/devel/R-cran-plyr \
		R-cran-stringr>0:${PORTSDIR}/textproc/R-cran-stringr

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
