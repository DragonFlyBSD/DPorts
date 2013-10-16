# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: www/xpi-default_full_zoom_level/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	default_full_zoom_level
PORTVERSION=	4.3
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Default Full Zoom Level extension

XPI_NUM=	6965
XPI_ID=		{D9A7CBEC-DE1A-444f-A092-844461596C4D}
XPI_FILES=	chrome.manifest chrome/defaultfullzoomlevel.jar \
		defaults/preferences/defaultfullzoomlevel.js \
		install.rdf license.txt
XPI_DIRS=	chrome defaults/preferences defaults

REINPLACE_ARGS=	-i ""

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} '/em:maxVersion/s/"[^"][^"]*"/"3.6.*"/' ${WRKSRC}/install.rdf

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
