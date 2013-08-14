# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: net/R-cran-twitteR/Makefile 323593 2013-07-24 13:06:07Z tota $

PORTNAME=	twitteR
PORTVERSION=	1.1.7
CATEGORIES=	net
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R based Twitter client

LICENSE=	ART20

RUN_DEPENDS=	R-cran-RCurl>0:${PORTSDIR}/ftp/R-cran-RCurl \
		R-cran-rjson>=0.2.12:${PORTSDIR}/converters/R-cran-rjson \
		R-cran-ROAuth>=0.9.3:${PORTSDIR}/security/R-cran-ROAuth

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
