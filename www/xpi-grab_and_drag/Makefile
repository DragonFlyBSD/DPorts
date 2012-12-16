# New ports collection makefile for:	xpi-grab_and_drag
# Date created:				2009-04-26
# Whom:					Norikatsu Shigemura <nork@FreeBSD.org>
#
# $FreeBSD: ports/www/xpi-grab_and_drag/Makefile,v 1.5 2012/11/17 06:03:12 svnexp Exp $
#

PORTNAME=	grab_and_drag
PORTVERSION=	2.7.6
DISTVERSIONSUFFIX=	-fx+tb
CATEGORIES=	www

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Adobe Acrobat-style grab and drag scrolling

XPI_NUM=	1250
XPI_ID=		{477c4c36-24eb-11da-94d4-00e08161165f}
XPI_FILES=	chrome.manifest chrome/grabanddrag.jar \
		defaults/preferences/gadDefaults.js \
		icon.png install.rdf license.txt
XPI_DIRS=	chrome defaults/preferences defaults

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
