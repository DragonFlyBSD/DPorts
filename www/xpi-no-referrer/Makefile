# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: www/xpi-no-referrer/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	no-referrer
PORTVERSION=	1.0.1
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	An extension to Open URL without sending referrers information

XPI_NUM=	1999
XPI_ID=		{e806da17-8400-4b6b-9c34-1bb4fe84aedc}
XPI_FILES=	chrome/icon.gif chrome/referrer.js chrome/referrer.xul \
		chrome.manifest install.rdf
XPI_DIRS=	chrome

NO_STAGE=	yes
.include "../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
