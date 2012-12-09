# New ports collection makefile for:	xpi-flatbmark
# Date created:		2007-09-21
# Whom:			Gustavo Fukao <gustavofukao@gmail.com>
#
# $FreeBSD: ports/www/xpi-flatbmark/Makefile,v 1.2 2012/11/17 06:03:12 svnexp Exp $
#

PORTNAME=	flatbmark
DISTVERSION=	0.8.1
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	gustavofukao@gmail.com
COMMENT=	Edit bookmarks without opening the properties window

XPI_NUM=	117
XPI_DISTNAME=	flat_bookmark_editing
XPI_ID=		{5362CD9D-AC69-43e5-8E7D-92EDE5CEF304}
XPI_FILES=	chrome/flatbmark.jar install.rdf chrome.manifest
XPI_DIRS=	chrome

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
