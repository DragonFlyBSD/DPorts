# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/security/R-cran-ROAuth/Makefile,v 1.12 2013/01/04 18:45:37 svnexp Exp $

PORTNAME=	ROAuth
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	security
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	R interface for OAuth

LICENSE=	ART20

RUN_DEPENDS=	R-cran-RCurl>=1.6.4:${PORTSDIR}/ftp/R-cran-RCurl \
		R-cran-digest>0:${PORTSDIR}/security/R-cran-digest

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
