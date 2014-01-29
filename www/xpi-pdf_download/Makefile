# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: www/xpi-pdf_download/Makefile 341213 2014-01-26 15:12:42Z miwi $

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
