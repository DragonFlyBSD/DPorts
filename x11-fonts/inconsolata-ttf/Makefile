# Created by: Ashish Shukla <wahjava@gmail.com>
# $FreeBSD: x11-fonts/inconsolata-ttf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	inconsolata-ttf
PORTVERSION=	20090215
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.levien.com/type/myfonts/
DISTNAME=	Inconsolata
EXTRACT_SUFX=	.otf
EXTRACT_ONLY=

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	A monospaced truetype font

USE_XORG=	x11
INSTALLS_TTF=	yes
XORG_CAT=	font
FONTDIR=	OTF
PLIST_FILES=	lib/X11/fonts/${FONTDIR}/${DISTNAME}${EXTRACT_SUFX}

NO_STAGE=	yes
do-configure:

do-build:

do-install:
	${MKDIR} ${PREFIX}/lib/X11/fonts/${FONTDIR}
	${INSTALL_DATA} ${DISTDIR}/${DIST_SUBDIR}/${DISTFILES} ${PREFIX}/lib/X11/fonts/${FONTDIR}

.include <bsd.port.mk>
