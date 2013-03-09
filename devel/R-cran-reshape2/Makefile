# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/devel/R-cran-reshape2/Makefile,v 1.7 2013/01/04 18:45:32 svnexp Exp $

PORTNAME=	reshape2
PORTVERSION=	1.2.2
PORTREVISION=	1
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
