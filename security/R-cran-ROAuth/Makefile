# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: security/R-cran-ROAuth/Makefile 337846 2013-12-28 10:28:40Z dbn $

PORTNAME=	ROAuth
PORTVERSION=	0.9.3
PORTREVISION=	3
CATEGORIES=	security
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface for OAuth

LICENSE=	ART20

RUN_DEPENDS=	R-cran-RCurl>=1.6.4:${PORTSDIR}/ftp/R-cran-RCurl \
		R-cran-digest>0:${PORTSDIR}/security/R-cran-digest

USES=	cran:auto-plist

.include <bsd.port.mk>
