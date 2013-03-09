# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/finance/R-cran-RFinanceYJ/Makefile,v 1.10 2013/01/04 18:45:33 svnexp Exp $

PORTNAME=	RFinanceYJ
PORTVERSION=	0.1.6
PORTREVISION=	7
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Japanese stock market from Yahoo!-finance-Japan

LICENSE=	BSD

RUN_DEPENDS=	R-cran-XML>0:${PORTSDIR}/textproc/R-cran-XML \
		R-cran-xts>0:${PORTSDIR}/math/R-cran-xts

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
