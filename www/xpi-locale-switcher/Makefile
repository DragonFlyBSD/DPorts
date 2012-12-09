# New ports collection makefile for:	xpi-locale-switcher
# Date created:		21 May 2006
# Whom:			Alexander V. Ribchansky <triosoft@triosoft.com.ua>
#
# $FreeBSD: ports/www/xpi-locale-switcher/Makefile,v 1.4 2012/11/17 06:03:12 svnexp Exp $
#

PORTNAME=	locale-switcher
PORTVERSION=	2.1
DISTVERSIONSUFFIX=	-fx+tb
CATEGORIES=	www

MAINTAINER=	triosoft@triosoft.com.ua
COMMENT=	Provides a convenient menu item to switch between installed languages

XPI_DISTNAME=	locale_switcher
XPI_NUM=	356
XPI_ID=		{338e0b96-2285-4424-b4c8-e25560750fa3}
XPI_FILES=	chrome/content/switch-tbird.xul chrome/content/switch.js \
		chrome/content/switch.xul chrome.manifest install.rdf
XPI_DIRS=	chrome/content chrome

.include "${.CURDIR}/../../www/xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
