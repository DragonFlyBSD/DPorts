# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: www/R-cran-scrapeR/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	scrapeR
PORTVERSION=	0.1.6
PORTREVISION=	10
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Tools for Scraping Data from HTML and XML Documents

RUN_DEPENDS=	R-cran-XML>0:${PORTSDIR}/textproc/R-cran-XML \
		R-cran-RCurl>0:${PORTSDIR}/ftp/R-cran-RCurl

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
