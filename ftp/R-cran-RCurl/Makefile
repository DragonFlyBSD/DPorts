# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ftp/R-cran-RCurl/Makefile 337846 2013-12-28 10:28:40Z dbn $

PORTNAME=	RCurl
DISTVERSION=	1.95-4.1
PORTREVISION=	4
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	General network client interface for R

LICENSE=	BSD

BUILD_DEPENDS=	curl-config:${PORTSDIR}/ftp/curl
RUN_DEPENDS=	R-cran-bitops>0:${PORTSDIR}/devel/R-cran-bitops
LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USES=	cran:auto-plist

.include <bsd.port.mk>
