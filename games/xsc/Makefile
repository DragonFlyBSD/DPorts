# Created by: Mark Pulford <mark@kyne.com.au>
# $FreeBSD: games/xsc/Makefile 322641 2013-07-10 11:11:36Z bdrewery $

PORTNAME=	xsc
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.panix.com/~mbh/xsc/ \
		SF/nemysisfreebsdp/:icons
DISTFILES=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX} \
		${PORTNAME}.png:icons
EXTRACT_ONLY=	${PORTNAME}-${DISTVERSION}${EXTRACT_SUFX}

MAINTAINER=	nemysis@gmx.ch
COMMENT=	Vector graphics space shoot'em up game

USE_XORG=	x11
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/${PORTNAME} \
		share/pixmaps/${PORTNAME}.png

DESKTOP_ENTRIES="Xce" "${COMMENT}" ${PORTNAME} \
		"${PORTNAME}" "Game;ArcadeGame;" false

post-install:
	${INSTALL_DATA} ${_DISTDIR}/${PORTNAME}.png ${PREFIX}/share/pixmaps

.include <bsd.port.mk>
