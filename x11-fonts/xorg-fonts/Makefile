# New ports collection makefile for:    xorg-fonts
# Date created:				Jun 22 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11-fonts/xorg-fonts/Makefile,v 1.8 2012/11/17 06:03:30 svnexp Exp $
#

PORTNAME=	xorg-fonts
PORTVERSION=	7.5.1
CATEGORIES=	x11-fonts
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org fonts meta-port

USE_XORG=	fontutil

FONTSDIR=	${PREFIX}/lib/X11/fonts
RUN_DEPENDS=	xorg-fonts-100dpi>=0:${PORTSDIR}/x11-fonts/xorg-fonts-100dpi \
		xorg-fonts-75dpi>=0:${PORTSDIR}/x11-fonts/xorg-fonts-75dpi \
		xorg-fonts-cyrillic>=0:${PORTSDIR}/x11-fonts/xorg-fonts-cyrillic \
		xorg-fonts-miscbitmaps>=0:${PORTSDIR}/x11-fonts/xorg-fonts-miscbitmaps \
		xorg-fonts-truetype>=0:${PORTSDIR}/x11-fonts/xorg-fonts-truetype \
		xorg-fonts-type1>=0:${PORTSDIR}/x11-fonts/xorg-fonts-type1 \
		${FONTSDIR}/misc/fonts.alias:${PORTSDIR}/x11-fonts/font-alias

NO_BUILD=	yes

do-install:
		${MKDIR} ${PREFIX}/libdata/xorg
		${TOUCH} ${PREFIX}/libdata/xorg/fonts

.include <bsd.port.mk>
