# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: www/xpi-it_s_all_text/Makefile 341209 2014-01-26 15:10:59Z miwi $

PORTNAME=	it_s_all_text
PORTVERSION=	1.8.1
DISTVERSIONSUFFIX=	-sm+fx
CATEGORIES=	www
DISTNAME=	${PORTNAME:S/it_s/its/}-${DISTVERSIONPREFIX}${DISTVERSION}${DISTVERSIONSUFFIX}

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Edit textareas using an external editor

XPI_NUM=	4125
XPI_ID=		itsalltext@docwhat.gerf.org
XPI_FILES=	chrome.manifest \
		defaults/preferences/itsalltext.js \
		gpl.txt install.rdf
XPI_DIRS=	chrome \
		defaults/preferences defaults

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
