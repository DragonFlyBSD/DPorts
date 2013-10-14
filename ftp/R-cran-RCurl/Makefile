# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ftp/R-cran-RCurl/Makefile 327729 2013-09-20 17:23:18Z bapt $

PORTNAME=	RCurl
DISTVERSION=	1.95-4.1
PORTREVISION=	2
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

NO_STAGE=	yes
.include <bsd.port.mk>
