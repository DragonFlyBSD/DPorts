# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: ports/www/R-cran-scrapeR/Makefile,v 1.10 2013/01/04 18:45:38 svnexp Exp $

PORTNAME=	scrapeR
PORTVERSION=	0.1.6
PORTREVISION=	7
CATEGORIES=	www
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Tools for Scraping Data from HTML and XML Documents

RUN_DEPENDS=	R-cran-XML>0:${PORTSDIR}/textproc/R-cran-XML \
		R-cran-RCurl>0:${PORTSDIR}/ftp/R-cran-RCurl

USE_R_MOD=	yes
R_MOD_AUTOPLIST=	yes

.include <bsd.port.mk>
