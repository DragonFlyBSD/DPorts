# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: finance/R-cran-RFinanceYJ/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	RFinanceYJ
PORTVERSION=	0.3.1
PORTREVISION=	1
CATEGORIES=	finance
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Japanese stock market from Yahoo!-finance-Japan

LICENSE=	BSD

RUN_DEPENDS=	R-cran-XML>0:${PORTSDIR}/textproc/R-cran-XML \
		R-cran-xts>0:${PORTSDIR}/math/R-cran-xts

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
