# Created by: chinsan
# $FreeBSD: vietnamese/vietunicode-web1/Makefile 327775 2013-09-20 23:20:31Z bapt $

PORTNAME=	vietunicode-web1
PORTVERSION=	2004.04.30
PORTREVISION=	2
CATEGORIES=	vietnamese x11-fonts
MASTER_SITES=	SF/vietunicode/VietFonts-Web1/Web1%20Package%20v2004
DISTNAME=	VietFontsWeb1_ttf

MAINTAINER=	ports@FreeBSD.org
COMMENT=	100% Viet Unicode & Viet Phan/Pali-Sanskrit compatible

USE_ZIP=	yes
DIST_SUBDIR=	VietUnicode
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

TTF=		vuTimes.ttf vuTimesBold.ttf vuTimesBoldItalic.ttf vuTimesItalic.ttf \
		vuArial.ttf vuArialBold.ttf vuArialBoldItalic.ttf vuArialItalic.ttf

NO_STAGE=	yes
do-install:
	@${MKDIR} ${FONTSDIR}
.for i in ${TTF}
	${INSTALL_DATA} ${WRKSRC}/${i} ${FONTSDIR}
.endfor

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/chinese/ttfm/Makefile.ttf"
.include <bsd.port.post.mk>
