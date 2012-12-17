# New ports collection makefile for:	xwelltris
# Date created:		1 Feb 2004
# Whom:			lev
#
# $FreeBSD: ports/games/xwelltris/Makefile,v 1.8 2012/11/17 05:57:59 svnexp Exp $
#

PORTNAME=	xwelltris
PORTVERSION=	1.0.1
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://www.xnc.dubna.su/xwelltris/src/ \
		http://freebsd.unixfreunde.de/sources/
DISTNAME=	${PORTNAME}-${PORTVERSION}.src

MAINTAINER=	lev@FreeBSD.org
COMMENT=	3D Tetris-like game

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PLIST_FILES=	bin/xwelltris \
		share/xwelltris/board2.gif \
		share/xwelltris/font2.gif \
		share/xwelltris/polyomino.dat \
		share/xwelltris/topnine.gif \
		share/xwelltris/wellcuts.gif \
		share/xwelltris/wellintro.gif \
		share/xwelltris/welltris.scores
PLIST_DIRS=	share/xwelltris
GNU_CONFIGURE=	yes
USE_XORG=	ice sm x11 xau xcursor xdmcp xext xfixes xi xrandr

.include <bsd.port.mk>
