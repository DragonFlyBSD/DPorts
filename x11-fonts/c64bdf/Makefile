# Created by: Marcin Cieslak <saper@SYSTEM.PL>
# $FreeBSD: x11-fonts/c64bdf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	c64bdf
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	http://beej.us/c64bdf/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tgz

MAINTAINER=	saper@saper.info
COMMENT=	Commodore 64 X11 fonts

NO_BUILD=	yes

FONTS=	c64 c64d
FONTDIR=	lib/X11/fonts/${PORTNAME}
FILES=	${FONTS:S,$,.bdf,} fonts.dir
PLIST_FILES=	${FILES:S,^,${FONTDIR}/,}
PLIST_DIRS=	${FONTDIR}

NO_STAGE=	yes
.include <bsd.port.pre.mk>

do-install:
	@${MKDIR} ${LOCALBASE}/${FONTDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${FILES} ${LOCALBASE}/${FONTDIR}

.include <bsd.port.post.mk>
