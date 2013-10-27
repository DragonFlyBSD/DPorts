# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: security/R-cran-ROAuth/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	ROAuth
PORTVERSION=	0.9.3
PORTREVISION=	2
CATEGORIES=	security
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface for OAuth

LICENSE=	ART20

RUN_DEPENDS=	R-cran-RCurl>=1.6.4:${PORTSDIR}/ftp/R-cran-RCurl \
		R-cran-digest>0:${PORTSDIR}/security/R-cran-digest

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
