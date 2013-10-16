# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: www/xpi-live_pagerank/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	live_pagerank
PORTVERSION=	0.9.7
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Display PageRank for active URL

XPI_NUM=	2007
XPI_ID=		{8061ddcf-3632-4287-8d8a-133e219ae838}
XPI_FILES=	chrome.manifest chrome/livepr.jar \
		install.rdf
XPI_DIRS=	chrome

NO_STAGE=	yes
.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
