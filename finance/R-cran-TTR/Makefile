# New ports collection makefile for:	R-cran-TTR
# Date created:		2011-10-30
# Whom:			TAKATSU Tomonari <tota@FreeBSD.org>
#
# $FreeBSD: ports/finance/R-cran-TTR/Makefile,v 1.5 2012/11/17 05:57:25 svnexp Exp $
#

PORTNAME=	TTR
DISTVERSION=	0.21-1
PORTREVISION=	2
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Technical Trading Rules

LICENSE=	GPLv3

RUN_DEPENDS=	R-cran-xts>=0.6.4:${PORTSDIR}/math/R-cran-xts

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
