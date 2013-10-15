# Created by: Lapo Luchini <lapo@lapo.it>
# $FreeBSD: www/xpi-searchstatus/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	searchstatus
PORTVERSION=	1.39
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	lapo@lapo.it
COMMENT=	Displays Google PageRank, Alexa popularity and other stats

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/readme.txt

XPI_NUM=	321
XPI_ID=		{d57c9ff1-6389-48fc-b770-f78bd89b6e8a}
XPI_FILES=	chrome/searchstatus.jar install.rdf readme.txt chrome.manifest
XPI_DIRS=	chrome

NO_STAGE=	yes
.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
