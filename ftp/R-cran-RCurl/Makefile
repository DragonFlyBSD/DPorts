# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/ftp/R-cran-RCurl/Makefile,v 1.19 2013/01/04 18:45:33 svnexp Exp $

PORTNAME=	RCurl
DISTVERSION=	1.95-3
PORTREVISION=	1
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	General network client interface for R

LICENSE=	BSD

BUILD_DEPENDS=	curl-config:${PORTSDIR}/ftp/curl
RUN_DEPENDS=	R-cran-bitops>0:${PORTSDIR}/devel/R-cran-bitops
LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
