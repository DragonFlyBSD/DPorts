# New ports collection makefile for:	xpi-pdf_download
# Date created:			2 May 2006
# Whom:				Alex Dupre <ale@FreeBSD.org>
#
# $FreeBSD: ports/www/xpi-pdf_download/Makefile,v 1.28 2012/11/17 06:03:12 svnexp Exp $
#

PORTNAME=	pdf_download
PORTVERSION=	3.0.0.3
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	ale@FreeBSD.org
COMMENT=	An extension to handle PDF files

XPI_ID=		{37E4D8EA-8BDA-4831-8EA1-89053939A250}
XPI_NUM=	636
XPI_FILES=	chrome/pdfdownload.jar chrome.manifest install.rdf \
		defaults/preferences/prefs.js
XPI_DIRS=	chrome defaults/preferences defaults

.include "../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
